@interface WCFinderFeedPickerPreviewViewController : MMUIViewController
{
    id <WCFinderFeedPickerPreviewViewControllerDelegate> _delegate; // +0x68
    UIViewController * _weakVC; // +0x70
    WCFinderSimplePlayerView * _playerView; // +0x78
    MMUIButton * _doneBtn; // +0x80
    UIView * _containerView; // +0x88
    WCFinderFeedImageCDNView * _bgImageView; // +0x90
    UIView * _bgBlurView; // +0x98
    UIView * _outterBorderView; // +0xa0
    UIView * _innterBorderView; // +0xa8
    MMMusicFadeOutLayer * _imageMaskLayer; // +0xb0
    WCFinderBGMPlayer * _bgmPlayer; // +0xb8
    WCFinderDataItem * _dataItem; // +0xc0
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

