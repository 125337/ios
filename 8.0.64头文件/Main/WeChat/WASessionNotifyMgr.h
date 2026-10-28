@interface WASessionNotifyMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol>
{
    WASessionNotifyInfo * _notifyInfo; // +0x8
}
+ (id)loadNotifyInfoFromFile;
+ (void)saveToNotifyInfoToFile:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getGlobalSessionNotifyOpenStatus;
- (id)getSessionNotifyCloseList;
- (void)requestSessionNotifyInfo;
- (void)setGlobalSessionNotifyOpenStatus:(id)arg1 openUserNameList:(id)arg2;
- (void)setSessionNotifyOpen:(id)arg1;
- (void)setSessionNotifyClose:(id)arg1;
- (void)callExtensionOnSessionNotifyUpdate;
- (void)requestGlobalSessionNotifyOpenStatus;
- (void)requestSessionNotifyWithType:(unsigned int)arg1;
- (void)onResponseSessionNotify:(id)arg1 withRequest:(id)arg2;
- (void)requestSwitchSessionNotifyWithGlobalOpenStatus:(id)arg1 closeUserNameList:(id)arg2 openUserNameList:(id)arg3;
- (void)onResponseSwitchSessionNotify:(id)arg1 withRequest:(id)arg2;
- (void)saveNotifyOptionToMemoryAndFile:(id)arg1 withRequest:(id)arg2;
- (id)generateNotifyOptionItemListAndSyncToMemory:(id)arg1 closeUserNameList:(id)arg2 openUserNameList:(id)arg3;
- (void)syncSwitchRequestChangeToFile:(id)arg1;
- (void)rollbackSwitchRequestChangeFromFileToMemory:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onManulLoginOK;
- (void)updateSessionHolderNotify:(id)arg1;
- (void)updateSessionNotifyToClose:(id)arg1;
- (void)updateSessionNotifyToOpen:(id)arg1;
- (void)updateSessionNotifyIsOpen:(BOOL)arg1 userNameList:(id)arg2;
- (void).cxx_destruct;
@end
