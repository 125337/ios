@interface WCFinderFeedListViewDatasource : NSObject <WCFinderFeedListViewDataSource, WCFinderStreamLoadingStateDelegate>
{
    WCFinderFeedListView * _listView; // +0x8
    WCFinderFeedArray * _feedArray; // +0x10
    WCFinderStreamLoadingState * _loadingState; // +0x18
}
+ (id)dataSourceWithFeedListView:(id)arg1 feedArray:(id)arg2;
+ (id)dataSourceWithFeedListView:(id)arg1 feedArray:(id)arg2 loadingState:(id)arg3;
- (id)initWithFeedListView:(id)arg1 feedArray:(id)arg2 loadingState:(id)arg3;
- (void)setFeedArray:(id)arg1;
- (void)onFeedArray:(id)arg1 batchUpdate:(id)arg2;
- (void)onLoadingStateChanged:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)listView;
- (void)setListView:(id)arg1;
- (id)feedArray;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (void).cxx_destruct;
@end
