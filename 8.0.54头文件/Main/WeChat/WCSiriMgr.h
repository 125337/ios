@interface WCSiriMgr : MMUserService <MMServiceProtocol, MMKernelExt, PBMessageObserverDelegate, IContactMgrExt, INetworkStatusMgrExt>
{
    NSObject<OS_dispatch_queue> * m_updateContactQueue; // +0x8
    BOOL _needRefreshSessionKey; // +0x10
    BOOL _isRefreshingSessionKey; // +0x11
    BOOL _isSirikitAvaiable; // +0x12
    MemoryMappedKV * _mappedKV; // +0x18
    NSMutableArray * _arrContactsToBeEncoded; // +0x20
}
+ (id)getSiriDeviceId;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onPreQuit;
- (BOOL)isSiriKitAvailable;
- (id)getQueue;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onAuthOK;
- (void)getExtensionKeyForceRefresh;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetIosExtensionKeyResp:(id)arg1 Event:(unsigned int)arg2;
- (id)mappedKV;
- (BOOL)isSessionKeyCached;
- (void)checkAndRefreshSessionKeyIfNeed;
- (void)updateApplicationContextIfCould;
- (void)portContactsDataToContainerFolderWithSession:(id)arg1;
- (BOOL)shouldHandleContact:(id)arg1;
- (id)convertContactToSiriIfNeed:(id)arg1;
- (void)addVocabularyFor:(id)arg1 toVocabularys:(id)arg2;
- (BOOL)IsEnChar:(unsigned short)arg1;
- (id)vocabularyFromContactName:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onNewContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)checkEncodeContacts:(BOOL)arg1;
- (void)updateVocabulary:(id)arg1;
- (BOOL)needRefreshSessionKey;
- (void)setNeedRefreshSessionKey:(BOOL)arg1;
- (BOOL)isRefreshingSessionKey;
- (void)setIsRefreshingSessionKey:(BOOL)arg1;
- (BOOL)isSirikitAvaiable;
- (void)setIsSirikitAvaiable:(BOOL)arg1;
- (void)setMappedKV:(id)arg1;
- (id)arrContactsToBeEncoded;
- (void)setArrContactsToBeEncoded:(id)arg1;
- (void).cxx_destruct;
@end

