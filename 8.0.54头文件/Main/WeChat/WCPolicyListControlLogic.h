@interface WCPolicyListControlLogic : NSObject <MMWebViewDelegate>
{
    BOOL _hideCloseBtn; // +0x8
    BOOL _skipOpIfDisagree; // +0x9
    BOOL _endWithAnyResponse; // +0xa
    BOOL _autoCloseWebView; // +0xb
    NSString * _policylist_url; // +0x10
    NSString * _policylist_list; // +0x18
    NSString * _policylist_ticket; // +0x20
    NSString * _doublecheck_content; // +0x28
    NSString * _doublecheck_cancel; // +0x30
    NSString * _doublecheck_ok; // +0x38
    NSString * _userName; // +0x40
    id /* block */ _endBlock; // +0x48
    MMWebViewController * _curWebViewController; // +0x50
}
- (id)init;
- (void)showPolicyListUrl:(id)arg1 fromViewController:(id)arg2;
- (id)topViewController;
- (void)startLoading;
- (void)stopLoading;
- (void)endWithIsAgreed:(BOOL)arg1;
- (void)onWebViewDisagree;
- (void)onWebViewClickClose;
- (id)accessStrFromDic:(id)arg1 forKey:(id)arg2;
- (void)agreementOpWithDic:(id)arg1;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (id)policylist_url;
- (void)setPolicylist_url:(id)arg1;
- (id)policylist_list;
- (void)setPolicylist_list:(id)arg1;
- (id)policylist_ticket;
- (void)setPolicylist_ticket:(id)arg1;
- (id)doublecheck_content;
- (void)setDoublecheck_content:(id)arg1;
- (id)doublecheck_cancel;
- (void)setDoublecheck_cancel:(id)arg1;
- (id)doublecheck_ok;
- (void)setDoublecheck_ok:(id)arg1;
- (BOOL)hideCloseBtn;
- (void)setHideCloseBtn:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)skipOpIfDisagree;
- (void)setSkipOpIfDisagree:(BOOL)arg1;
- (BOOL)endWithAnyResponse;
- (void)setEndWithAnyResponse:(BOOL)arg1;
- (BOOL)autoCloseWebView;
- (void)setAutoCloseWebView:(BOOL)arg1;
- (id /* block */)endBlock;
- (void)setEndBlock:(id /* block */)arg1;
- (id)curWebViewController;
- (void)setCurWebViewController:(id)arg1;
- (void).cxx_destruct;
@end

