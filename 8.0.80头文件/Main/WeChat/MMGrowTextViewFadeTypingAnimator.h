@interface MMGrowTextViewFadeTypingAnimator : NSObject
{
    MMTextView * _textView; // +0x8
    NSMutableDictionary * _liveOverlays; // +0x10
}
- (id)initWithTextView:(id)arg1;
- (CGRect)glyphRectForCharIndex:(unsigned long long)arg1 font:(id)arg2;
- (void)animateNewRange:(_NSRange)arg1 completion:(id /* block */)arg2;
- (void)runFadeTypingOnOverlay:(id)arg1 fadeIn:(double)arg2 hold:(double)arg3 fadeOut:(double)arg4 beginTime:(double)arg5;
- (id)currentInkColor;
- (id)buildGlowLayerForChar:(id)arg1 font:(id)arg2 rect:(CGRect)arg3 scale:(double)arg4 inkColor:(id)arg5;
- (id)blurredGlyphImageForChar:(id)arg1 font:(id)arg2 charRect:(CGRect)arg3 padRect:(CGRect)arg4 blurRadius:(double)arg5 scale:(double)arg6;
- (void)runGlowOnLayer:(id)arg1 charIndex:(unsigned long long)arg2 fadeIn:(double)arg3 hold:(double)arg4 beginTime:(double)arg5 staggerDelay:(double)arg6;
- (void)reapplyClearColorAndPruneStaleOverlaysAgainstText:(id)arg1;
- (void)cancelAllRestoringColors;
- (void)dealloc;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)liveOverlays;
- (void)setLiveOverlays:(id)arg1;
- (void).cxx_destruct;
@end
