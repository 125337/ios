@interface CBTCoopV2FileCellView : CBTCoopV2AsstBoardCellView <CBTCoopV2FileViewModelDelegate, UIGestureRecognizerDelegate>
{
    BOOL _longPressFired; // +0x8
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    UIView * _highlightOverlayView; // +0x18
    UITapGestureRecognizer * _tapGesture; // +0x20
    UILongPressGestureRecognizer * _pressGesture; // +0x28
}
- (void)prepareForReuse;
- (id)fileViewModel;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (double)preferredBubbleWidth;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (id)subtitleText;
- (id)fileExtText;
- (double)measuredCellHeight;
- (void)updateCellHeightIfNeeded;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)menuAnchorView;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onContentTap;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)fileViewModelDidUpdateTransferState:(id)arg1;
- (void)fileViewModel:(id)arg1 didUpdateProgress:(int)arg2;
- (void)fileViewModelDidCompleteTransfer:(id)arg1;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
