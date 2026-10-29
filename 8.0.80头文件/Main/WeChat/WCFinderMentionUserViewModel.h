@interface WCFinderMentionUserViewModel : NSObject <WCFinderContactExt>
{
    BOOL _hasMoreContact; // +0x8
    id <WCFinderMentionUserViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _mentionedContactsArray; // +0x18
    NSMutableArray * _contactArray; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)init;
- (id)getContactArray;
- (void)updateViewModelData;
- (void)realUpdateViewModelData;
- (void)fetchLocalContactList;
- (void)fetchMoreData;
- (void)unfollowContact:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)onFinderContactFollowListHasChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mentionedContactsArray;
- (void)setMentionedContactsArray:(id)arg1;
- (id)contactArray;
- (void)setContactArray:(id)arg1;
- (BOOL)hasMoreContact;
- (void)setHasMoreContact:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
