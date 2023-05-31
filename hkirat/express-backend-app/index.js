const express = require('express')
const app = express()
const port = 3000

app.get('/route1', (req, res) => {
  res.send('Hello World!')
})

app.get('/route2', (req, res) => {
  res.send('Hello World from route 2!')
})


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})