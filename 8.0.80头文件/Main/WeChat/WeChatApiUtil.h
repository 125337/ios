@interface WeChatApiUtil : NSObject
+ (id)propertyListFromData:(id)arg1;
+ (id)dataFromPropertyList:(id)arg1;
+ (id)getAppUrl:(id)arg1;
+ (BOOL)isAppInstalledWithCatchException:(id)arg1;
+ (BOOL)isAppInstalledWithoutCatchException:(id)arg1;
+ (id)getAppUrlWithPlatformId:(id)arg1;
+ (id)getAppUrlWithPlatformId:(id)arg1 withParameter:(id)arg2;
+ (BOOL)isWXAppSupportApi;
+ (id)_internal_getSDKVersion;
+ (id)getSDKVersion;
@end
