@interface MsgMediaGroupCardVideo : MsgMediaGroupCardContentView <WCPlayerControlProtocol, WCPlayerViewUIDelegate, WCAudioModuleDelegate>
{
    BOOL _wasUploading; // +0x30
    BOOL _pendingAutoPlayAfterUpload; // +0x31
    WCPlayerView * playerView; // +0x38
    UIImageView * _imageView; // +0x40
    WCPlayerView * _videoView; // +0x48
    MMLoadingIndicatorView * _loadingView; // +0x50
    UIView * _controlView; // +0x58
    CAGradientLayer * _infoMaskLayer; // +0x60
    UILabel * _timeLabel; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;
- (void)setupUI;
- (void)layoutSubviews;
- (void)tryLoadThumb;
- (void)startDisplay;
- (void)endDisplay;
- (void)onBeginAnimating;
- (void)onEndAnimating;
- (void)refreshUploadStatus;
- (id)playingIdentifier;
- (id)generatePlayerInfo;
- (id)generatePlayerView:(id)arg1;
- (BOOL)tryActiveModule;
- (BOOL)tryDeactiveModule;
- (BOOL)isModulActive;
- (void)startPlay;
- (void)pausePlay;
- (void)stopPlay;
- (void)setDisableMediaPlaying:(BOOL)arg1;
- (BOOL)isMediaPlaying;
- (BOOL)canAutoPlayMedia;
- (BOOL)tryAutoPlayMedia;
- (void)pauseMedia;
- (double)currentPlayTime;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)onMessageDownloadThumbImageOK;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onMessageUploadThumbImageOK;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)infoMaskLayer;
- (void)setInfoMaskLayer:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (BOOL)wasUploading;
- (void)setWasUploading:(BOOL)arg1;
- (BOOL)pendingAutoPlayAfterUpload;
- (void)setPendingAutoPlayAfterUpload:(BOOL)arg1;
- (void).cxx_destruct;
@end
