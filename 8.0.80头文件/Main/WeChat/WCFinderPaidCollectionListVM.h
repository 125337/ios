@interface WCFinderPaidCollectionListVM : NSObject
{
    id <WCFinderPaidCollectionListVMDelegate> _delegate; // +0x8
    WCFinderListLoadingStateModel * _loadingState; // +0x10
    NSString * _finderUsername; // +0x18
    NSData * _lastBuffer; // +0x20
    NSMutableArray * _paidCollectionList; // +0x28
    NSMutableSet * _paidCollectionIDSet; // +0x30
}
- (id)initWithFinderUsername:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)fetchData;
- (void)appendPaidCollections:(id)arg1;
- (id)dataSnapshot;
- (id)paidCollectionWithIndexPath:(id)arg1;
- (void)clearData;
- (BOOL)dataEmpty;
- (unsigned long long)dataCount;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)paidCollectionList;
- (void)setPaidCollectionList:(id)arg1;
- (id)paidCollectionIDSet;
- (void)setPaidCollectionIDSet:(id)arg1;
- (void).cxx_destruct;
@end
