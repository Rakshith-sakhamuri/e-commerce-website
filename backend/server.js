const express = require('express')
const app = express()
const port = 3000

const apiRoutes = require("./routes/apiRoutes")

app.get('/', (req, res) => {
    console.log("synchronus code")
    throw new Error("some new error occured")
    res.json({message: "API running..."})
})

app.get('/a', (req, res, next) => {
    setTimeout(() => {
        try {
            aconsole.log("asynchronus code");
        } catch (er) {
            next(er);
        }
    },1000)
    // next(new Error("some error occured"))
    // res.send("Hello world")
})



app.use('/api', apiRoutes)

app.use((error, req, res, next) => {
    res.status(500).json({
        message: error.message,
        stack: error.stack
    })
})
// app.get('/api/products', (req,res) => {
//     res.send("Handling product routes.")
// })

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})