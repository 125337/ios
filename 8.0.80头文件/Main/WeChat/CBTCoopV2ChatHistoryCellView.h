@interface CBTCoopV2ChatHistoryCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _longPressFired; // +0x8
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    UIImageView * _bubbleIconView; // +0x18
    UIView * _highlightOverlayView; // +0x20
    UILongPressGestureRecognizer * _pressGesture; // +0x28
    UIColor * _renderedIconColor; // +0x30
    UITapGestureRecognizer * _tapGesture; // +0x38
}
- (id)chatHistoryViewModel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (id)iconTintColor;
- (void)applyIconIfNeededWithSize:(double)arg1;
- (void)applyContent;
- (id)menuAnchorView;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)selectAllForLongPressMenu;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)openRecordPreview;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)bubbleIconView;
- (void)setBubbleIconView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (id)renderedIconColor;
- (void)setRenderedIconColor:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
