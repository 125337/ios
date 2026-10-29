@interface CBTCoopV2AsstBoardCellView : CBTAsstBoardBaseCellView
{
    BOOL _coopV2ReportVisible; // +0x8
    BOOL _coopV2HostVisible; // +0x9
    id <CBTCoopV2AsstBoardCellExternalReportDatasource> _coopV2ExternalReportDatasource; // +0x10
    CBTCoopV2InteractionReportGestureRecognizer * _coopV2InteractionReportGestureRecognizer; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setupCellWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)setIsHostedByPlatformView:(BOOL)arg1;
- (void)onAppear;
- (void)onDisappear;
- (UIEdgeInsets)mainContainerInset;
- (void)setupUI;
- (void)refreshTheme;
- (void)layoutSubviews;
- (CGRect)getBubbleFrame;
- (BOOL)coopV2UsesMarkdownStyle;
- (BOOL)coopV2UsesTransparentMarkdownBackground;
- (id)coopV2MarkdownBubbleBackgroundColor;
- (id)coopV2BubbleBackgroundColor;
- (BOOL)coopV2ParticipatesInContentCardReport;
- (BOOL)coopV2ParticipatesInContentCardClickReport;
- (void)coopV2StartExposureIfNeeded;
- (void)coopV2ReportContentCardExposureFromHostViewport;
- (void)coopV2FinishExposureIfNeededWithReason:(id)arg1;
- (id)coopV2ResolvedContentCardCommonParams;
- (void)coopV2HandleOrdinaryClickAtPosition:(CGPoint)arg1 hitView:(id)arg2;
- (BOOL)coopV2HitViewIsInteractiveControl:(id)arg1;
- (id)coopV2ReportHostAttributes;
- (void)coopV2ApplyCellBackgroundStyleIfNeeded;
- (void)traitCollectionDidChange:(id)arg1;
- (id)coopV2ExternalReportDatasource;
- (void)setCoopV2ExternalReportDatasource:(id)arg1;
- (id)coopV2InteractionReportGestureRecognizer;
- (void)setCoopV2InteractionReportGestureRecognizer:(id)arg1;
- (BOOL)coopV2ReportVisible;
- (void)setCoopV2ReportVisible:(BOOL)arg1;
- (BOOL)coopV2HostVisible;
- (void)setCoopV2HostVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
