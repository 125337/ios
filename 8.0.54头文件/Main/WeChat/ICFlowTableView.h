@interface ICFlowTableView : UITableView
{
    id <ICFlowBatchFetchingDelegate> _batchFetchingDelegate; // +0x8
    double _leadingScreensForBatching; // +0x10
    ICBatchFetchingContext * _batchFetchingContext; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)didMoveToWindow;
- (id)batchFetchingContext;
- (void)setContentSize:(CGSize)arg1;
- (void)setLeadingScreensForBatching:(double)arg1;
- (void)checkForBatchFetching;
- (void)beginBatchFetchingIfNeeded:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (void)_beginBatchFetching;
- (void)stopBatchFetching;
- (id)batchFetchingDelegate;
- (void)setBatchFetchingDelegate:(id)arg1;
- (double)leadingScreensForBatching;
- (void)setBatchFetchingContext:(id)arg1;
- (void).cxx_destruct;
@end

