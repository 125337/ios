@interface FlutterBizTextCoverPlugin : NSObject <MMFlutterPlugin, BizTextCoverApi>
{
    id <FlutterBizTextCoverPluginDelegate> _delegate; // +0x8
    id /* block */ _resultCallback; // +0x10
    UIViewController * _attachedController; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)onCancelCreateTextCoverWithError:(id *)arg1;
- (void)onConfirmCreateTextCoverInfo:(id)arg1 error:(id *)arg2;
- (void)showAgreeTermsDialogWithCompletion:(id /* block */)arg1;
- (void)onEmoticonBoardVisibilityChangedVisible:(BOOL)arg1 error:(id *)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)resultCallback;
- (void)setResultCallback:(id /* block */)arg1;
- (id)attachedController;
- (void)setAttachedController:(id)arg1;
- (void).cxx_destruct;
@end
