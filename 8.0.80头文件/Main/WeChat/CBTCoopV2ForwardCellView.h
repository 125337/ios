@interface CBTCoopV2ForwardCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _isOpeningHistory; // +0x8
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    UIImageView * _thumbView; // +0x18
    UIView * _highlightOverlayView; // +0x20
    UILongPressGestureRecognizer * _pressGesture; // +0x28
    double _renderedThumbSize; // +0x30
    UITapGestureRecognizer * _tapGesture; // +0x38
    UIColor * _renderedIconColor; // +0x40
}
- (id)forwardViewModel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (void)applyThumbIfNeededWithSize:(double)arg1;
- (void)applyContent;
- (id)menuAnchorView;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)selectAllForLongPressMenu;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapCard;
- (BOOL)tryOpenLocalHistoryWithForwardMsgId:(id)arg1 title:(id)arg2 desc:(id)arg3 historyXml:(id)arg4 inViewController:(id)arg5;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (double)renderedThumbSize;
- (void)setRenderedThumbSize:(double)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)isOpeningHistory;
- (void)setIsOpeningHistory:(BOOL)arg1;
- (id)renderedIconColor;
- (void)setRenderedIconColor:(id)arg1;
- (void).cxx_destruct;
@end
