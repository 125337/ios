@interface VoiceTransSendCollapseAnimationContext : NSObject
{
    UIView * _bubbleView; // +0x8
    MMGrowTextView * _textView; // +0x10
    UIFont * _targetFont; // +0x18
    double _minimumLandingY; // +0x20
    double _fallbackTextPadding; // +0x28
    NSArray * _fadeOutViews; // +0x30
    NSArray * _fadeOutLayers; // +0x38
    NSArray * _fadeInViews; // +0x40
    id /* block */ _alongsideAnimations; // +0x48
    CGRect _targetRect; // +0x50
    CGRect _targetTextRect; // +0x70
}
- (id)initWithBubbleView:(id)arg1 textView:(id)arg2 targetRect:(CGRect)arg3 targetTextRect:(CGRect)arg4 targetFont:(id)arg5;
- (id)bubbleView;
- (id)textView;
- (CGRect)targetRect;
- (CGRect)targetTextRect;
- (id)targetFont;
- (double)minimumLandingY;
- (void)setMinimumLandingY:(double)arg1;
- (double)fallbackTextPadding;
- (void)setFallbackTextPadding:(double)arg1;
- (id)fadeOutViews;
- (void)setFadeOutViews:(id)arg1;
- (id)fadeOutLayers;
- (void)setFadeOutLayers:(id)arg1;
- (id)fadeInViews;
- (void)setFadeInViews:(id)arg1;
- (id /* block */)alongsideAnimations;
- (void)setAlongsideAnimations:(id /* block */)arg1;
- (void).cxx_destruct;
@end
