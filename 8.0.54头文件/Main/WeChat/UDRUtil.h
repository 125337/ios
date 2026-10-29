@interface UDRUtil : NSObject
+ (void)callUDRPeriodStartCallback:(id)arg1;
+ (void)callUDRCheckSuccessCallback:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
+ (void)callUDRSuccessCallback:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
+ (void)callUDRFailCallBack:(id)arg1 name:(id)arg2 version:(int)arg3 errorType:(int)arg4 errorCode:(int)arg5 scene:(long long)arg6;
@end

