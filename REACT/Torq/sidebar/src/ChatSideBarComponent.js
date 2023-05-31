
const SidebarMain = (props) => {
  const isLoggedIn = props.isLoggedIn;
  if (isLoggedIn) {
    return <OpenSideBar />;
  }
  return <CloseSiseBar />;
}

// const root = ReactDOM.createRoot(document.getElementById('root')); 
// Try changing to isLoggedIn={true}:
// root.render(<Greeting isLoggedIn={true} />);

export default SidebarMain;









// import React, { useState, useEffect, useRef } from 'react';
// import './ChatSidebar.css';
// import './ChatSidebarTheme.css';
// import hljs from 'highlight.js/lib/core';
// import 'highlight.js/styles/default.css';

// const ChatSidebar = () => {
//   const [theme, setTheme] = useState('light');
//   const [messages, setMessages] = useState([]);
//   const [showSidebar, setShowSidebar] = useState(true);

//   const messagesContainerRef = useRef(null);

//   const sendMessage = (message) => {
//     const newMessage = {
//       content: message,
//       user: 'John Doe',
//       timestamp: new Date().toLocaleTimeString(),
//     };

//     setMessages((prevMessages) => [...prevMessages, newMessage]);
//   };

//   const toggleTheme = () => {
//     setTheme((prevTheme) => (prevTheme === 'light' ? 'dark' : 'light'));
//   };

//   const toggleSidebar = () => {
//     setShowSidebar((prevShowSidebar) => !prevShowSidebar);
//   };

//   const handleThemeChange = (event) => {
//     const selectedTheme = event.target.value;
//     setTheme(selectedTheme);
//   };

//   const highlightCode = () => {
//     if (messagesContainerRef.current) {
//       const codeBlocks = messagesContainerRef.current.querySelectorAll('pre code');
//       codeBlocks.forEach((codeBlock) => {
//         hljs.highlightBlock(codeBlock);
//       });
//     }
//   };

//   useEffect(() => {
//     highlightCode();
//   }, [messages]);

//   return (
//     <div className={`chat-container ${showSidebar ? '' : 'hide'}`}>
//       <div className={`chat-sidebar ${theme === 'dark' ? 'dark-theme' : ''}`}>
//         <div className="chat-header">
//           <h2>Chat</h2>
//           <div className="theme-options">
//             <span>Theme:</span>
//             <label>
//               <input
//                 type="radio"
//                 value="light"
//                 checked={theme === 'light'}
//                 onChange={handleThemeChange}
//               />
//               Light
//             </label>
//             <label>
//               <input
//                 type="radio"
//                 value="dark"
//                 checked={theme === 'dark'}
//                 onChange={handleThemeChange}
//               />
//               Dark
//             </label>
//           </div>
//         </div>
//         <div className="chat-messages" ref={messagesContainerRef}>
//           {messages.map((message, index) => (
//             <div className="chat-message" key={index}>
//               <div className="user-avatar">
//                 <img src="user-avatar.png" alt="User Avatar" />
//               </div>
//               <div className="message-content">
//                 <div className="message-meta">
//                   <span className="username">{message.user}</span>
//                   <span className="timestamp">{message.timestamp}</span>
//                 </div>
//                 <pre>
//                   <code className="javascript">{message.content}</code>
//                 </pre>
//               </div>
//             </div>
//           ))}
//         </div>
//         <div className="chat-input">
//           <input type="text" placeholder="Type your message..." />
//           <button>Send</button>
//         </div>
//       </div>
//       <button className="toggle-sidebar-button" onClick={toggleSidebar}>
//         {showSidebar ? 'Hide Sidebar' : 'Show Sidebar'}
//       </button>
//     </div>
//   );
// };

// export default ChatSidebar;
