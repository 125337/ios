@interface MPNegativeFeedbackFlutterHelper : NSObject
{
    BOOL _resultDelivered; // +0x8
    BOOL _dismissCallbackDelivered; // +0x9
    MMWebViewController * _webViewController; // +0x10
    MPNegativeFeedbackFlutterViewController * _viewController; // +0x18
    id /* block */ _completion; // +0x20
}
+ (id)buildCallbackResult:(BOOL)arg1 cgiSuccess:(BOOL)arg2 reasons:(id)arg3;
+ (void)showCompletionToast:(id)arg1;
+ (BOOL)openNegativeFeedbackForEvent:(id)arg1 fromWebViewController:(id)arg2;
+ (BOOL)openNegativeFeedbackFromWebViewController:(id)arg1 submitScene:(long long)arg2 completion:(id /* block */)arg3;
+ (BOOL)openNegativeFeedbackMenu:(id)arg1;
+ (id)contextArgumentsForWebViewController:(id)arg1;
+ (id)defaultArgumentsForWebViewController:(id)arg1;
+ (BOOL)openNegativeFeedback:(id)arg1 fromWebViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)completeWithConfirmed:(BOOL)arg1 cgiSuccess:(BOOL)arg2 reasons:(id)arg3;
- (void)handleUnexpectedDismiss;
- (void)notifyDismissed;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)resultDelivered;
- (void)setResultDelivered:(BOOL)arg1;
- (BOOL)dismissCallbackDelivered;
- (void)setDismissCallbackDelivered:(BOOL)arg1;
- (void).cxx_destruct;
@end
