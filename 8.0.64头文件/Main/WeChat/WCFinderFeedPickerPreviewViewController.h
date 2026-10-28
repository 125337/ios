@interface WCFinderFeedPickerPreviewViewController : MMUIViewController
{
    id <WCFinderFeedPickerPreviewViewControllerDelegate> _delegate; // +0x70
    UIViewController * _weakVC; // +0x78
    WCFinderSimplePlayerView * _playerView; // +0x80
    MMUIButton * _doneBtn; // +0x88
    UIView * _containerView; // +0x90
    WCFinderFeedImageCDNView * _bgImageView; // +0x98
    UIView * _bgBlurView; // +0xa0
    UIView * _outterBorderView; // +0xa8
    UIView * _innterBorderView; // +0xb0
    MMMusicFadeOutLayer * _imageMaskLayer; // +0xb8
    WCFinderBGMPlayer * _bgmPlayer; // +0xc0
    WCFinderDataItem * _dataItem; // +0xc8
}
- (id)initWithDataItem:(id)arg1;
- (void)viewDidLoad;
- (void)setupSubView;
- (void)viewWillLayoutSubviews;
- (void)setupContentView;
- (void)viewDidAppear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)onDoneBtnClick;
- (void)onReturn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)weakVC;
- (void)setWeakVC:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)bgBlurView;
- (void)setBgBlurView:(id)arg1;
- (id)outterBorderView;
- (void)setOutterBorderView:(id)arg1;
- (id)innterBorderView;
- (void)setInnterBorderView:(id)arg1;
- (id)imageMaskLayer;
- (void)setImageMaskLayer:(id)arg1;
- (id)bgmPlayer;
- (void)setBgmPlayer:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
