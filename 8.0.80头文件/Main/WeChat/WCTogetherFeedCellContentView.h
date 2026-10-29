@interface WCTogetherFeedCellContentView : UIView
{
    BOOL _showsBorder; // +0x8
    UIColor * _normalBackgroundColor; // +0x10
    UIColor * _highlightedBackgroundColor; // +0x18
    id /* block */ _didTapBlock; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setNormalBackgroundColor:(id)arg1;
- (void)setNormalState;
- (void)setHighlightedState;
- (void)setShowsBorder:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)normalBackgroundColor;
- (id)highlightedBackgroundColor;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (BOOL)showsBorder;
- (id /* block */)didTapBlock;
- (void)setDidTapBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
