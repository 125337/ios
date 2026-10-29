@interface WASystemAuthHelper : NSObject
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 appid:(id)arg2;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (void)requestAuthFor:(unsigned int)arg1 appid:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)requestWeChatAndSystemAuthFor:(unsigned int)arg1 appid:(id)arg2 completionHandler:(id /* block */)arg3;
+ (BOOL)isAuthRequestFrequencyLimitedFor:(unsigned int)arg1 appid:(id)arg2;
+ (unsigned long long)convertSceneFromAppid:(id)arg1;
+ (unsigned long long)convertFrequencyTypeFromCapability:(unsigned int)arg1;
@end

