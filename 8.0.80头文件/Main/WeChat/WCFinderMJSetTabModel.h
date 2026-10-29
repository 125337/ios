@interface WCFinderMJSetTabModel : NSObject <WCFinderMJSetTabDataFetcherExt>
{
    int _commentScene; // +0x8
    id <WCFinderMJSetTabModelDelegate> _delegate; // +0x10
    NSString * _tabId; // +0x18
    NSString * _tabName; // +0x20
    NSString * _dataScene; // +0x28
    unsigned long long _dataFetchTime; // +0x30
    WCFinderMJSetTabDataFetcher * _dataFetcher; // +0x38
    NSMutableArray * _mutContentVMS; // +0x40
}
- (id)init;
- (void)setDataFetcher:(id)arg1;
- (id)contentVMS;
- (unsigned long long)dataLoadedState;
- (void)ensureFirstPage;
- (void)requestFirstPage:(id /* block */)arg1;
- (void)requestNextPage;
- (id)createListViewModelWithDataScene:(id)arg1;
- (id)createContentVMFromDataItems:(id)arg1;
- (void)flushProviderDataItem;
- (id)contentVMAtIndex:(long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (void)deleteContentVMWithIndex:(unsigned long long)arg1;
- (void)onDataFetcherAppendDataAtRange:(_NSRange)arg1;
- (void)onDataFetcherStateChagned;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)tabId;
- (void)setTabId:(id)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (id)dataScene;
- (void)setDataScene:(id)arg1;
- (unsigned long long)dataFetchTime;
- (id)dataFetcher;
- (id)mutContentVMS;
- (void)setMutContentVMS:(id)arg1;
- (void).cxx_destruct;
@end
