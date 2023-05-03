import React from 'react';
import logo from './logo.svg';
import Timer from './Component.js';
import './App.css';

function App() {
  return (
    <div className="App">
      <header className="App-header">
      <Timer></Timer>
        {/* <img src={logo} className="App-logo" alt="logo" /> */}
        {/* <p>
          Edit <code>src/App.tsx</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a> */}
        <div className="App-main">
        Добро пожаловать!

        </div>
      </header>
    </div>
  );
}

export default App;
