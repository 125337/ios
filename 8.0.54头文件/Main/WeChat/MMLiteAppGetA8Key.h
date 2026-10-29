@interface MMLiteAppGetA8Key : NSObject <WebViewA8KeyLogicDelegate>
{
    WebViewA8KeyLogicImpl * _a8keyLogic; // +0x8
    NSMutableDictionary * _mCache; // +0x10
    NSMutableDictionary * _mPreAuthCallback; // +0x18
}
+ (id)getInstance;
- (id)init;
- (void)preAuth:(id)arg1;
- (void)getPreAuthInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)cleanTimeoutCache:(id)arg1;
- (void)runOnMainThread:(id /* block */)arg1;
- (void)onGetA8Key:(BOOL)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)onJumpToAppStoreControlWithUrl:(id)arg1;
- (id)a8keyLogic;
- (void)setA8keyLogic:(id)arg1;
- (id)mCache;
- (void)setMCache:(id)arg1;
- (id)mPreAuthCallback;
- (void)setMPreAuthCallback:(id)arg1;
- (void).cxx_destruct;
@end

