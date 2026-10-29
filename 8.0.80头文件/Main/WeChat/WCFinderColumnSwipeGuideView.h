@interface WCFinderColumnSwipeGuideView : UIView
{
    BOOL _isDismissed; // +0x8
    id /* block */ _touchInsideHandler; // +0x10
    UIImageView * _backdropView; // +0x18
    UIView * _contentContainer; // +0x20
    UIImageView * _arrowImageView; // +0x28
    WCFinderRichTextView * _wordingLabel; // +0x30
    long long _wordingLineCount; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupSubviews;
- (BOOL)showInView:(id)arg1 title:(id)arg2;
- (void)dismissImmediately;
- (id)_wordingWithTitle:(id)arg1;
- (id)_verticalUnitsOfWording:(id)arg1;
- (BOOL)_applyWording:(id)arg1;
- (void)_layoutContent;
- (void)_runEnterAnimation;
- (void)_fadeOutAndRemove;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)touchInsideHandler;
- (void)setTouchInsideHandler:(id /* block */)arg1;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (BOOL)isDismissed;
- (void)setIsDismissed:(BOOL)arg1;
- (long long)wordingLineCount;
- (void)setWordingLineCount:(long long)arg1;
- (void).cxx_destruct;
@end
