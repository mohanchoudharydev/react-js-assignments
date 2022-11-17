import React, { useState } from "react";
import "./styles.css";

export default function App() {
  const [isScreen1, setIsScreen1] = useState(true);
  const next = (e) => {
    setIsScreen1(false);
  };
  const prev = (e) => {
    setIsScreen1(true);
  };
  return (
    <div className="App">
      {isScreen1 == true && (
        <div>
          <h1>Screen 1</h1>
          <button onClick={(e) => next(e)}>Next</button>
        </div>
      )}
      {isScreen1 == false && (
        <div>
          <h1>Screen 2</h1>
          <button onClick={(e) => prev(e)}>Prev</button>
        </div>
      )}
    </div>
  );
}
