@interface MMFinderLiveOnlineUserLogic : MMLiveOnlineUserLogic <WCFinderLiveExt>
{
    id <MMFinderLiveOnlineUserLogicDelegate> logicDelegate; // +0x8
    NSMutableDictionary * _userCommentDisableDict; // +0x10
    NSString * _finderUserName; // +0x18
    unsigned long long _filterScene; // +0x20
}
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)fetchOnlineUserList;
- (void)fetchKtvPlayMemberList;
- (void)updateFilterScene:(unsigned long long)arg1;
- (id)finderTaskId;
- (id)liveTask;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 boardType:(unsigned int)arg3 onlineMemberResult:(id)arg4;
- (void)onFinderLiveKtvGetPlayMember:(id)arg1 taskId:(id)arg2 playMemberResult:(id)arg3;
- (id)userCommentDisableDict;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (void)setUserCommentDisableDict:(id)arg1;
- (id)finderUserName;
- (unsigned long long)filterScene;
- (void)setFilterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
