@interface MMMusicEditVideoPlayerContainerView : MMUIView <MMMusicEditVideoPlayerDelegate>
{
    MMMusicEditVideoPlayerView * m_playerView; // +0x8
    MMWebImageView * m_imageView; // +0x10
    MMWebImageView * m_thumbImageView; // +0x18
    MMMusicFadeOutLayer * m_playerMaskLayer; // +0x20
    CGSize curPresentationSize; // +0x28
    BOOL hasSetMaskLayer; // +0x38
    BOOL isLongVideo; // +0x39
}
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)setVideoPath:(id)arg1 videoInitialTime:(double)arg2 videoWidth:(double)arg3 videoHeight:(double)arg4;
- (void)setMediaInfo:(id)arg1 videoInitialTime:(double)arg2 shouldPlay:(BOOL)arg3;
- (void)setThumbImagePath:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (void)seek:(double)arg1;
- (void)mutePlay;
- (void)pause;
- (double)currentPlayedTime;
- (id)syncCaptureVideo;
- (void)tryToSetMaskLayer;
- (void)setupMaskLayerWithSize:(CGSize)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1 playBackInfo:(id)arg2;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void).cxx_destruct;
@end
