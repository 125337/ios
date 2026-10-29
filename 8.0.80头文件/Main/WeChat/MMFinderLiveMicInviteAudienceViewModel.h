@interface MMFinderLiveMicInviteAudienceViewModel : NSObject <MMFinderLiveOnlineUserLogicDelegate>
{
    id <MMFinderLiveMicInviteAudienceViewModelDelegate> _actionDelegate; // +0x8
    NSMutableArray * _displayedUserList; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    unsigned long long _lastFetchOnlineUserListTime; // +0x20
    MMFinderLiveOnlineUserLogic * _onlineUserLogic; // +0x28
    WCFinderGetLiveOnlineMemberResult * _onlineMemberResult; // +0x30
    NSDictionary * _invitedMicAudienceDict; // +0x38
    NSSet * _waitConnectAudienceSet; // +0x40
    NSSet * _removedAudienceSet; // +0x48
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)updateDisplayedUserListWithNotifyFlag:(BOOL)arg1;
- (BOOL)updateListWithInvitedMicAudienceDict:(id)arg1 waitConnectAudienceSet:(id)arg2 removedAudienceSet:(id)arg3;
- (void)fetchOnlineUserList;
- (void)tryFetchOnlineUserListAfterMicConditionChanged;
- (void)onFetchFinderOnlineUserListWithError:(id)arg1 onlineMemberResult:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)displayedUserList;
- (void)setDisplayedUserList:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)lastFetchOnlineUserListTime;
- (void)setLastFetchOnlineUserListTime:(unsigned long long)arg1;
- (id)onlineUserLogic;
- (void)setOnlineUserLogic:(id)arg1;
- (id)onlineMemberResult;
- (void)setOnlineMemberResult:(id)arg1;
- (id)invitedMicAudienceDict;
- (void)setInvitedMicAudienceDict:(id)arg1;
- (id)waitConnectAudienceSet;
- (void)setWaitConnectAudienceSet:(id)arg1;
- (id)removedAudienceSet;
- (void)setRemovedAudienceSet:(id)arg1;
- (void).cxx_destruct;
@end
