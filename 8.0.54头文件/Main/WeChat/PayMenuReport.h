@interface PayMenuReport : NSObject
+ (void)reportClickWithScene:(unsigned int)arg1 RedDot:(unsigned int)arg2 Url:(id)arg3 WeappUserName:(id)arg4;
+ (void)reportShowWithScene:(unsigned int)arg1 RedDot:(unsigned int)arg2 Url:(id)arg3 WeappUserName:(id)arg4;
+ (void)internalReportClickWithScene:(unsigned int)arg1 RedDot:(unsigned int)arg2 Url:(id)arg3 WeappUserName:(id)arg4 action:(unsigned int)arg5;
+ (void)reportReddotExposure:(unsigned long long)arg1;
+ (void)reportReddotClick:(unsigned long long)arg1;
@end

