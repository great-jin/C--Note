package code;

import java.util.ArrayList;
import java.util.List;

import bean.User;

public class ListTest {
    public static void main(String[] args) {
        // ArrayList是List的接口实现类。
        // List不能直接实例化对象，List list = new List();是非法的。
        List<User> uList_1 = new ArrayList<>();
        uList_1.add(new User(1, "Jack"));
        System.out.println(uList_1);

        // 构造指定大小的列表
        List<User> uList_3 = new ArrayList<>(100);

        ArrayList<User>  uList_2 = new ArrayList<>();
        uList_1.add(new User(2, "Alex"));
        System.out.println(uList_2);
    }
}
