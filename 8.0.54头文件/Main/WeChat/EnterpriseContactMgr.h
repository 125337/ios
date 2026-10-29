@interface EnterpriseContactMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IContactMgrExt, IEnterpriseMsgExt, IMsgExt>
{
    NSMutableDictionary * _dicContactDB; // +0x8
    NSMutableDictionary * _contactCache; // +0x10
    NSMutableDictionary * _myContactCache; // +0x18
    NSMutableDictionary * _dicUserId2BrandName; // +0x20
    NSMutableDictionary * _dicContactLastInQueueTime; // +0x28
    NSMutableArray * _aryGetUserContactRunningQueue; // +0x30
    NSMutableArray * _aryGetUserContactWatingQueue; // +0x38
    NSMutableArray * _aryGetBizChatInfoRunningQueue; // +0x40
    NSMutableArray * _aryGetBizChatInfoWatingQueue; // +0x48
    NSMutableArray * _deleteQueue; // +0x50
    BOOL _isDeletingContact; // +0x58
    NSObject<OS_dispatch_queue> * m_dispatchQueue; // +0x60
}
- (void)dealloc;
- (void)onServiceInit;
- (id)getDispatchQueue;
- (id)dbPathForBrandUserName:(id)arg1;
- (id)getEnterpriseDBWithBrandUserName:(id)arg1;
- (void)deleteEnterpriseDBWithBrandUserName:(id)arg1;
- (BOOL)setContact:(id)arg1 draft:(id)arg2;
- (BOOL)updateFavContactList:(id)arg1 brand:(id)arg2;
- (void)batchUpdateContactToDB:(id)arg1 brand:(id)arg2;
- (void)updateContactToDB:(id)arg1;
- (void)updateContactUserFlagToCache:(id)arg1 brand:(id)arg2 userFlag:(unsigned int)arg3;
- (void)updateContactUserFlagToDB:(id)arg1 brand:(id)arg2 userFlag:(unsigned int)arg3;
- (void)updateContactDisplayNameToDB:(id)arg1 brand:(id)arg2 displayName:(id)arg3;
- (void)modifyEnterpriseHeadImageUpdateFlag:(id)arg1 isNeedUpdate:(BOOL)arg2;
- (id)getOrAddContactByUserName:(id)arg1 displayName:(id)arg2 brand:(id)arg3 toDB:(BOOL)arg4 inDB:(BOOL *)arg5;
- (id)getOrAddContactByUserName:(id)arg1 brand:(id)arg2 toDB:(BOOL)arg3 inDB:(BOOL *)arg4;
- (id)getContactByUserName:(id)arg1 brand:(id)arg2;
- (id)getContactByUserName:(id)arg1;
- (id)getMyContact:(id)arg1;
- (id)getFavContactListByBrand:(id)arg1;
- (BOOL)updateEnterpriseContactFromSvr:(id)arg1;
- (BOOL)batchUpdateEnterpriseContactFromSvrIfNeed:(id)arg1 brand:(id)arg2;
- (BOOL)updateEnterpriseContactFromSvrIfNeed:(id)arg1 brand:(id)arg2 contactVer:(unsigned int)arg3 needDelay:(unsigned int)arg4;
- (BOOL)updateEnterpriseContactFromSvrIfNeed:(id)arg1 brand:(id)arg2 contactVer:(unsigned int)arg3;
- (void)updateMyContactFromSvrIfNeed:(id)arg1;
- (void)updateMyContactUserFlagToSvr:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (void)updateMyContactFromSvr:(id)arg1;
- (void)batchUpdateChatInfoFromSvr:(id)arg1;
- (void)batchUpdateUserInfoFromSvr:(id)arg1;
- (void)updateFavBizChatListFromSvr:(id)arg1;
- (BOOL)checkMyContactValid:(id)arg1;
- (BOOL)checkContactValid:(id)arg1;
- (void)deleteAllContactsForBrand:(id)arg1;
- (void)deleteContact:(id)arg1 brand:(id)arg2;
- (BOOL)deleteAtUserList:(id)arg1;
- (BOOL)addContact:(id)arg1 AtUser:(id)arg2;
- (void)onCallModifyContactExtension:(id)arg1;
- (void)onCallModifyBatchContactExtension:(id)arg1;
- (void)onCallModifyBatchContactExtensionWithOneContact:(id)arg1;
- (void)onCallModifyContactDraftExtension:(id)arg1;
- (void)saveDeleteQueue;
- (void)restoreDeleteQueue;
- (void)addDeleteTask:(id)arg1;
- (void)checkDeleteQueue;
- (void)doDeleteAllContactsForBrand:(id)arg1;
- (BOOL)hasInGetBizChatInfoRunningQueue:(id)arg1;
- (BOOL)hasInGetBizChatInfoWaitingQueue:(id)arg1;
- (void)checkGetBizChatInfoWaitingQueue;
- (void)addGetChatInfoQueueWithoutCheck:(id)arg1 brandUserName:(id)arg2;
- (void)addGetChatInfoQueue:(id)arg1 brandUserName:(id)arg2;
- (void)batchAddGetChatInfoQueue:(id)arg1 brandName:(id)arg2;
- (void)clearGetChatInfoRunningQueue;
- (BOOL)hasInGetUserContactRunningQueue:(id)arg1;
- (BOOL)hasInGetUserContactWaitingQueue:(id)arg1;
- (void)checkGetUserContactInfoWaitingQueue;
- (void)batchAddGetUserInfoQueue:(id)arg1 brandName:(id)arg2;
- (void)clearGetUserContactInfoRunningQueue;
- (void)setBrandFlagToSvr:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (void)handleSetBrandFlagToSvr:(id)arg1;
- (void)getBizChatMyUserInfoFromSvr:(id)arg1;
- (void)handleGetBizChatMyUserInfoFromSvr:(id)arg1;
- (void)getBizChatInfoListFromSvr:(id)arg1;
- (void)handleGetBizChatInfoListFromSvr:(id)arg1;
- (void)getBizChatUserInfoListFromSvr:(id)arg1;
- (void)handleGetBizChatUserInfoListFromSvr:(id)arg1;
- (void)getFavBizChatListFromSvr:(id)arg1;
- (void)handleGetFavBizChatListFromSvr:(id)arg1;
- (void)internalUpdateMyContactWithSvrResp:(id)arg1 userName:(id)arg2 chatUser:(id)arg3;
- (void)internalBatchUpdateContactDB:(id)arg1;
- (void)handleChatRoomContact:(id)arg1 needUpdateDB:(BOOL)arg2;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void).cxx_destruct;
@end

