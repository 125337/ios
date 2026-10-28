@interface CGroupDB : NSObject
{
    CMMDB * m_oMMDB; // +0x8
}
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)AddGroupMember:(id)arg1 withMemberList:(id)arg2;
- (BOOL)AddGroupMember:(id)arg1 withMemberList:(id)arg2 needReload:(BOOL)arg3;
- (BOOL)DeleteGroupMember:(id)arg1 withMemberList:(id)arg2;
- (BOOL)SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (BOOL)QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (id)GetGroupMember:(id)arg1;
- (BOOL)DeleteGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (BOOL)AddGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (id)GetMMDB;
- (BOOL)isUserName:(id)arg1 ExistInList:(id)arg2;
- (void).cxx_destruct;
@end
