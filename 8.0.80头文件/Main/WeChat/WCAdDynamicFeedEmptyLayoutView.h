@interface WCAdDynamicFeedEmptyLayoutView : MMUIView <WCAdDynamicFeedBackgroundButtonDelegate>
{
    BOOL _isLayoutClickable; // +0x8
    WCAdDynamicFeedElementInfo * _elementInfo; // +0x10
    id <WCAdDynamicFeedEmptyLayoutViewDelegate> _delegate; // +0x18
    WCAdDynamicFeedBackgroundButton * _backgroundButton; // +0x20
    UIView * _highlightedCoverView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 elementInfo:(id)arg2;
- (void)setIsLayoutClickable:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)resetSubViews;
- (id)highlightedCoverView;
- (id)backgroundButton;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)onDynamicFeedBackgroundButtonSetHighlighted:(BOOL)arg1;
- (BOOL)isLayoutClickable;
- (id)elementInfo;
- (void)setElementInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (void)setHighlightedCoverView:(id)arg1;
- (void).cxx_destruct;
@end
