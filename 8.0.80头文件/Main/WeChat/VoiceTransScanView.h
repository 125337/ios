@interface VoiceTransScanView : UIView
{
    BOOL _rendering; // +0x8
    BOOL _cachedDarkMode; // +0x9
    UIView * _bubble; // +0x10
    UITextView * _sourceTextView; // +0x18
    UIImage * _normalTextImage; // +0x20
    UIImage * _tintedTextImage; // +0x28
    UIImage * _scanMaskImage; // +0x30
    UIImage * _scanLineImage; // +0x38
    unsigned long long _renderVersion; // +0x40
    UIImage * _effectTextImage; // +0x48
    NSAttributedString * _cachedText; // +0x50
    double _cachedLinePadding; // +0x58
    CIContext * _imageContext; // +0x60
    CIKernel * _textKernel; // +0x68
    NSObject<OS_dispatch_queue> * _renderQueue; // +0x70
    CADisplayLink * _displayLink; // +0x78
    double _startTime; // +0x80
    double _progress; // +0x88
    CGSize _cachedBubbleSize; // +0x90
    CGSize _cachedContainerSize; // +0xa0
    CGRect _localTextRect; // +0xb0
    CGRect _cachedTextBounds; // +0xd0
    CGRect _textFrame; // +0xf0
    UIEdgeInsets _cachedInset; // +0x110
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithBubble:(id)arg1 textView:(id)arg2;
- (void)startAnimating;
- (void)stopAnimating;
- (void)onFrame:(id)arg1;
- (id)textImageWithStorage:(id)arg1 source:(id)arg2;
- (void)refreshTextImages;
- (void)renderEffectFrame;
- (void)drawRect:(CGRect)arg1;
- (id)bubble;
- (void)setBubble:(id)arg1;
- (id)sourceTextView;
- (void)setSourceTextView:(id)arg1;
- (id)normalTextImage;
- (void)setNormalTextImage:(id)arg1;
- (id)tintedTextImage;
- (void)setTintedTextImage:(id)arg1;
- (id)scanMaskImage;
- (void)setScanMaskImage:(id)arg1;
- (id)scanLineImage;
- (void)setScanLineImage:(id)arg1;
- (CGRect)localTextRect;
- (void)setLocalTextRect:(CGRect)arg1;
- (BOOL)rendering;
- (void)setRendering:(BOOL)arg1;
- (unsigned long long)renderVersion;
- (void)setRenderVersion:(unsigned long long)arg1;
- (CGSize)cachedBubbleSize;
- (void)setCachedBubbleSize:(CGSize)arg1;
- (id)effectTextImage;
- (void)setEffectTextImage:(id)arg1;
- (id)cachedText;
- (void)setCachedText:(id)arg1;
- (CGRect)cachedTextBounds;
- (void)setCachedTextBounds:(CGRect)arg1;
- (CGRect)textFrame;
- (void)setTextFrame:(CGRect)arg1;
- (UIEdgeInsets)cachedInset;
- (void)setCachedInset:(UIEdgeInsets)arg1;
- (CGSize)cachedContainerSize;
- (void)setCachedContainerSize:(CGSize)arg1;
- (double)cachedLinePadding;
- (void)setCachedLinePadding:(double)arg1;
- (BOOL)cachedDarkMode;
- (void)setCachedDarkMode:(BOOL)arg1;
- (id)imageContext;
- (void)setImageContext:(id)arg1;
- (id)textKernel;
- (void)setTextKernel:(id)arg1;
- (id)renderQueue;
- (void)setRenderQueue:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void).cxx_destruct;
@end
