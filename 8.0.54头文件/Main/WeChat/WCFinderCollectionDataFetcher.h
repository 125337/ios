@interface WCFinderCollectionDataFetcher : NSObject <WCFinderCollectionFeedListProvider>
{
    BOOL _isLoading; // +0x8
    BOOL _upContinueFlag; // +0x9
    BOOL _downContinueFlag; // +0xa
    BOOL _hasFetchData; // +0xb
    BOOL _isPullingTop; // +0xc
    BOOL _isPullingBottom; // +0xd
    BOOL _isPullingFirstPage; // +0xe
    NSArray * _previousContentVMs; // +0x10
    FinderCollectionInfo * _collectionInfo; // +0x18
    NSString * _fromTid; // +0x20
    NSString * _finderUsername; // +0x28
    NSMutableSet * _tidContainSet; // +0x30
    WCFinderFeedArray * _feedArray; // +0x38
    NSData * _lastBuffer; // +0x40
    FinderJumpInfo * _creatorEntranceJumpInfo; // +0x48
}
- (id)initWithCollectionInfo:(id)arg1 fromTid:(id)arg2;
- (id)contentVMs;
- (void)appendDataItems:(id)arg1 direction:(int)arg2 changeSource:(unsigned long long)arg3;
- (void)updateCollecetionInfoIfNeeded:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData:(int)arg1;
- (long long)contentIndexOfSortID:(unsigned long long)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (int)commentScene;
- (BOOL)hasMoreTop;
- (BOOL)hasMoreBottom;
- (void)pullTop;
- (void)pullBottom;
- (void)pullFirstPage;
- (unsigned long long)collectionTopicID;
- (id)previousContentVMs;
- (void)setPreviousContentVMs:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)upContinueFlag;
- (void)setUpContinueFlag:(BOOL)arg1;
- (BOOL)downContinueFlag;
- (void)setDownContinueFlag:(BOOL)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
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
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)creatorEntranceJumpInfo;
- (void)setCreatorEntranceJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

