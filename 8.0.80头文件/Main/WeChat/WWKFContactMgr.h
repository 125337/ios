@interface WWKFContactMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _userName2ContactMap; // +0x8
    NSMutableDictionary * _appId2ContactsMap; // +0x10
    MemoryMappedKV * _slotKv; // +0x18
    WCTDatabase * _db; // +0x20
    WCTTable * _tableContact; // +0x28
}
+ (id)wwkfKeyUrlForKfUrl:(id)arg1;
- (void)callDeallocInCatagoryDataBase;
- (void)openDB;
- (void)setupTable;
- (void)closeDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void)registerRecoverNotification;
- (void)unregisterRecoverNotification;
- (id)wwkfContactDBWillRecoverNotificationName;
- (id)db_getAllContacts;
- (id)db_getContactWithUserName:(id)arg1;
- (id)db_getContactWithAppId:(id)arg1;
- (BOOL)db_insertOrUpdateContact:(id)arg1;
- (BOOL)db_deleteContactWithUserName:(id)arg1;
- (BOOL)db_modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (id)wwkfContactWithDBContact:(id)arg1;
- (id)dbContactWithWWKFContact:(id)arg1;
- (id)pathOfWeWorkKFDB;
- (id)getCContactWithWWKFUserName:(id)arg1;
- (id)getAllCContactOfWWKF;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (id)getContactWithUserName:(id)arg1;
- (id)getContactsWithAppId:(id)arg1;
- (id)getAllWWKFContacts;
- (id)__getContactFromCacheWithUserName:(id)arg1;
- (id)__getContactsFromCachetWithAppId:(id)arg1;
- (void)setContactToLocal:(id)arg1;
- (BOOL)updateContactToDBAndCache:(id)arg1;
- (BOOL)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (BOOL)deleteContactFromDBAndCache:(id)arg1;
- (BOOL)setWWKFContact:(id)arg1 typeBit:(unsigned int)arg2 set:(BOOL)arg3 localSet:(BOOL)arg4;
- (unsigned int)addOplogWithWWKFContact:(id)arg1 mute:(BOOL)arg2;
- (unsigned int)addOplogType:(unsigned int)arg1 Buffer:(id)arg2;
- (void)tryDeleteInvalidWWKFContacts;
- (void)mainThread_updateContactCacheAndCallModifyContactWithContact:(id)arg1;
- (void)mainThread_updateContactCacheAndCallModifyContact:(id)arg1;
- (void)mainThread_deleteContactCacheAndCallModifyContactWithContact:(id)arg1;
- (void)mainThread_callModifyContactHeadURLWithContact:(id)arg1;
- (void)openSlotKV;
- (id)cacheContactUserNameForKFUrl:(id)arg1;
- (BOOL)setCacheContactUserName:(id)arg1 foKFUrl:(id)arg2;
- (unsigned int)lastDeleteInvalidContactTimeStamp;
- (void)updateLastDeleteInvalidContactTimeStamp;
- (unsigned int)deleteInvalidContactDefautltInterval;
- (id)userName2ContactMap;
- (void)setUserName2ContactMap:(id)arg1;
- (id)appId2ContactsMap;
- (void)setAppId2ContactsMap:(id)arg1;
- (id)slotKv;
- (void)setSlotKv:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableContact;
- (void)setTableContact:(id)arg1;
- (void).cxx_destruct;
@end
