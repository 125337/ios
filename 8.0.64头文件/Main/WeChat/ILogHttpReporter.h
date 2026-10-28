@interface ILogHttpReporter : NSObject <NSURLConnectionDelegate>
+ (void)httpReport:(unsigned int)arg1 withData:(id)arg2;
+ (BOOL)isPureAscii:(id)arg1;
@end
