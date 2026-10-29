@interface DotLoadingViewV3 : UIView <MMAnimatedImagePlayObserver>
{
    BOOL _apngPlaying; // +0x8
    BOOL _tintsAPNGWhite; // +0x9
    BOOL _wantsAnimating; // +0xa
    long long _tailLoadingStyle; // +0x10
    PAGView * _pagView; // +0x18
    MMLoadingIndicatorView * _progressView; // +0x20
    UIImageView * _apngView; // +0x28
    NSData * _apngData; // +0x30
    VoiceTransScanView * _scanView; // +0x38
}
- (id)initWithStyle:(long long)arg1;
- (void)setupAPNGWithFirework:(BOOL)arg1 frame:(CGRect)arg2;
- (void)configureScanWithBubble:(id)arg1 textView:(id)arg2;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToWindow;
- (void)updateAnimation;
- (id)onMMAnimatedImagePlayDecodedImage:(id)arg1;
- (long long)tailLoadingStyle;
- (void)setTailLoadingStyle:(long long)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)apngView;
- (void)setApngView:(id)arg1;
- (id)apngData;
- (void)setApngData:(id)arg1;
- (BOOL)apngPlaying;
- (void)setApngPlaying:(BOOL)arg1;
- (BOOL)tintsAPNGWhite;
- (void)setTintsAPNGWhite:(BOOL)arg1;
- (BOOL)wantsAnimating;
- (void)setWantsAnimating:(BOOL)arg1;
- (id)scanView;
- (void)setScanView:(id)arg1;
- (void).cxx_destruct;
@end
