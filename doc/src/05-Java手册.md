


# Java Type unsafe enums
Java的枚举在序列化、与C语言交互方面存在很多问题，尽量使用不安全的枚举。
```plain
%include "enumtypeunsafe.swg"
%javaconst(1);

```
如果没有javaconst的话，生成的枚举的数值都是通过函数获得的。
```java
public final class ovrAbuseReportType {
  public final static int ovrAbuseReportType_Unknown = OculusSdkJNI.ovrAbuseReportType_Unknown_get();
  public final static int ovrAbuseReportType_Object = OculusSdkJNI.ovrAbuseReportType_Object_get();
  public final static int ovrAbuseReportType_User = OculusSdkJNI.ovrAbuseReportType_User_get();
}
```

swig支持三种模式的Java枚举：
* 复杂模式：枚举值是真正的Java enum
* 不安全模式：枚举值是int，枚举实际上是class
* 简单模式：所有的枚举统一生成到一个类里面。

# java指定包名
生成Java的时候使用 `-package xxx`参数可以设置包名。