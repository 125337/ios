@interface WxpayLiteAppConfigBridge : NSObject
+ (id)failure:(id)arg1;
+ (id)okWithValue:(id)arg1;
+ (BOOL)keyIsEmpty:(id)arg1;
+ (id)mergedGetForAppId:(id)arg1 option:(id)arg2;
+ (id)runtimeProfileForAppId:(id)arg1 type:(id)arg2 option:(id)arg3 error:(id *)arg4;
+ (id)debugSetWithOption:(id)arg1;
@end
