@interface CBTCoopV2SearchCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _contentDirty; // +0x8
    BOOL _longPressFired; // +0x9
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    UIView * _highlightOverlayView; // +0x18
    UITapGestureRecognizer * _tapGesture; // +0x20
    UILongPressGestureRecognizer * _pressGesture; // +0x28
    NSString * _lastThumbURL; // +0x30
}
- (void)setupCellWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (double)preferredBubbleWidth;
- (id)menuAnchorView;
- (id)copyableText;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (id)displaySubtitle;
- (void)applyViewModel;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)jumpToSearchDetail;
- (id)typedViewModel;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (id)lastThumbURL;
- (void)setLastThumbURL:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
