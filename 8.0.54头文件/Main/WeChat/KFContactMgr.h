@interface KFContactMgr : MMUserService <IMMNewSessionMgrExt, IMsgExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    WCTDatabase * _db; // +0x8
    NSMutableDictionary * _dictBrandUsrName2Cacher; // +0x10
    NSMutableDictionary * _dictOpenId2ReqInfo; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)getAndUpdateKFContactIfNeed:(id)arg1 kfType:(unsigned int)arg2 brandUsrName:(id)arg3;
- (id)getBindKFContactFromLocal:(id)arg1;
- (void)updateBindKFContactToLocal:(id)arg1 bindKFContact:(id)arg2;
- (id)getLocalKFContactWithOpenId:(id)arg1;
- (void)deleteAllKfContacts:(id)arg1;
- (void)modifyHeadImgUpdateFlag:(id)arg1 isNeedUpdate:(BOOL)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getKFContactInfoFromSvr:(id)arg1 brandUsrName:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (id)pathOfKFDB;
- (id)contactCacherForBrandUsr:(id)arg1;
- (void)handleGetKFContactDefaultList:(id)arg1;
- (void)handleGetKFContactBindList:(id)arg1;
- (void)handleGetKFContactInfo:(id)arg1;
- (void)updateKFContactsToLocal:(id)arg1 brandUsrName:(id)arg2;
- (id)kfContactListFromWorkinfoList:(id)arg1 brandUsrName:(id)arg2;
- (void).cxx_destruct;
@end

