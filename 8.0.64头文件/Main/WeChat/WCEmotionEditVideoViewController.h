@interface WCEmotionEditVideoViewController : WCEditVideoViewController
{
    WCEditVideoPushPopTransition * _customTransitionDelegate; // +0x70
    MMWebImageView * _thumbWebImgView; // +0x78
    UIButton * _cancelDonwloadBtn; // +0x80
    UIButton * _fakeNextBtn; // +0x88
    NSString * _thumbImgUrl; // +0x90
    CGSize _videoSize; // +0x98
}
- (id)initWithThumbImgUrl:(id)arg1;
- (void)updateWithVideoPath:(id)arg1;
- (void)viewDidLoad;
- (void)showButtons;
- (void)bringBtnsToFront;
- (void)onTapCancel;
- (void)showEditVideoViewOn:(id)arg1;
- (double)getMaxDuration;
- (double)getMinDuration;
- (void)setupTransitioningDelegate;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (CGSize)getFallbackVideoSize;
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
