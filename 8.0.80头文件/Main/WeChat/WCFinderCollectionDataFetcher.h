@interface WCFinderCollectionDataFetcher : NSObject <WCFinderFeedArrayDelegate, WCFinderCollectionFeedListInfoUpdatableProvider, WCFinderInteractiveDetailListDataProvider>
{
    BOOL _isLoading; // +0x8
    BOOL _upContinueFlag; // +0x9
    BOOL _downContinueFlag; // +0xa
    BOOL _hasFetchData; // +0xb
    BOOL _isPullingTop; // +0xc
    BOOL _isPullingBottom; // +0xd
    BOOL _isPullingFirstPage; // +0xe
    BOOL _isJumpingToBreakPage; // +0xf
    FinderCollectionInfo * _collectionInfo; // +0x10
    FinderPaidCollectionInfo * _paidCollectionInfo; // +0x18
    FinderCollectionErrPage * _collectionErrPage; // +0x20
    NSString * _fromTid; // +0x28
    NSString * _finderUsername; // +0x30
    NSMutableSet * _tidContainSet; // +0x38
    WCFinderFeedArray * _feedArray; // +0x40
    NSData * _lastBuffer; // +0x48
    FinderJumpInfo * _creatorEntranceJumpInfo; // +0x50
}
+ (BOOL)isFeedArray:(id)arg1 intersectWithDataItems:(id)arg2;
- (id)initWithCollectionInfo:(id)arg1 fromTid:(id)arg2;
- (id)initWithCollectionInfo:(id)arg1 firstContentVM:(id)arg2 fromTid:(id)arg3;
- (id)contentVMs;
- (void)onFeedArray:(id)arg1 insertContentVMS:(id)arg2 removeContentVMS:(id)arg3;
- (void)appendDataItems:(id)arg1 resetPreviousFeeds:(BOOL)arg2 direction:(int)arg3;
- (void)updateCollecetionInfoIfNeeded:(id)arg1;
- (void)updatePaidCollectionInfoIfNeeded:(id)arg1;
- (void)fetchFirstPageData:(id /* block */)arg1;
- (void)fetchNextPageData:(int)arg1 complete:(id /* block */)arg2;
- (void)fetchPageDataWithTid:(id)arg1 direction:(int)arg2 complete:(id /* block */)arg3;
- (long long)contentIndexOfSortID:(unsigned long long)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (int)commentScene;
- (BOOL)hasMoreTop;
- (BOOL)hasMoreBottom;
- (void)pullTop:(id /* block */)arg1;
- (void)pullBottom:(id /* block */)arg1;
- (void)pullFirstPage:(id /* block */)arg1;
- (void)jumpToPageWithTid:(id)arg1 isRollingUp:(BOOL)arg2 complete:(id /* block */)arg3;
- (unsigned long long)collectionTopicID;
- (id)itemContentVMs;
- (id)contentVMAtIndex:(long long)arg1;
- (void)deleteItemAtIndex:(long long)arg1;
- (BOOL)hasMoreData;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)upContinueFlag;
- (void)setUpContinueFlag:(BOOL)arg1;
- (BOOL)downContinueFlag;
- (void)setDownContinueFlag:(BOOL)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)paidCollectionInfo;
- (void)setPaidCollectionInfo:(id)arg1;
- (id)collectionErrPage;
- (void)setCollectionErrPage:(id)arg1;
- (id)fromTid;
- (void)setFromTid:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (BOOL)isPullingTop;
- (void)setIsPullingTop:(BOOL)arg1;
- (BOOL)isPullingBottom;
- (void)setIsPullingBottom:(BOOL)arg1;
- (BOOL)isPullingFirstPage;
- (void)setIsPullingFirstPage:(BOOL)arg1;
- (BOOL)isJumpingToBreakPage;
- (void)setIsJumpingToBreakPage:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)creatorEntranceJumpInfo;
- (void)setCreatorEntranceJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
