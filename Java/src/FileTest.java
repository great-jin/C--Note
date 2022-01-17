import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

public class FileTest {
    public static void main(String[] args){
        GetFile();
    }

    private static void GetFile(){
        // The file path: ./Files/test.csv
        File file = new File("./Files/test.csv");
        if (file.isFile()) {
            // put io operations in try() than you don't have to carry out io.close()
            try(FileInputStream fis = new FileInputStream(file)) {
                int ch;
                while ((ch = fis.read()) != -1) {
                    System.out.write(ch);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        } else {
            System.out.println("File don't exist！");
        }
    }
}
