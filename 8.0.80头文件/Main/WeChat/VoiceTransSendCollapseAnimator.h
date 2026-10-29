@interface VoiceTransSendCollapseAnimator : NSObject <VoiceTransSendCollapseAnimating>
{
    VoiceTransSendCollapseAnimationContext * _context; // +0x8
    CADisplayLink * _sendCollapseLink; // +0x10
    UIFont * _sendCollapseSourceFont; // +0x18
    UIFont * _sendCollapseTargetFont; // +0x20
    long long _sendCollapseAppliedFontSize; // +0x28
    id /* block */ _sendCollapseCompletion; // +0x30
    struct _sendCollapseState; // +0x38
}
- (void)prepareBubbleAndText;
- (void)animateAuxiliaryViewsWithDuration:(double)arg1;
- (CGRect)sendCollapseLandingRectForTargetRect:(CGRect)arg1;
- (CGRect)sendCollapseTextFrameForTargetTextRect:(CGRect)arg1 landingRect:(CGRect)arg2;
- (void)configureSendCollapseFontWithTargetFont:(id)arg1;
- (void)applySendCollapseFontAtProgress:(double)arg1;
- (void)updateSendCollapseTextWithFrame:(CGRect)arg1 progress:(double)arg2;
- (void)completeSendCollapse;
- (void)animateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)onSendCollapseTick;
- (id)context;
- (void)setContext:(id)arg1;
- (id)sendCollapseLink;
- (void)setSendCollapseLink:(id)arg1;
- (struct)sendCollapseState;
- (void)setSendCollapseState:(struct)arg1;
- (id)sendCollapseSourceFont;
- (void)setSendCollapseSourceFont:(id)arg1;
- (id)sendCollapseTargetFont;
- (void)setSendCollapseTargetFont:(id)arg1;
- (long long)sendCollapseAppliedFontSize;
- (void)setSendCollapseAppliedFontSize:(long long)arg1;
- (id /* block */)sendCollapseCompletion;
- (void)setSendCollapseCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
