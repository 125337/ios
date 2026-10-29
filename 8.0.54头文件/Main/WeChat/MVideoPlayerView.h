@interface MVideoPlayerView : UIImageView <MMovieDecoderDelegate>
{
    BOOL _autoRepeat; // +0x8
    id <MVideoPlayerViewDelegate> _delegate; // +0x10
    UIImage * _lastFrame; // +0x18
    id /* block */ _didTouchInsideBlock; // +0x20
    NSString * _cpKey; // +0x28
    MMovieDecoder * _decoder; // +0x30
    UIImage * _firstFrame; // +0x38
    NSString * _url; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)loadAndPlay:(id)arg1;
- (void)pause;
- (void)pauseForRelease;
- (void)restart;
- (void)mMovieDecoderOnDecodeFinished:(id)arg1;
- (void)mMovieDecoder:(id)arg1 onNewVideoFrameReady:(opaqueCMSampleBuffer *)arg2;
- (void)onTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lastFrame;
- (void)setLastFrame:(id)arg1;
- (BOOL)autoRepeat;
- (void)setAutoRepeat:(BOOL)arg1;
- (id /* block */)didTouchInsideBlock;
- (void)setDidTouchInsideBlock:(id /* block */)arg1;
- (id)cpKey;
- (void)setCpKey:(id)arg1;
- (id)decoder;
- (void)setDecoder:(id)arg1;
- (id)firstFrame;
- (void)setFirstFrame:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

