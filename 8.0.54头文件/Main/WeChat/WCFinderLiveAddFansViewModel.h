@interface WCFinderLiveAddFansViewModel : NSObject
{
    BOOL _hasMoreFans; // +0x8
    id <WCFinderLiveAddFansViewModelDelegate> _delegate; // +0x10
    long long _fansCount; // +0x18
    NSMutableArray * _contactArray; // +0x20
    unsigned long long _lastMaxFansId; // +0x28
    unsigned long long _liveID; // +0x30
}
- (id)initWithLiveID:(unsigned long long)arg1 addFansCount:(long long)arg2;
- (void)fetchMoreData;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)removeFans:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)setFansCount:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)fansCount;
- (id)contactArray;
- (void)setContactArray:(id)arg1;
- (BOOL)hasMoreFans;
- (void)setHasMoreFans:(BOOL)arg1;
- (unsigned long long)lastMaxFansId;
- (void)setLastMaxFansId:(unsigned long long)arg1;
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

