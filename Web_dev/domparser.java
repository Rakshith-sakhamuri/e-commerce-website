
import java.io.*;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.*;
public class domparser {

   public static void main(String[] args) {

      try {
         File inputFile = new File("input.xml");
         DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
         DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
         Document doc = dBuilder.parse(inputFile);
         doc.getDocumentElement().normalize();
         System.out.println("Root element :" + doc.getDocumentElement().getNodeName());
         NodeList nList = doc.getElementsByTagName("car");
         System.out.println("----------------------------");
         
         for (int temp = 0; temp < nList.getLength(); temp++) {
            Node nNode = nList.item(temp);
            System.out.println("\nCurrent Element :" + nNode.getNodeName());
            
            if (nNode.getNodeType() == Node.ELEMENT_NODE) {
               Element eElement = (Element) nNode;
               System.out.println("Car Registration Number : " 
                  + eElement.getAttribute("rg_no"));
               System.out.println("Make : " 
                  + eElement
                  .getElementsByTagName("Brand")
                  .item(0)
                  .getTextContent());
               System.out.println("Model : " 
                  + eElement
                  .getElementsByTagName("Model")
                  .item(0)
                  .getTextContent());
               System.out.println("Varient : " 
                  + eElement
                  .getElementsByTagName("varient")
                  .item(0)
                  .getTextContent());
               System.out.println("Fuel economy : " 
                  + eElement
                  .getElementsByTagName("f_economy")
                  .item(0)
                  .getTextContent());
            }
         }
      } catch (Exception e) {
         e.printStackTrace();
      }
   }
}
