@interface CBTCoopV2HorizontalCardGroupCellView : CBTCoopV2AsstBoardCellView
{
    BOOL _horizontalHostVisible; // +0x8
    CBTCoopV2HorizontalCardContainerView * _horizontalContainerView; // +0x10
}
- (BOOL)coopV2ParticipatesInContentCardReport;
- (void)prepareForReuse;
- (BOOL)disablesLongPressMenu;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (id)menuAnchorView;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)onAppear;
- (void)onDisappear;
- (void)updateMaxExpPct:(long long)arg1;
- (void)coopV2RefreshEmbeddedContentCardExposureWithRegistry:(id)arg1 baseKey:(id)arg2;
- (id)horizontalContainerView;
- (void)setHorizontalContainerView:(id)arg1;
- (BOOL)horizontalHostVisible;
- (void)setHorizontalHostVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
