@interface CBTCoopV2CommNativeCellView : CBTCoopV2AsstBoardCellView
{
    BOOL _contentDirty; // +0x8
    BOOL _longPressFired; // +0x9
    UILabel * _titleLabel; // +0x10
    NSArray * _rowViews; // +0x18
    NSArray * _iconViews; // +0x20
    NSArray * _nameLabels; // +0x28
    NSArray * _arrowViews; // +0x30
    NSArray * _highlightViews; // +0x38
    NSArray * _separatorViews; // +0x40
    NSString * _appliedContentSignature; // +0x48
}
- (void)prepareForReuse;
- (id)menuAnchorView;
- (id)copyableText;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyViewModelIfNeeded;
- (void)rebuildRowsWithItems:(id)arg1;
- (void)resetRows;
- (void)layoutRowsWithItems:(id)arg1 listY:(double)arg2;
- (void)updateRowsThemeWithItems:(id)arg1;
- (id)typedViewModel;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onRowTapped:(id)arg1;
- (void)onRowPressed:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rowViews;
- (void)setRowViews:(id)arg1;
- (id)iconViews;
- (void)setIconViews:(id)arg1;
- (id)nameLabels;
- (void)setNameLabels:(id)arg1;
- (id)arrowViews;
- (void)setArrowViews:(id)arg1;
- (id)highlightViews;
- (void)setHighlightViews:(id)arg1;
- (id)separatorViews;
- (void)setSeparatorViews:(id)arg1;
- (id)appliedContentSignature;
- (void)setAppliedContentSignature:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
