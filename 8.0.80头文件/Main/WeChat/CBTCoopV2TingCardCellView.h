@interface CBTCoopV2TingCardCellView : CBTCoopV2AsstBoardCellView
{
    BOOL _hasReportedTingCardExposure; // +0x8
}
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (id)tingCardBusinessReportParams;
- (BOOL)reportTingCardEvent:(id)arg1;
- (id)tingCardReportParams;
- (void)syncStandaloneHostTraceInfoIfNeeded;
- (void)reportAutoPlayShownIfNeededOnScreen;
- (void)tryReportTingCardExposure;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (BOOL)shouldWaitForHostTraceInfoBeforeExposure;
- (BOOL)hasReportedTingCardExposure;
- (void)setHasReportedTingCardExposure:(BOOL)arg1;
@end
