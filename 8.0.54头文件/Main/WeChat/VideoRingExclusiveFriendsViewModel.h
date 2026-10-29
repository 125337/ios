@interface VideoRingExclusiveFriendsViewModel : NSObject <VideRingModifyExt>
{
    id <VideoRingExclusiveFriendsViewModelDelegate> _delegate; // +0x8
    VideoRingNetProvider * _provider; // +0x10
    AnyPromise * _preload_friendsRingPromise; // +0x18
    NSMutableArray * _ringbacks; // +0x20
    NSMutableSet * _friendUsernameSet; // +0x28
    unsigned long long _climinseq; // +0x30
}
- (id)init;
- (unsigned long long)countOfExclusiveRingbacks;
- (id)dicExistContact;
- (id)fetchRingBacks;
- (id)ringBackAtIndex:(unsigned long long)arg1;
- (id)deleteRingbackAtIndex:(unsigned long long)arg1;
- (BOOL)hasLoadDataForFriend:(id)arg1;
- (long long)uniqueAddObject:(id)arg1;
- (void)onExclusiveRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)preload_friendsRingPromise;
- (void)setPreload_friendsRingPromise:(id)arg1;
- (id)ringbacks;
- (void)setRingbacks:(id)arg1;
- (id)friendUsernameSet;
- (void)setFriendUsernameSet:(id)arg1;
- (unsigned long long)climinseq;
- (void)setCliminseq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

