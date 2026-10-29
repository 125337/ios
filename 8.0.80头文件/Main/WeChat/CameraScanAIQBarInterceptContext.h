@interface CameraScanAIQBarInterceptContext : NSObject
{
    BOOL _resumeScanOnDismiss; // +0x8
    BOOL _resumeScanOnCancel; // +0x9
    BOOL _intercepting; // +0xa
    BOOL _bypassClickPreview; // +0xb
    BOOL _interactivePopGestureEnabledBeforePresent; // +0xc
    BOOL _interactivePopEnabledBeforePresent; // +0xd
    id /* block */ _cancelAction; // +0x10
    id /* block */ _askAIAction; // +0x18
    CameraScanAIFlowContext * _flowContext; // +0x20
    UIImage * _sourceImage; // +0x28
    NSArray * _hiddenOperationViews; // +0x30
    NSArray * _operationViewHiddenStates; // +0x38
}
- (id /* block */)cancelAction;
- (void)setCancelAction:(id /* block */)arg1;
- (id /* block */)askAIAction;
- (void)setAskAIAction:(id /* block */)arg1;
- (id)flowContext;
- (void)setFlowContext:(id)arg1;
- (BOOL)resumeScanOnDismiss;
- (void)setResumeScanOnDismiss:(BOOL)arg1;
- (BOOL)resumeScanOnCancel;
- (void)setResumeScanOnCancel:(BOOL)arg1;
- (BOOL)intercepting;
- (void)setIntercepting:(BOOL)arg1;
- (BOOL)bypassClickPreview;
- (void)setBypassClickPreview:(BOOL)arg1;
- (BOOL)interactivePopGestureEnabledBeforePresent;
- (void)setInteractivePopGestureEnabledBeforePresent:(BOOL)arg1;
- (BOOL)interactivePopEnabledBeforePresent;
- (void)setInteractivePopEnabledBeforePresent:(BOOL)arg1;
- (id)sourceImage;
- (void)setSourceImage:(id)arg1;
- (id)hiddenOperationViews;
- (void)setHiddenOperationViews:(id)arg1;
- (id)operationViewHiddenStates;
- (void)setOperationViewHiddenStates:(id)arg1;
- (void).cxx_destruct;
@end
