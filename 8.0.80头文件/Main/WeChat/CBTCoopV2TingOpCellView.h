@interface CBTCoopV2TingOpCellView : CBTCoopV2TingCardCellView <UIGestureRecognizerDelegate, CBTCoopV2TingOpViewModelDelegate>
{
    BOOL _contentDirty; // +0x8
    UIView * _cardView; // +0x10
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x18
    UITapGestureRecognizer * _tapGesture; // +0x20
    UILongPressGestureRecognizer * _pressGesture; // +0x28
    UIView * _highlightOverlayView; // +0x30
    NSString * _appliedContentSignature; // +0x38
}
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (id)menuAnchorView;
- (void)layoutSubviews;
- (id)tingOpViewModel;
- (unsigned long long)tingReportQueryId;
- (void)fillTingReportExtInfo2:(id)arg1;
- (void)tingOpViewModelDidFillHostInfo;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (void)ensureSubviews;
- (void)applyViewModelIfNeeded;
- (void)applyContentWithViewModel:(id)arg1;
- (id)tingCardBusinessReportParams;
- (void)layoutContentWithViewModel:(id)arg1;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapCard;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)appliedContentSignature;
- (void)setAppliedContentSignature:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end
