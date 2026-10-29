@interface CBTCoopV2ShopOrderCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _longPressFired; // +0x8
    UIView * _highlightOverlayView; // +0x10
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x18
    UITapGestureRecognizer * _tapGesture; // +0x20
    UILongPressGestureRecognizer * _pressGesture; // +0x28
    NSString * _renderedProductImageURL; // +0x30
}
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)menuAnchorView;
- (id)orderViewModel;
- (void)ensureSubviews;
- (void)applyLayout;
- (double)preferredBubbleWidth;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (id)subtitleText;
- (void)setupAccessibility;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onContentTap;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (id)renderedProductImageURL;
- (void)setRenderedProductImageURL:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
