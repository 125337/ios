@interface WCFinderFansListViewModel : NSObject
{
    BOOL _hasMoreFans; // +0x8
    BOOL _isFetchingData; // +0x9
    WCFinderContact * _ownerContact; // +0x10
    id <WCFinderFansListViewModelDelegate> _delegate; // +0x18
    unsigned long long _lastMaxFansId; // +0x20
    NSData * _lastBuf; // +0x28
    NSMutableArray * _contactArray; // +0x30
    NSMutableArray * _addContactArray; // +0x38
}
- (id)initWithContact:(id)arg1;
- (void)fetchMoreData;
- (void)fetchLocalData;
- (id)getContactArrayWithSection:(long long)arg1;
- (BOOL)shouldShowOldFansTips;
- (long long)fansCount;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)removeFans:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)ownerContact;
- (void)setOwnerContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasMoreFans;
- (void)setHasMoreFans:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (unsigned long long)lastMaxFansId;
- (void)setLastMaxFansId:(unsigned long long)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (id)contactArray;
- (void)setContactArray:(id)arg1;
- (id)addContactArray;
- (void)setAddContactArray:(id)arg1;
- (void).cxx_destruct;
@end
