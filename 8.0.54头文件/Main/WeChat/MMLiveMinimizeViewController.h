@interface MMLiveMinimizeViewController : MMUIViewController <MMLiveMinimizeBackgroundMoveViewDelegate>
{
    UIView * _liveView; // +0x68
    id <MMLiveMinimizeViewControllerDelegate> _liveMinimizeDelegate; // +0x70
    MMLiveMinimizeBackgroundMoveView * _backgroundMoveView; // +0x78
}
- (id)initWithLiveView:(id)arg1;
- (void)viewDidLoad;
- (id)moveView;
- (id)blurView;
- (void)setBackImage:(id)arg1;
- (void)adsorbToWindow;
- (void)initBackgroundMoveView;
- (void)viewDidLayoutSubviews;
- (void)showView;
- (void)hideView;
- (void)onMMLiveMinimizeBackgroundMoveViewTap;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id)liveMinimizeDelegate;
- (void)setLiveMinimizeDelegate:(id)arg1;
- (id)backgroundMoveView;
- (void)setBackgroundMoveView:(id)arg1;
- (void).cxx_destruct;
@end

