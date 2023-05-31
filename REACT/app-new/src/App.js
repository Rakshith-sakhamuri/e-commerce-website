import logo from './logo.svg';
import navBar from './components/navBar';
import './App.css';
import TextForm from './components/TextForm';
import React, { useState } from 'react';


function App(props) {

  const [mode,setMode] = useState('light');
  return (
    <>
      hello i am {props.title}
      <form class="row g-3">
        <div class="col-auto">
          <label for="staticEmail2" class="visually-hidden">Email</label>
          <input type="text" readonly class="form-control-plaintext" id="staticEmail2" value="email@example.com" />
        </div>
        <div class="col-auto">
          <label for="inputPassword2" class="visually-hidden">Password</label>
          <input type="password" class="form-control" id="inputPassword2" placeholder="Password" />
        </div>
        <div class="col-auto">
          <button type="submit" class="btn btn-primary mb-3">Confirm identity</button>
        </div>
     </form>
    </>
  );
}


function NavBar2(props) {

  return (
    <>
      <nav class={`navbar navbar-expand-lg navbar-${props.mode} bg-${props.mode}`}>
        <a class="navbar-brand" href="/">Navbar</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>

        <div class="collapse navbar-collapse" id="navbarSupportedContent">
          <ul class="navbar-nav mr-auto">
            <li class="nav-item active">
              <a class="nav-link" href="/">Home <span class="sr-only">(current)</span></a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="/">Link</a>
            </li>
            <li class="nav-item dropdown">
              <a class="nav-link dropdown-toggle" href="/" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                Dropdown
              </a>
              <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                <a class="dropdown-item" href="/">Action</a>
                <a class="dropdown-item" href="/">Another action</a>
                <div class="dropdown-divider"></div>
                <a class="dropdown-item" href="/">Something else here</a>
              </div>
            </li>
            <li class="nav-item">
              <a class="nav-link disabled" href="/">Disabled</a>
            </li>
          </ul>
          <form class="form-inline my-2 my-lg-0">
            {/* <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search" />
            <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Search</button> */}
          </form>
        </div>
      </nav>
    </>
  );
}

export default function myApp() {
  return(
    <div>
    <App title = "Rakshithuuu"/>
    <NavBar2 mode={mode}/> 
    <TextForm heading = "Rakshith"/>
    </div>
  );
};
