@interface MMFinderLiveMicInviteAudienceViewModel : NSObject <MMFinderLiveOnlineUserLogicDelegate>
{
    id <MMFinderLiveMicInviteAudienceViewModelDelegate> _actionDelegate; // +0x8
    NSMutableArray * _displayedUserList; // +0x10
    NSString * _currentMicConditionTitle; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    unsigned long long _lastFetchOnlineUserListTime; // +0x28
    MMFinderLiveOnlineUserLogic * _onlineUserLogic; // +0x30
    WCFinderGetLiveOnlineMemberResult * _onlineMemberResult; // +0x38
    NSDictionary * _invitedMicAudienceDict; // +0x40
    NSSet * _waitConnectAudienceSet; // +0x48
    NSSet * _removedAudienceSet; // +0x50
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)updateDisplayedUserListWithNotifyFlag:(BOOL)arg1;
- (BOOL)updateListWithInvitedMicAudienceDict:(id)arg1 waitConnectAudienceSet:(id)arg2 removedAudienceSet:(id)arg3;
- (void)fetchOnlineUserList;
- (void)tryFetchOnlineUserListAfterMicConditionChanged;
- (void)updateCurrentMicConditionTitle;
- (void)onFetchFinderOnlineUserListWithError:(id)arg1 onlineMemberResult:(id)arg2;
- (void)onGetLiveGloryList:(id)arg1 error:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)displayedUserList;
- (void)setDisplayedUserList:(id)arg1;
- (id)currentMicConditionTitle;
- (void)setCurrentMicConditionTitle:(id)arg1;
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
