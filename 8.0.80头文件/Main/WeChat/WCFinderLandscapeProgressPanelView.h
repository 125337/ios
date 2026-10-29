@interface WCFinderLandscapeProgressPanelView : WCFinderProgressPanelView
{
    WCFinderProgressBar * _progressBar; // +0x8
    RichTextView * _textView; // +0x10
    unsigned long long _dragState; // +0x18
    UILabel * _totalProgressTimeLabel; // +0x20
    CAGradientLayer * _gradientLayer; // +0x28
    UIImageView * _playIconView; // +0x30
}
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 contentVM:(id)arg4 manual:(BOOL)arg5;
- (void)layoutProgressBar;
- (BOOL)isLandScapePanelView;
- (void)updateControlsStyle;
- (void)updateControlsLayout;
- (void)resetUIViewState;
- (BOOL)isShowing;
- (double)getBottomGradientPositionY;
- (void)updateControlsHiddenState;
- (void)setupTextViewIfNeeded;
- (void)handleWithDraggingStateWithPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)hideSelfAndResetElemStateWithDelayTime:(double)arg1;
- (void)cancelPreviousHideSelfAndResetElemFunc;
- (void)setViews:(id)arg1 alpha:(double)arg2;
- (void)hideSelfAndResetElemState;
- (void)setViewsAlphaZero;
- (void)resetViewsAlpha;
- (id)allViewsExceptProgressBar;
- (id)dynamicWhiteColor;
- (BOOL)shouldIgnoreLeftJumpInfo;
- (id)progressBar;
- (id)totalProgressTimeLabel;
- (id)playIconView;
- (id)gradientLayer;
- (unsigned long long)progressStyle;
- (id)finderProgressBarGetContentVM;
- (id)textView;
- (void)setTextView:(id)arg1;
- (unsigned long long)dragState;
- (void)setDragState:(unsigned long long)arg1;
- (void)setTotalProgressTimeLabel:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void).cxx_destruct;
@end
