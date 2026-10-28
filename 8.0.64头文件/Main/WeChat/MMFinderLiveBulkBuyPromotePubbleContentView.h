@interface MMFinderLiveBulkBuyPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveBulkBuyPromoteContentViewDelegate, WCFinderLiveLogReportValueProvider>
{
    BOOL _closeBySelf; // +0x8
    unsigned int _startExposingTime; // +0xc
    MMFinderLiveBulkBuyPromoteContentView * _bulkBuyView; // +0x10
    FinderBulkBuyInfo * _bulkBuyInfo; // +0x18
}
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (void)onBulkBuyPromoteContentViewActionButtonClicked:(id)arg1;
- (void)reportForExpose;
- (void)onClosed;
- (void)onDismissed;
- (void)onShowed;
- (void)onWebImageGetDifferentSize;
- (void)startDisplayAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (void)startHideAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (id)bulkBuyView;
- (void)setBulkBuyView:(id)arg1;
- (id)bulkBuyInfo;
- (void)setBulkBuyInfo:(id)arg1;
- (unsigned int)startExposingTime;
- (void)setStartExposingTime:(unsigned int)arg1;
- (BOOL)closeBySelf;
- (void)setCloseBySelf:(BOOL)arg1;
- (void).cxx_destruct;
@end
