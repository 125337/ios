@interface WCTogetherDisplayInfo : NSObject
{
    BOOL _containsAnyUsers; // +0x8
    WCDataItem * _referredDataItem; // +0x10
    CContact * _currentUser; // +0x18
    NSMutableArray * _friends; // +0x20
    NSMutableArray * _otherUsernames; // +0x28
}
- (id)init;
- (BOOL)isAuthoredByCurrentUser;
- (BOOL)containsCurrentUser;
- (BOOL)containsFriends;
- (BOOL)containsOtherUsers;
- (BOOL)containsTogetherUsers;
- (id)referredDataItem;
- (void)setReferredDataItem:(id)arg1;
- (id)currentUser;
- (void)setCurrentUser:(id)arg1;
- (id)friends;
- (id)otherUsernames;
- (BOOL)containsAnyUsers;
- (void).cxx_destruct;
@end
