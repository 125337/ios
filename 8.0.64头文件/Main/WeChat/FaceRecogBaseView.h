@interface FaceRecogBaseView : MMUIView
{
    id <FaceRecogBaseViewDelegate> _delegate; // +0x8
    FaceRecogBaseViewController * _vc; // +0x10
}
- (void)initCancelBtn;
- (void)cancelButtonDone;
- (void)initView;
- (void)attachPreviewLayer:(id)arg1;
- (void)viewDidAppear;
- (void)procedureDidStartDetectFace;
- (void)procedureDidDetectFace;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(BOOL)arg3;
- (void)setTip:(id)arg1;
- (void)setTip:(id)arg1 animated:(BOOL)arg2;
- (void)procedureDidDoneLoading;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (void).cxx_destruct;
@end
