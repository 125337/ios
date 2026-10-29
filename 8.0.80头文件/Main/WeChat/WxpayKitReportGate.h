@interface WxpayKitReportGate : NSObject
+ (long long)tierOfEventType:(id)arg1 sessionId:(id)arg2;
+ (BOOL)isFailure:(id)arg1 policy:(id)arg2;
+ (BOOL)isSlow:(id)arg1 policy:(id)arg2;
+ (id)decide:(id)arg1 policy:(id)arg2 processHashMod:(long long)arg3 sessionHashMod:(long long)arg4 firstSceneRequestSeen:(BOOL)arg5;
+ (long long)processHashMod:(id)arg1 modulus:(long long)arg2;
+ (long long)sessionHashModForAppId:(id)arg1 sessionId:(id)arg2 modulus:(long long)arg3;
@end
