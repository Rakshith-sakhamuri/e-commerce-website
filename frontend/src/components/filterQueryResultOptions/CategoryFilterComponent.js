import { Form } from "react-bootstrap";

const CategoryFilterComponent = () => {
  return (
    <>
    <Form>
      {Array.from({length: 5}).map((_, idx) => (
        <div key={idx}>
          <Form.Check type="checkbox" id={`check-api2-${idx}`}>
            <Form.Check.Input style={{cursor: "pointer"}} type="checkbox" isValid />
            <Form.Check.Label style={{cursor: "pointer"}}> category -{idx}</Form.Check.Label>
            <Form.Control.Feedback type="valid">
            </Form.Control.Feedback>
          </Form.Check>
        </div>
      ))}
    </Form>
    </>
    
  );
};

export default CategoryFilterComponent;
