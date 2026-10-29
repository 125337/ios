@interface EcsFittingRoomCropPresenter : NSObject <WCEditImageViewControllerDelegate>
{
    id <EcsFittingRoomCropPresenterDelegate> _delegate; // +0x8
    long long _minimumImageEdge; // +0x10
    WCEditImageViewController * _editor; // +0x18
}
- (id)activeEditor;
- (void)presentWithImage:(id)arg1 base:(id)arg2 host:(id)arg3;
- (void)resumeWithHint:(unsigned long long)arg1 message:(id)arg2 failureDetail:(id)arg3;
- (void)finishProcessingFromHost:(id)arg1;
- (void)abortPresentingFromHost:(id)arg1;
- (void)dismissFlowStackFromHost:(id)arg1 animated:(BOOL)arg2;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)minimumImageEdge;
- (void)setMinimumImageEdge:(long long)arg1;
- (id)editor;
- (void)setEditor:(id)arg1;
- (void).cxx_destruct;
@end
