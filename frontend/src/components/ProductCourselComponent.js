import Carousel from 'react-bootstrap/Carousel';
import { LinkContainer } from 'react-router-bootstrap';

function ProductCourselComponent() {
  return (
    <Carousel>
      <Carousel.Item>
        <img
          className="d-block w-100"
          src="/images/carousel/carousel-1.png"
          alt="Third slide"
          style={{height: "300px", objectFit: "cover"}}
        />

        <Carousel.Caption>
            <LinkContainer to="/product-deatils">
                <h3>Best Seller in Laptops</h3>
            </LinkContainer>
          <p>
            Praesent commodo cursus magna, vel scelerisque nisl consectetur.
          </p>
        </Carousel.Caption>
      </Carousel.Item>
      <Carousel.Item>
        <img
          className="d-block w-100"
          src="/images/carousel/carousel-2.png"
          alt="Second slide"
          style={{height: "300px", objectFit: "cover"}}
        />

        <Carousel.Caption>
            <LinkContainer to="/product-deatils">
                <h3>Best Seller in Books</h3>
            </LinkContainer>
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
        </Carousel.Caption>
      </Carousel.Item>
      <Carousel.Item>
        <img
          className="d-block w-100"
          src="/images/carousel/carousel-3.png"
          alt="Third slide"
          style={{height: "300px", objectFit: "cover"}}
        />

        <Carousel.Caption>
            <LinkContainer to="/product-deatils">
                <h3>Best Seller in Cameras</h3>
            </LinkContainer>
          <p>
            Praesent commodo cursus magna, vel scelerisque nisl consectetur.
          </p>
        </Carousel.Caption>
      </Carousel.Item>

    </Carousel>
  );
}

export default ProductCourselComponent;