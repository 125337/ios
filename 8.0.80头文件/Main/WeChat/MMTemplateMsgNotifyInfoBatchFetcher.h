@interface MMTemplateMsgNotifyInfoBatchFetcher : NSObject <PBMessageObserverDelegate>
{
    BOOL _isFetching; // +0x8
    id <MMTemplateMsgNotifyInfoBatchFetcherDelegate> _delegate; // +0x10
    NSMutableDictionary * _fetchItemsMap; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)fetchNotifyInfoIfNeededWithUsername:(id)arg1;
- (void)triggerUpdate;
- (void)handleCgiResultWithReq:(id)arg1 resp:(id)arg2;
- (void)handleCgiFailedWithReq:(id)arg1;
- (void)handleCgiSuccessWithReq:(id)arg1 resp:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)collectItemsToFetch;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fetchItemsMap;
- (void)setFetchItemsMap:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (void).cxx_destruct;
@end
