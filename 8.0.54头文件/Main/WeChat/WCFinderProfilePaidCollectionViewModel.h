@interface WCFinderProfilePaidCollectionViewModel : WCFinderStreamProfilePageModel
{
    WCFinderListLoadingStateModel * _loadingState; // +0x8
    id <WCFinderProfilePaidCollectionVMDelegate> _delegate; // +0x10
    NSData * _lastBuffer; // +0x18
    NSMutableArray * _paidCollectionList; // +0x20
    NSMutableSet * _collectionIDSet; // +0x28
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (int)tabId;
- (id)viewPageClassName;
- (id)displayName;
- (long long)sectionType;
- (id)init;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (id)finderUsername;
- (void)fetchFirstPageData;
- (void)fetchMoreData;
- (void)fetchData;
- (void)appendPaidCollections:(id)arg1;
- (void)clearData;
- (id)dataSnapshot;
- (void)updateOverViewPaidCollectionSectionDataWithTotalCount:(long long)arg1;
- (id)paidCollectionWithIndexPath:(id)arg1;
- (BOOL)dataEmpty;
- (unsigned long long)dataCount;
- (id)reportParamsBlock;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)paidCollectionList;
- (void)setPaidCollectionList:(id)arg1;
- (id)collectionIDSet;
- (void)setCollectionIDSet:(id)arg1;
- (void).cxx_destruct;
@end

