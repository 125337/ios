@interface WCProgressViewHelper : NSObject
{
    UIView * _progressCircleViewSuperview; // +0x8
    WCProgressMaskView * _progressView; // +0x10
    UIViewController * _attachedController; // +0x18
}
- (id)initWithController:(id)arg1;
- (id)progressView;
- (void)resetProgressViewPosition;
- (void)setInteractionBlocked:(BOOL)arg1;
- (id /* block */)startProgress;
- (id /* block */)stopProgress;
- (id /* block */)updateProgress;
- (id /* block */)finishProgress;
- (id /* block */)showInfinityProgress;
- (id)progressCircleView;
- (id)progressCircleViewSuperview;
- (void)setProgressCircleViewSuperview:(id)arg1;
- (void)setProgressView:(id)arg1;
- (id)attachedController;
- (void)setAttachedController:(id)arg1;
- (void).cxx_destruct;
@end

