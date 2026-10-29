@interface WCFinderPaidCollectionFeedListProvider : NSObject <WCFinderCollectionFeedListProvider>
{
    BOOL _isLoading; // +0x8
    BOOL _isPullingTop; // +0x9
    BOOL _isPullingBottom; // +0xa
    BOOL _isPullingFirstPage; // +0xb
    BOOL _upContinueFlag; // +0xc
    BOOL _downContinueFlag; // +0xd
    BOOL _hasFetchData; // +0xe
    NSString * _finderUsername; // +0x10
    NSArray * _previousContentVMs; // +0x18
    WCFinderFeedArray * _feedArray; // +0x20
    NSData * _lastBuffer; // +0x28
    NSString * _fromTid; // +0x30
    FinderPaidCollectionInfo * _paidCollection; // +0x38
}
- (id)initWithPaidCollection:(id)arg1 fromTid:(id)arg2;
- (void)fetchFirstPageData;
- (void)fetchNextPageData:(int)arg1;
- (void)insertLocalCacheFeedIfNeed;
- (int)commentScene;
- (void)appendDataItems:(id)arg1 direction:(int)arg2 modifySource:(unsigned long long)arg3;
- (BOOL)hasMoreTop;
- (BOOL)hasMoreBottom;
- (void)pullTop;
- (void)pullBottom;
- (void)pullFirstPage;
- (unsigned long long)collectionTopicID;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)previousContentVMs;
- (void)setPreviousContentVMs:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isPullingTop;
- (void)setIsPullingTop:(BOOL)arg1;
- (BOOL)isPullingBottom;
- (void)setIsPullingBottom:(BOOL)arg1;
- (BOOL)isPullingFirstPage;
- (void)setIsPullingFirstPage:(BOOL)arg1;
- (BOOL)upContinueFlag;
- (void)setUpContinueFlag:(BOOL)arg1;
- (BOOL)downContinueFlag;
- (void)setDownContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)fromTid;
- (void)setFromTid:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (void).cxx_destruct;
@end

