@interface CContactDB : NSObject
{
    CMMDB * m_oMMDB; // +0x8
}
- (id)init;
- (void)initDB:(id)arg1;
- (id)getContact:(id)arg1;
- (BOOL)loadContactExtInfo:(id)arg1;
- (void)getFriendAndExtTableValue:(id)arg1 fromDBContact:(id)arg2 DBContactExt:(id)arg3;
- (unsigned int)getContactCount;
- (BOOL)getContactList:(id)arg1 listType:(unsigned int)arg2 limit:(int)arg3;
- (BOOL)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)getAllUserName:(id)arg1;
- (BOOL)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)deleteContact:(id)arg1;
- (BOOL)deleteContacts:(id)arg1;
- (unsigned int)GetLastUpdateTimeOfUser:(id)arg1;
- (unsigned int)GetFriendMetaFlag:(id)arg1;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (BOOL)isFriendExtTableExist:(id)arg1;
- (void)getContactQueryProperty:(void *)arg1;
- (void).cxx_destruct;
@end

