@interface WCFinderWebviewDelegateObject : NSProxy <MMWebViewDelegate>
{
    MMWebViewController * _webviewController; // +0x8
    NSObject<MMWebViewDelegate> * _delegate; // +0x10
    NSObject<MMWebViewDelegate> * _target; // +0x18
}
+ (id)delegateWithWebviewController:(id)arg1 target:(id)arg2;
- (void)dealloc;
- (void)restore;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)onWebViewPerformClose:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end
