@interface MMMusicNoAnyVideoView : WCPlayerControlView
{
    WCPlayerView * _playerView; // +0x8
    UIImageView * _imageView; // +0x10
    UILabel * _label; // +0x18
    MMMusicRoundCorneredBarButton * m_postBarButton; // +0x20
    unsigned int _nativeViewId; // +0x28
    id <MMMusicNoAnyVideoViewPlayerDelegate> _delegate; // +0x30
    unsigned long long _videoEpisodeIndex; // +0x38
    id /* block */ _onTappedBlock; // +0x40
}
- (id)init;
- (void)setVideoEpisodeIndex:(unsigned long long)arg1;
- (void)setVideoEpisodeIndex:(unsigned long long)arg1 shouldPlay:(BOOL)arg2;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)destory;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setPromptAlpha:(double)arg1;
- (void)setShowPromptText:(BOOL)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoBeginPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoDidPlayToEndTime;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)videoEpisodeIndex;
- (id /* block */)onTappedBlock;
- (void)setOnTappedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

