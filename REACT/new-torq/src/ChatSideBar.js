import React, { useState } from 'react';
import "./Chatsidebar.css";
import UserChatComponent from './UserChatComponent';

const SideNavigation = () => {
  const [isOpen, setIsOpen] = useState(false);

  const openNav = () => {
    setIsOpen(true);
  };

  const closeNav = () => {
    setIsOpen(false);
  };
  

  return (
    <div>
      <div
        id="mySidenav"
        className={`sidenav ${isOpen ? 'open' : ''}`}
      >
        {/* <a href="javascript:void(0)" className="closebtn" onClick={closeNav}>
          &times;
        </a> */}
        <a href="/">About</a>
        <a href="/">Services</a>
        <a href="/">Clients</a>
        <a href="/">Contact</a>
        
      </div>

      <div id="main">
        <h2>Home page</h2>
        <span
          style={{ fontSize: '30px', cursor: 'pointer' }}
          onClick={openNav}
        >
          &#9776; open
        </span>
      </div>

      {isOpen && (
        <>
        <div
          className="overlay"
          onClick={closeNav}
          style={{ backgroundColor: 'rgba(0,0,0,0.4)' }}
        />
        <UserChatComponent />
        </>
        
      )}
      
    </div>
  );
};

export default SideNavigation;
