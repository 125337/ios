@interface WCSmartGroupCore : NSObject
{
    NSMutableArray * _arrSourceGroup; // +0x8
    NSMutableSet * _setMMUsername; // +0x10
}
- (void)asyncGetRelatedChatRoomWithInfo:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)taskRecursive:(id)arg1 restrictMemberList:(id)arg2 mmUsrSet:(id)arg3 runInfo:(id)arg4 completeBlock:(id /* block */)arg5;
- (id)getSearchRecommendGroups:(id)arg1 restrictMemberList:(id)arg2;
- (id)getNewSearchRecommendGroups:(id)arg1 restrictMemberList:(id)arg2 searchRecommendGroupDiff:(unsigned int)arg3;
- (void)dispatchMainFinish:(id)arg1 runInfo:(id)arg2 completeBlock:(id /* block */)arg3;
- (id)getAllGroup;
- (id)getAllMMSingleContactUsername;
- (id)searchGroupContacts:(id)arg1 strictByGroupMember:(id)arg2;
- (BOOL)strictMemberMatch:(id)arg1 withMember:(id)arg2;
- (id)findTopUsrsInGroups:(id)arg1 mmUsrSet:(id)arg2 runInfo:(id)arg3;
- (void)addUsr:(id)arg1 runInfo:(id)arg2 groupContact:(id)arg3 toDic:(id)arg4 andScore:(id)arg5;
- (id)getRelatedChatRoom:(id)arg1 containMembers:(id)arg2;
- (id)arrSourceGroup;
- (void)setArrSourceGroup:(id)arg1;
- (id)setMMUsername;
- (void)setSetMMUsername:(id)arg1;
- (void).cxx_destruct;
@end
