@interface CBTAttachmentCardWrapView : CBTAttachmentBaseView <CBTAsstBoardBaseViewModelDelegate, CBTAsstBoardBaseCellViewDelegate, CBTCoopV2AsstBoardCellExternalReportDatasource>
{
    BOOL _coopV2HostVisible; // +0x8
    CBTAsstBoardBaseCellView * _embeddedCellView; // +0x10
    CBTAsstBoardBaseViewModel * _cardViewModel; // +0x18
    double _configuredAttachmentWidth; // +0x20
    double _appliedAttachmentWidth; // +0x28
}
- (id)initWithAttachment:(id)arg1;
- (void)setupEmbeddedCardClickGesture;
- (void)onEmbeddedCardTap:(id)arg1;
- (void)didMoveToSuperview;
- (void)setupCardContent;
- (BOOL)setupCoopV2CardGroup:(id)arg1;
- (void)setupImageCard:(id)arg1;
- (void)setupCoopV2Card:(id)arg1;
- (void)layoutSubviews;
- (void)layoutView;
- (double)embeddedCardWidthForLayout;
- (double)attachmentContainerWidthForLayout;
- (double)referenceSourceSheetCardWidthForLayout;
- (double)finderEmbeddedCardWidthForLayout;
- (double)coopV2SourceWidthForBubbleRule;
- (BOOL)isInReferenceSourceSheetLayout;
- (BOOL)isCoopV2EmbeddedCard;
- (BOOL)isGroupChatCustAsstContext;
- (void)rememberConfiguredAttachmentWidth;
- (void)syncCoopV2MarkdownBackgroundStyle;
- (void)applyHostTraceInfoIfNeeded;
- (void)layoutEmbeddedCellViewWithFrame:(CGRect)arg1;
- (void)syncEmbeddedCellContentViewFrame;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applyCardContainerStyle;
- (id)embeddedCardViewModel;
- (void)coopV2HostDidAppear;
- (void)coopV2HostDidDisappear;
- (id)coopV2ContentCardExposureBaseKey;
- (void)coopV2RefreshContentCardExposureInScrollView:(id)arg1 viewport:(CGRect)arg2 registry:(id)arg3;
- (id)coopV2ContentCardReportCommonParams;
- (BOOL)isResolvedCollapsedTimelineCard;
- (id)hostViewController;
- (void)onNeedUpdateViewModel:(id)arg1;
- (void)onCardActionFollowup:(id)arg1 viewModel:(id)arg2;
- (void)onCellHeightUpdate:(double)arg1 cell:(id)arg2;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (id)embeddedCellView;
- (void)setEmbeddedCellView:(id)arg1;
- (id)cardViewModel;
- (void)setCardViewModel:(id)arg1;
- (double)configuredAttachmentWidth;
- (void)setConfiguredAttachmentWidth:(double)arg1;
- (double)appliedAttachmentWidth;
- (void)setAppliedAttachmentWidth:(double)arg1;
- (BOOL)coopV2HostVisible;
- (void)setCoopV2HostVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
