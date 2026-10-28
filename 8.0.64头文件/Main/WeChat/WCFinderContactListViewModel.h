@interface WCFinderContactListViewModel : NSObject <WCFinderContactExt>
{
    BOOL _hasMoreContact; // +0x8
    BOOL _isFetchingData; // +0x9
    id <WCFinderContactListViewModelDelegate> _delegate; // +0x10
    unsigned long long _followCount; // +0x18
    NSMutableArray * _contactArray; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)init;
- (id)getContactArray;
- (void)fetchLocalContactList;
- (void)fetchMoreData;
- (void)unfollowContact:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)unfollowFinderContact:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)unfollowBrandContact:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)onFinderContactFollowListHasChange:(id)arg1;
- (void)insertContact:(id)arg1;
- (void)removeContact:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)followCount;
- (void)setFollowCount:(unsigned long long)arg1;
- (id)contactArray;
- (void)setContactArray:(id)arg1;
- (BOOL)hasMoreContact;
- (void)setHasMoreContact:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
