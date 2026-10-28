@interface MVImagePreviewVideoView : WCPlayerControlView <MMAssetPickerBrowserViewProtocol>
{
    BOOL _requestUneditedAsset; // +0x8
    BOOL _shouldPlayWithEditAttr; // +0x9
    MMAssetInfo * _assetInfo; // +0x10
    id <MMImagePickerControlCenter> _controlCenter; // +0x18
    id <MMAssetPickerBrowserViewDelegate> _browserDelegate; // +0x20
    MMAssetPickerBrowserStateInfo * _stateInfo; // +0x28
    UIButton * _playButton; // +0x30
    WCPlayerView * _videoPlayerView; // +0x38
    WCPlayerPlayArgs * _playerArgs; // +0x40
    WCFinderFeedMediaWrap * _mediaWrap; // +0x48
    UIImageView * _coverImageView; // +0x50
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x58
    CGSize _playButtonSize; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)loadAsset;
- (void)setupWithAsset:(id)arg1;
- (void)stop;
- (void)pause;
- (void)clear;
- (void)onPlayButtonClicked;
- (void)onTap:(id)arg1;
- (void)onVideoPlayFinish;
- (void)layoutSubviews;
- (id)playButton;
- (id)coverImageView;
- (id)tapGestureRecognizer;
- (id)stateInfo;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (CGSize)playButtonSize;
- (void)setPlayButtonSize:(CGSize)arg1;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (BOOL)requestUneditedAsset;
- (void)setRequestUneditedAsset:(BOOL)arg1;
- (BOOL)shouldPlayWithEditAttr;
- (void)setShouldPlayWithEditAttr:(BOOL)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)browserDelegate;
- (void)setBrowserDelegate:(id)arg1;
- (void)setStateInfo:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (id)videoPlayerView;
- (void)setVideoPlayerView:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
