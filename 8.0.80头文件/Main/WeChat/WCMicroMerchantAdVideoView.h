@interface WCMicroMerchantAdVideoView : UIView <WCCanvasImageLoaderObserver, WCMicroMerchantAdVideoControlDelegate>
{
    id <WCMicroMerchantAdVideoViewDelegate> _delegate; // +0x8
    WCMicroMerchantAdVideoControlView * _controlView; // +0x10
    WCPlayerPlayArgs * _playInfo; // +0x18
    WCPlayerView * _wcPlayerView; // +0x20
    WCMediaItem * _mediaItem; // +0x28
    FoldSnsInfo_SnsVideoInfo * _videoInfo; // +0x30
    WCFoldSnsAdvertiseInfo * _foldAdInfo; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configWithFoldVideoInfo:(id)arg1;
- (void)initAllSubviews;
- (void)tryToLoadVideo;
- (void)createAndSetupPlayer;
- (id)createPlayerArgsWithPlayMode:(unsigned long long)arg1;
- (void)standardizedPlayerArgsInfo:(id)arg1 mute:(BOOL)arg2;
- (void)initThumbImageView;
- (void)standardizedPlayerView:(id)arg1;
- (id)createMediaItem:(id)arg1;
- (double)getPlaybackTime;
- (void)pause;
- (void)resume;
- (unsigned long long)fetchVideoTotalTime;
- (unsigned long long)fetchVideoTotalTimeFromAsset;
- (void)onVideoDidPlayToEndTime;
- (id)controlView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setControlView:(id)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (id)wcPlayerView;
- (void)setWcPlayerView:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg1;
- (id)foldAdInfo;
- (void)setFoldAdInfo:(id)arg1;
- (void).cxx_destruct;
@end
