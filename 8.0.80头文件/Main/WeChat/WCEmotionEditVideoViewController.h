@interface WCEmotionEditVideoViewController : WCEditVideoViewController
{
    BOOL _forbidRightGesture; // +0x70
    WCEditVideoPushPopTransition * _customTransitionDelegate; // +0x78
    MMWebImageView * _thumbWebImgView; // +0x80
    UIButton * _cancelDonwloadBtn; // +0x88
    UIButton * _fakeNextBtn; // +0x90
    NSString * _thumbImgUrl; // +0x98
    CGSize _videoSize; // +0xa0
}
- (id)initWithThumbImgUrl:(id)arg1;
- (void)updateWithVideoPath:(id)arg1;
- (void)viewDidLoad;
- (void)showButtons;
- (void)bringBtnsToFront;
- (void)onTapCancel;
- (void)showEditVideoViewOn:(id)arg1;
- (void)onClickEditVideoCancelButton;
- (double)getMaxDuration;
- (double)getMinDuration;
- (void)setupTransitioningDelegate;
- (BOOL)shouldHideNavigationBar;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (CGSize)getFallbackVideoSize;
- (BOOL)interceptIfAssetSizeInvalid;
- (BOOL)forbidRightGesture;
- (void)setForbidRightGesture:(BOOL)arg1;
- (id)customTransitionDelegate;
- (void)setCustomTransitionDelegate:(id)arg1;
- (id)thumbWebImgView;
- (void)setThumbWebImgView:(id)arg1;
- (id)cancelDonwloadBtn;
- (void)setCancelDonwloadBtn:(id)arg1;
- (id)fakeNextBtn;
- (void)setFakeNextBtn:(id)arg1;
- (id)thumbImgUrl;
- (void)setThumbImgUrl:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
