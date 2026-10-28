@interface WCAdAnimateTransitionViewController : MMUIViewController <WCAdBreakFrameViewRelatedProtocol>
{
    long long _gestureType; // +0x70
    WCDataItem * _dataItem; // +0x78
    UIView * _originView; // +0x80
    WCAdAnimateViewControllerAnimatedTransitioning * _presentationAnimate; // +0x88
    id /* block */ _animateCompletion; // +0x90
}
- (id)initWithGestureType:(long long)arg1 dataItem:(id)arg2 originView:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dismissMyselfAndJump;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldFixParentAppearEventWhenPresented;
- (void)configPresentationCustomWithViewController:(id)arg1 animateCompletion:(id /* block */)arg2;
- (id)presentationAnimate;
- (BOOL)shouldDeleteBreakFrameViewWhileCellEndDisplaying;
- (long long)gestureType;
- (void)setGestureType:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (void)setPresentationAnimate:(id)arg1;
- (id /* block */)animateCompletion;
- (void)setAnimateCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
