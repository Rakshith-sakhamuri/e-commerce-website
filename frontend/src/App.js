import {BrowserRouter,Routes,Route} from "react-router-dom"
import CartPage from "./pages/CartPage";
import HomePage from "./pages/HomePage";
import ProductListPage from "./pages/ProductListPage";
import ProductDetailspage from "./pages/ProductDetailspage";
import LoginPage from "./pages/LoginPage";
import RegisterPage from "./RegisterPage";
import UserCartDetails from "./pages/user/UserCartDetailsPage";
import UserOrders from "./pages/user/UserOrders";
import UserOrderDetails from "./pages/user/UserOrderDetailsPage";
import Userprofile from "./pages/user/UserProfile";

function App() {
  return (
    <BrowserRouter>
    <Routes>
      <Route path="/" element={<HomePage />} />
      <Route path="/cart" element={<CartPage />} />
      <Route path="/login" element={<LoginPage />} />
      <Route path="/productlist" element={<ProductListPage />} />
      <Route path="/productdetails" element={<ProductDetailspage />} />
      <Route path="/register" element={<RegisterPage />} />
      <Route path="*" element="404 : Page dos not exist" />
      <Route path="/user" element={<Userprofile />} />
      <Route path="/user/cartdetails" element={<UserCartDetails />} />
      <Route path="/user/orders" element={<UserOrders />} />
      <Route path="/user/orderdetails" element={<UserOrderDetails />} />
    </Routes>
    </BrowserRouter>

  );
}

export default App;
