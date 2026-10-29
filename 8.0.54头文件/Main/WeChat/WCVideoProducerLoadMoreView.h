@interface WCVideoProducerLoadMoreView : UICollectionViewCell <MMRefreshTableFooterDelegate>
{
    id <WCVideoProducerLoadMoreViewDelegate> _delegate; // +0x8
    NSString * _normalStateText; // +0x10
    NSString * _errorStateText; // +0x18
    NSString * _loadingStateText; // +0x20
    NSString * _noDataStateText; // +0x28
    NSString * _noMoreDataStateText; // +0x30
    double _loadMoreThresholdOffset; // +0x38
    WCTimeLineFooterView * _loadMoreFooterView; // +0x40
}
+ (id)cellIdentifier;
- (void)loadViewModel:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)updateForFooterOffset:(id)arg1;
- (void)updateForScrolling:(id)arg1;
- (void)updatePullRefreshState:(unsigned long long)arg1 isError:(BOOL)arg2;
- (unsigned long long)currentState;
- (void)updateloadMoreThresholdOffset:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)normalStateText;
- (void)setNormalStateText:(id)arg1;
- (id)errorStateText;
- (void)setErrorStateText:(id)arg1;
- (id)loadingStateText;
- (void)setLoadingStateText:(id)arg1;
- (id)noDataStateText;
- (void)setNoDataStateText:(id)arg1;
- (id)noMoreDataStateText;
- (void)setNoMoreDataStateText:(id)arg1;
- (double)loadMoreThresholdOffset;
- (void)setLoadMoreThresholdOffset:(double)arg1;
- (id)loadMoreFooterView;
- (void)setLoadMoreFooterView:(id)arg1;
- (void).cxx_destruct;
@end

