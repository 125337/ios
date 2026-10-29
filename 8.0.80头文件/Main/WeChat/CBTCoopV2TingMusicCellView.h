@interface CBTCoopV2TingMusicCellView : CBTCoopV2TingCardCellView <CBTCoopV2TingMusicViewModelDelegate, UIGestureRecognizerDelegate>
{
    BOOL _contentDirty; // +0x8
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x10
    TingSharePlayButton * _playButton; // +0x18
    UIView * _highlightOverlayView; // +0x20
    UITapGestureRecognizer * _tapGesture; // +0x28
    UILongPressGestureRecognizer * _pressGesture; // +0x30
    NSString * _appliedContentSignature; // +0x38
}
- (void)prepareForReuse;
- (id)menuAnchorView;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)triggerAutoPlay;
- (void)tingViewModelDidFillHostInfo;
- (void)startAutoPlay;
- (id)musicViewModel;
- (void)fillTingReportExtInfo2:(id)arg1;
- (id)tingCardBusinessReportParams;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (void)applyPlayButtonStyle;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)ensureSubviews;
- (void)applyViewModelIfNeeded;
- (id)displaySubtitleForTingItem:(id)arg1;
- (void)reloadTingItemCoverWithItem:(id)arg1;
- (void)layoutMusicBubbleView;
- (id)shareListenItem;
- (id)categoryItem;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)isSameListenItem:(id)arg1 targetItem:(id)arg2;
- (BOOL)isReusablePlayerStatus:(int)arg1;
- (BOOL)openTingPlayerIfCurrentItemMatched:(id)arg1 launchOptions:(id)arg2;
- (void)reportTingDetailClick;
- (void)openTingDetail;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (id)appliedContentSignature;
- (void)setAppliedContentSignature:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end
