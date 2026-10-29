@interface CBTCoopV2MiniShopCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _contentDirty; // +0x8
    BOOL _longPressFired; // +0x9
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    MMWebImageView * _authBadgeView; // +0x18
    UIView * _highlightOverlayView; // +0x20
    UITapGestureRecognizer * _tapGesture; // +0x28
    UILongPressGestureRecognizer * _pressGesture; // +0x30
    NSString * _lastIconURL; // +0x38
    NSString * _lastAuthIconURL; // +0x40
    NSString * _lastAuthIconURLDarkmode; // +0x48
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
- (void)layoutAuthBadge;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (void)applyViewModel;
- (void)updateAuthBadge;
- (void)traitCollectionDidChange:(id)arg1;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapCard;
- (id)typedViewModel;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)authBadgeView;
- (void)setAuthBadgeView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (id)lastIconURL;
- (void)setLastIconURL:(id)arg1;
- (id)lastAuthIconURL;
- (void)setLastAuthIconURL:(id)arg1;
- (id)lastAuthIconURLDarkmode;
- (void)setLastAuthIconURLDarkmode:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
