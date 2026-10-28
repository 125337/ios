@interface MMLiteAppDeeplinkHandler : NSObject <WebViewA8KeyLogicDelegate>
{
    WebViewA8KeyLogicImpl * _a8keyLogic; // +0x8
    NSHashTable * _delegateArray; // +0x10
}
+ (BOOL)isLiteAppDeeplinkURL:(id)arg1;
- (id)init;
- (void)handleLiteAppURL:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)onGetA8Key:(BOOL)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (id)a8keyLogic;
- (void)setA8keyLogic:(id)arg1;
- (id)delegateArray;
- (void)setDelegateArray:(id)arg1;
- (void).cxx_destruct;
@end
