import React from "react";
import ReactDOM from "react-dom";
import DynamicForm from "./DynamicForm";
import "styles.css";

class App extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      dynamicFormSerial: []
    };
  }
  
  onAddFormButtonClick = () => {
    const { dynamicFormSerial } = this.state;
    let tempDynamicSerial = dynamicFormSerial;
    let lastFormSerial = tempDynamicSerial.length + 1;
    tempDynamicSerial = [...tempDynamicSerial, lastFormSerial];
    this.setState({ dynamicFormSerial: tempDynamicSerial });
  };

  render() {
    return (
      <div>
        <div className={"add-form-button"}>
          <button onClick={this.onAddFormButtonClick} type="submit">
            Add More
          </button>
        </div>
        <div>
        {this.state.dynamicFormSerial.length >= 1 &&
          this.state.dynamicFormSerial.map((item, index) => {
            return (
              <DynamicForm
                key={item}
                {...this.props}
                formSerial={item}
              />
            );
          })}
        </div>
      </div>
    );
  }
}

const rootElement = document.getElementById("root");
ReactDOM.render(<App />, rootElement);