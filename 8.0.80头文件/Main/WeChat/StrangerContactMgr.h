@interface StrangerContactMgr : MMUserService <IContactMgrExt, IBrandAttrMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL m_bMemCacheNeedReload; // +0x8
    NSMutableDictionary * m_dicContacts; // +0x10
    NSMutableDictionary * m_dicLastAccessTime; // +0x18
    NSMutableDictionary * m_lastUpdateTime; // +0x20
    NSMutableArray * m_arrQueue; // +0x28
    NSMutableDictionary * m_dicGetingContacts; // +0x30
    NSMutableDictionary * m_dicContactScene; // +0x38
    NSMutableArray * m_arrUploading; // +0x40
    unsigned int m_uiCurEventID; // +0x48
    StrangerContactHeadImageData * m_headImageInfoData; // +0x50
}
- (id)p_getStrangerContactHeadImageDataFilePath;
- (void)saveStrangerContactHeadImageToDataFileInternal;
- (void)loadStrangerContactHeadImageInternal;
- (void)recordDownloadSuccessHeadImageUrl:(id)arg1 url:(id)arg2;
- (id)getDownloadSuccessHeadImageUrl:(id)arg1;
- (id)pathForOldData;
- (id)pathForData;
- (id)pathForOldTimeData;
- (id)pathForTimeData;
- (void)tryLoadData;
- (void)ReduceCache;
- (void)saveData;
- (void)clearMemoryCache;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (BOOL)IsInQueue:(id)arg1;
- (void)SetAccessTime:(id)arg1;
- (id)getContactByName:(id)arg1;
- (void)addContact:(id)arg1;
- (void)updateContact:(id)arg1 withScene:(unsigned int)arg2;
- (void)updateContactFromContact:(id)arg1 withScene:(unsigned int)arg2;
- (id)GetUsrArray;
- (void)CheckQueue;
- (BOOL)checkIfForbiddenGetContact:(id)arg1;
- (double)updateLimitDuration;
- (BOOL)InternalUpdateContact:(id)arg1;
- (void)handleNewContact:(id)arg1;
- (BOOL)hasBrandIconUrlChange:(id)arg1 andModContact:(id)arg2;
- (BOOL)isBrandModContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onBrandContactModified:(id)arg1 withAttrChanged:(id)arg2;
- (void).cxx_destruct;
@end
