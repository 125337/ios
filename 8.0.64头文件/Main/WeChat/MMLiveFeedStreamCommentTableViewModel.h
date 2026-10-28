@interface MMLiveFeedStreamCommentTableViewModel : MMLiveCommentTableViewModel
{
    BOOL _needTableViewAutoScrollToRereshBeforeUnDisplay; // +0x8
    BOOL _hasSuccessLoadLocalDataAfterDisplay; // +0x9
    BOOL _hasSuccessFetchRemoteDataAfterDisplay; // +0xa
}
- (long long)commentCellFrameStyle;
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;
- (id)commentDataMgr;
- (void)initData;
- (Class)commentTableViewCellFrameClass;
- (id)createCommentPubbleViewWithCommentItem:(id)arg1 taskId:(id)arg2;
- (id)createTableViewCellFrame:(id)arg1;
- (void)prepareTableViewCellForReuse:(id)arg1;
- (void)handleForCommentContentViewDisplay:(BOOL)arg1;
- (unsigned long long)getCurrentUnReadCountForDisplay;
- (void)checkIsHasTrackingData:(BOOL)arg1;
- (void)checkisFirstLocalDataLoaded;
- (void)checkisFirstRemoteDataLoaded;
- (CGPoint)convertLocation:(CGPoint)arg1 fromCellToTableView:(id)arg2;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)arg1 boxId:(id)arg2 isHistoryComment:(BOOL)arg3;
- (void)onMMLiveCommentDataResetForTaskId:(id)arg1 boxId:(id)arg2;
- (BOOL)calculateCellFrameAsync;
- (void)setHasSuccessFetchRemoteDataAfterDisplay:(BOOL)arg1;
- (void)setHasSuccessLoadLocalDataAfterDisplay:(BOOL)arg1;
- (void)setLoadingFirstLocalData:(BOOL)arg1;
- (void)setLoadingFirstRemoteData:(BOOL)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeUnDisplay;
- (void)setNeedTableViewAutoScrollToRereshBeforeUnDisplay:(BOOL)arg1;
- (BOOL)hasSuccessLoadLocalDataAfterDisplay;
- (BOOL)hasSuccessFetchRemoteDataAfterDisplay;
@end
