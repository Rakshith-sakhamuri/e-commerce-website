import React, { useEffect, useRef } from 'react';
import Prism from 'prismjs';
import 'prismjs/themes/prism.css';
import "./chats.css";
import { useState } from 'react';
const UserChatComponent = () => {
  const chatContainerRef = useRef(null);

  useEffect(() => {
    Prism.highlightAll();
  }, []);

  const [message, setMessage] = useState('');

  const [updated, setUpdated] = useState(message);

  const handleChange = (event) => {
    setMessage(event.target.value);
  };

  const handleClick = () => {
    setUpdated(message);
  };

  const [counter, setCounter] = useState(0);
 
  const increase = () => {
    setCounter(count => count + 1);
  };




  return (
    <>
      <input type="checkbox" id="check" />
      <label className="chat-btn" htmlFor="check">
        <p>Chat</p>
        <span className="position-absolute top-0 start-10 translate-middle p-2 bg-danger border border-light rounded-circle"></span>
       
      </label>
      <div className="chat-wrapper" ref={chatContainerRef}>
        <div className="chat-header">
          <h6>Let's Chat - Online </h6>
        </div>
        <div className="chat-form">
          <div className="cht-msg">
            
            {Array.from({ length:  1 }).map((_, id) => (

              
              <div key={id}>
                <p className="bg-secondary p-3 ms-4 text-light rounded-pill">
                <i class="bi bi-person-heart"></i>
                  <b>Racks :</b>
                  <pre>
                  <code className="language-javascript">
                  { 
                      `${updated}`
                  }
                  </code>
                </pre>
                
                </p>
              </div>
            ))}
            
          </div>
              <input
              type="textarea"
              id="message"
              name="message"
              onChange={handleChange}
              value={message}
              />

          <button className="btn btn-dark btn-block" onClick={() => { handleClick();increase()}}>Submit</button>
        </div>
      </div>
    </>
  );
};

export default UserChatComponent;