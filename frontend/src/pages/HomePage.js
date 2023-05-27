import ProductCourselComponent from "../components/ProductCourselComponent";
import CategoryCardComponent from "../components/user/CategoryCardComponent";
import { Row,Container } from "react-bootstrap";

const HomePage = () => {
    const categories = [
        "Tablets","Cameras","Laptops","Books","Printers","Software","Videos","Games"
    ];
    return (
        <>
            <ProductCourselComponent />
            <Container>
                <Row xs={1} md={2} className="g-4 mt-5">
                {
                    categories.map((category,idx) =>
                     <CategoryCardComponent  key = {idx}category={category} idx={idx}
                     />)
                }
                </Row>
            </Container>
            
        </>
    )
}

export default HomePage;