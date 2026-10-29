@interface CBTCoopV2WeAppCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _contentDirty; // +0x8
    BOOL _longPressFired; // +0x9
    BOOL _hasReportedMiniAppCardExposure; // +0xa
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    UIView * _highlightOverlayView; // +0x18
    UIButton * _actionButton; // +0x20
    UITapGestureRecognizer * _tapGesture; // +0x28
    UILongPressGestureRecognizer * _pressGesture; // +0x30
    NSString * _appliedContentSignature; // +0x38
    CBTAsstBoardBaseViewModel * _miniAppCardBoundViewModel; // +0x40
}
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)menuAnchorView;
- (id)copyableText;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (void)ensureSubviews;
- (void)applyLayoutWithViewModel:(id)arg1;
- (void)applyContentIfNeededWithViewModel:(id)arg1;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)openWeApp;
- (void)reportMiniAppCardViewExposureIfNeeded;
- (void)reportMiniAppCardEvent:(id)arg1;
- (void)onActionButtonTap;
- (id)typedViewModel;
- (void)reportWeAppCardKVEventWithAction:(int)arg1;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (id)appliedContentSignature;
- (void)setAppliedContentSignature:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (id)miniAppCardBoundViewModel;
- (void)setMiniAppCardBoundViewModel:(id)arg1;
- (BOOL)hasReportedMiniAppCardExposure;
- (void)setHasReportedMiniAppCardExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
