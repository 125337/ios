@interface FBSDKAppLinkNavigation : NSObject
{
    NSDictionary * _extras; // +0x8
    NSDictionary * _appLinkData; // +0x10
    FBSDKAppLink * _appLink; // +0x18
}
+ (id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3;
+ (id)callbackAppLinkDataForAppWithName:(id)arg1 url:(id)arg2;
+ (void)resolveAppLink:(id)arg1 resolver:(id)arg2 handler:(id /* block */)arg3;
+ (void)resolveAppLink:(id)arg1 handler:(id /* block */)arg2;
+ (void)navigateToURL:(id)arg1 handler:(id /* block */)arg2;
+ (void)navigateToURL:(id)arg1 resolver:(id)arg2 handler:(id /* block */)arg3;
+ (long long)navigateToAppLink:(id)arg1 error:(id *)arg2;
+ (long long)navigationTypeForLink:(id)arg1;
+ (id)defaultResolver;
+ (void)setDefaultResolver:(id)arg1;
- (id)stringByEscapingQueryString:(id)arg1;
- (id)appLinkURLWithTargetURL:(id)arg1 error:(id *)arg2;
- (long long)navigate:(id *)arg1;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3;
- (long long)navigationType;
- (id)extras;
- (void)setExtras:(id)arg1;
- (id)appLinkData;
- (void)setAppLinkData:(id)arg1;
- (id)appLink;
- (void)setAppLink:(id)arg1;
- (void).cxx_destruct;
@end

