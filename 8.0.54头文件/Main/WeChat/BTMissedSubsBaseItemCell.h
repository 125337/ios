@interface BTMissedSubsBaseItemCell : BTBaseItemCellView
{
    BOOL _forceHighlight; // +0x8
    UILongPressGestureRecognizer * _longPressGest; // +0x10
    UIView * _highlightMaskView; // +0x18
}
- (id)initWithViewModel:(id)arg1;
- (void)configureLayout;
- (void)updateCoverImg:(id)arg1 urlStr:(id)arg2;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)addRaddiCorner;
- (unsigned long long)contentViewRaddiCorners;
- (id)highlightMaskView;
- (void)layoutHightMaskView;
- (void)addLongPressGesture;
- (void)handleLongPressEx:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forceSetHighlighted:(BOOL)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)longPressGest;
- (void)setLongPressGest:(id)arg1;
- (void)setHighlightMaskView:(id)arg1;
- (BOOL)forceHighlight;
- (void)setForceHighlight:(BOOL)arg1;
- (void).cxx_destruct;
@end

