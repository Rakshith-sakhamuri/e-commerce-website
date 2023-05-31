import React, { useState } from 'react'

export default function TextForm(props) {
  const handleUpClick = () => {
    console.log("Uppercsee was clicked");
    setText("you have clicked on handleUpClick")
    let newText = text.toUpperCase();
    setText(newText);
  }

  const handleDownClick = () => {
    console.log("Uppercsee was clicked");
    setText("you have clicked on handleUpClick")
    let newText = text.toLowerCase();
    setText(newText);
  }

  const ClearText = () => {
    console.log("ClearText was clicked");
    setText("")
    // let newText = text.toLowerCase();
    // setText(newText);
  }

  const handleOnChange = (event) => {
    console.log("on change");
    setText(event.target.value);
  }

  const [text,setText] = useState("This is the initial text");

  return (
    <>
    <div className="container">
        <h1>{props.heading}</h1>
        <div className="mb-3">
            <textarea className='form-control' value={text} id="myBox" onChange={handleOnChange} rows="8" ></textarea>
        </div>
        <button className="btn btn-primary mx-2" onClick={handleUpClick}>Convert Uppercase</button>
        <button className="btn btn-primary mx-2" onClick={handleDownClick}>Convert to Lowercase</button>
        <button className="btn btn-primary mx-2" onClick={ClearText}>Clear Text</button>
    </div>
    <div className="container">
        <p>{text.length} letters and {text.split(" ").length} words</p>
        <p>Time to read is {0.008*text.split(" ").length}</p>
        <h1>Preview</h1>
        <p>{text}</p>
    </div>
    </>
  )
}
