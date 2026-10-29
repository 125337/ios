@interface WCFinderMinimizePlayerContentView : WCFinderMinimizeDisplayContentBaseView <WCPlayerControlProtocol>
{
    WCPlayerView * _playerView; // +0x38
    id /* block */ _playerGenerator; // +0x40
    CGSize _originSize; // +0x48
}
- (void)layoutSubviews;
- (BOOL)needFullCover;
- (void)updateContentVM:(id)arg1;
- (CGSize)contentSize;
- (CGSize)calMediaSize;
- (BOOL)beTakeOverAudioModel;
- (void)didMoveToSuperview;
- (void)onMinimizeFloatingViewDidDisplay;
- (void)setPlayerView:(id)arg1;
- (void)dealloc;
- (void)cleanUp;
- (void)beforeRestore;
- (void)hidePlayerViewIfNeeded:(BOOL)arg1;
- (void)changePlayerViewPIPOpen:(BOOL)arg1;
- (void)notifyPipAudioModuleActiveStateChanged:(BOOL)arg1;
- (void)replaceCurContentVM:(id)arg1;
- (BOOL)getPIPSwitch;
- (BOOL)canGenPIP;
- (void)pausePlay;
- (void)resumePlay;
- (void)ensurePlayer;
- (void)keepHandlePlayer;
- (id)animatingSnapView;
- (id)getCurrendThumb;
- (double)playPosition;
- (void)configDirectlyWithPlayer:(id)arg1 contentVM:(id)arg2;
- (void)onPlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onVideoFristFrameRendered;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)_handleVideoFinishPlay;
- (void)onCreateThumbImage:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onReceiveAllVideoData;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (id)playerView;
- (id /* block */)playerGenerator;
- (void)setPlayerGenerator:(id /* block */)arg1;
- (CGSize)originSize;
- (void)setOriginSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

