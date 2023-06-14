import { BrowserRouter, Routes, Route } from "react-router-dom";
// publicly available pages:
import HomePage from "./pages/HomePage";
import ProductDetailsPage from "./pages/ProductDetailsPage";
import ProductList from "./pages/ProductList";
// import CartPage from "./pages/CartPage";
import RegisterPage from "./RegisterPage";


//importing components
import ProtectedRoutesComponent from "./components/ProtectedRoutesComponent";
import FooterComponent from "./components/FooterComponent";
import HeaderComponent from "./components/HeaderComponent";
import UserChatComponent from "./components/user/UserChatComponent.js";
import ScrollToTop from "./pages/utils/ScrollTop";

// protected user pages:
import UserProfilePage from "./pages/user/UserProfilePage";
import UserOrdersPage from "./pages/user/UserOrdersPage";
import UserCartDetailsPage from "./pages/user/UserCartDetailsPage";
import UserOrderDetailsPage from "./pages/user/UserOrderDetailsPage";
import CartPage from "./pages/CartPage";

// protected admin pages:
import AdminUsersPage from "./pages/admin/Users";
import AdminEditUserPage from "./pages/admin/EditUser";
import AdminProductsPage from "./pages/admin/Products";
import AdminCreateProductPage from "./pages/admin/CreateProduct";
import AdminEditProductPage from "./pages/admin/EditProducts";
import AdminOrdersPage from "./pages/admin/Orders";
import AdminOrderDetailsPage from "./pages/admin/OrderDetails";
import AdminChatsPage from "./pages/admin/Chats";
import AdminAnalyticsPage from "./pages/admin/Analytics";
import RoutesWithUserChatComponent from "./components/user/RoutesWithUserChatComponent"

function App() {
  return (
    <>
    <HeaderComponent />
    <BrowserRouter>
      <ScrollToTop />
      <Routes>
      
        {/* publicly available routes: */}
        <Route path="/" element={<HomePage />} />
        <Route path="/product-list" element={<ProductList />} />
        {/* <Route path="/product-details" element={<ProductDetailsPage />} /> */}
        {/* <Route path="/product-details/:id" element={<ProductDetailsPage />} />
        <Route path="/cart" element={<CartPage />} />
        <Route path="/login" element={<LoginPage />} /> */}
        <Route path="/register" element={<RegisterPage />} />
        {/* <Route path="*" element="Page not exists 404" /> */}

        {/* <Route path="/" component={HomePage} />  in previous versions of react-router-dom */}

        {/* user protected routes: */}
        <Route element={<ProtectedRoutesComponent admin={false} />}>
          <Route path="/user" element={<UserProfilePage />} />
          <Route path="/user/my-orders" element={<UserOrdersPage />} />
          <Route path="/user/cart-details" element={<UserCartDetailsPage />} />
          <Route
            path="/user/order-details"
            element={<UserOrderDetailsPage />}
          />
        </Route>

        {/* admin protected routes: */}
        <Route element={<ProtectedRoutesComponent admin={true} />}>
          <Route element={<RoutesWithUserChatComponent/>}>

          <Route path="/admin/users" element={<AdminUsersPage />} />
          <Route path="/admin/edit-user" element={<AdminEditUserPage />} />
          <Route path="/admin/products" element={<AdminProductsPage />} />
          <Route
            path="/admin/create-new-product"
            element={<AdminCreateProductPage />}
          />
          <Route
            path="/admin/edit-product"
            element={<AdminEditProductPage />}
          />
          <Route path="/admin/orders" element={<AdminOrdersPage />} />
          <Route
            path="/admin/order-details"
            element={<AdminOrderDetailsPage />}
          />
          <Route path="/admin/chats" element={<AdminChatsPage />} />
          <Route path="/admin/analytics" element={<AdminAnalyticsPage />} />
          <Route path="/cart" element={<CartPage />}/>
          </Route>
        </Route>
      </Routes>
    </BrowserRouter>
    <FooterComponent/>
    </>
  );
}

export default App;