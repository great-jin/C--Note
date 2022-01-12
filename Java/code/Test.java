import java.sql.Timestamp;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.math.BigInteger;

public class Test {
    public static void main(String []args) {
        // 提供一种可变的字符串类型
        StringBuilder builder = new StringBuilder();
        builder.append("Hello");
        builder.append("World!");
        builder.insert(5, "J");
        builder.setCharAt(5, ' ');
        String finalString = builder.toString();
        System.out.println(finalString);


        // 可以处理任意长度的数字序列长度
        BigInteger big_1 = BigInteger.valueOf(100);
        BigInteger big_2 = BigInteger.valueOf(100);
        BigInteger a = big_1.add(big_2);
        System.out.println(a);


        // 格式化时间
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");
        String date = sdf.format(new Date());
        System.out.println(date);

        Timestamp timestamp_1 = Timestamp.valueOf("1970-01-01 00:00:001");
        Timestamp timestamp_2 = Timestamp.from(new Date().toInstant());
        System.out.println(timestamp_1);
        System.out.println(timestamp_2);

     }
}
