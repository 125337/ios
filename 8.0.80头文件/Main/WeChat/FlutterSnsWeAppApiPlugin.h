@interface FlutterSnsWeAppApiPlugin : NSObject <MMFlutterPlugin, PlatformWeAppApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)jumpToWeAppUserName:(id)arg1 pagePath:(id)arg2 version:(long long)arg3 scene:(unsigned long long)arg4 messageExtraData:(id)arg5 error:(id *)arg6;
- (void)getWeAppNickNameUserName:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)convertScene:(unsigned long long)arg1;
@end
