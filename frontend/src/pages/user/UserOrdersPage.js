import { Row, Col, Table } from "react-bootstrap";

const UserOrdersPage = () => {
  return (
    <><Row>
      <Col md={12}>
        <h1>My Orders</h1>
      </Col>
    </Row>
    <Table striped bordered hover>
    <thead>
      <tr>
        <th>#</th>
        <th>First Name</th>
        <th>Last Name</th>
        <th>Username</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>1</td>
        <td>Mark</td>
        <td>Otto</td>
        <td>@mdo</td>
      </tr>
      <tr>
        <td>2</td>
        <td>Jacob</td>
        <td>Thornton</td>
        <td>@fat</td>
      </tr>
      <tr>
        <td>3</td>
        <td colSpan={2}>Larry the Bird</td>
        <td>@twitter</td>
      </tr>
    </tbody>
    <h1>hello</h1>
  </Table>
  </>)
    
};

export default UserOrdersPage;

