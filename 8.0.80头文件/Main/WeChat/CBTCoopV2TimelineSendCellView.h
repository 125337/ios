@interface CBTCoopV2TimelineSendCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _contentDirty; // +0x8
    BOOL _longPressFired; // +0x9
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    UIImageView * _momentIconView; // +0x18
    UIView * _highlightOverlayView; // +0x20
    UITapGestureRecognizer * _tapGesture; // +0x28
    UILongPressGestureRecognizer * _pressGesture; // +0x30
    NSString * _displayedTitle; // +0x38
    NSString * _displayedSubtitle; // +0x40
}
- (id)sendViewModel;
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (void)applyContentIfNeeded;
- (void)refreshSendContent;
- (id)menuAnchorView;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)jumpToFeed;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)momentIconView;
- (void)setMomentIconView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (id)displayedTitle;
- (void)setDisplayedTitle:(id)arg1;
- (id)displayedSubtitle;
- (void)setDisplayedSubtitle:(id)arg1;
- (void).cxx_destruct;
@end
