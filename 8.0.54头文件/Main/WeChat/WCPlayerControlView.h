@interface WCPlayerControlView : UIView <WCPlayerControlProtocol>
{
    BOOL _isBufferingViewLoading; // +0x8
    WCPlayerView * playerView; // +0x10
    UIView * _coverMask; // +0x18
    MMProgressViewEx * _loadingView; // +0x20
    double _progress; // +0x28
    unsigned long long _loadingLocation; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addWCPlayerSubview;
- (void)layoutSubviews;
- (id)coverMask;
- (id)loadingView;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlay;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)onReceiveAllVideoData;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoTotalTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onCreateThumbImage:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void)setCoverMask:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (BOOL)isBufferingViewLoading;
- (void)setIsBufferingViewLoading:(BOOL)arg1;
- (unsigned long long)loadingLocation;
- (void)setLoadingLocation:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

