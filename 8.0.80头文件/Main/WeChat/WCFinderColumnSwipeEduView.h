@interface WCFinderColumnSwipeEduView : UIView
{
    BOOL _isDismissed; // +0x8
    id /* block */ _willFadeOutHandler; // +0x10
    id /* block */ _dismissHandler; // +0x18
    PAGView * _pagView; // +0x20
    WCFinderRichTextView * _wordingLabel; // +0x28
    NSString * _currentContent; // +0x30
    UIView * _contentContainer; // +0x38
    UIView * _cardMaskView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)showInView:(id)arg1 title:(id)arg2 cardMaskFrame:(CGRect)arg3;
- (void)dismissImmediately;
- (void)_setupCardMaskWithFrame:(CGRect)arg1;
- (void)fadeOutAndRemove;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)willFadeOutHandler;
- (void)setWillFadeOutHandler:(id /* block */)arg1;
- (id /* block */)dismissHandler;
- (void)setDismissHandler:(id /* block */)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)currentContent;
- (void)setCurrentContent:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)cardMaskView;
- (void)setCardMaskView:(id)arg1;
- (BOOL)isDismissed;
- (void)setIsDismissed:(BOOL)arg1;
- (void).cxx_destruct;
@end
