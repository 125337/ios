@interface MMTemplateMsgAuthService : MMUserService <PBMessageObserverDelegate, MMTemplateMsgNotifyInfoBatchFetcherDelegate, MMTemplateMsgNotifyInfoSyncerDelegate, IContactMgrExt, MMServiceProtocol>
{
    BOOL _isScopeItemWrapFetching; // +0x8
    NSMutableArray * _pendingScopeItemWrapQueue; // +0x10
    BOOL _isNotifyEnabled; // +0x18
    MMTemplateMsgNotifyInfoBatchFetcher * _notifyInfoBatchFetcher; // +0x20
    MMTemplateMsgNotifyInfoSyncer * _notifyInfoSyncer; // +0x28
    NSMutableDictionary * _contactFlagMap; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)readAccountCacheFromFile;
- (void)writeAccountCacheToFile:(id)arg1;
- (id)readScopeCacheFromFile:(id)arg1;
- (void)writeScopeCacheToFile:(id)arg1;
- (id)readAccountCacheIfNilThenCreate;
- (id)readScopeCacheIfNilThenCreate:(id)arg1;
- (void)markAutoNotifyTemplateMsgAsReceived;
- (BOOL)hasReceivedAutoNotifyTemplateMsg;
- (BOOL)isAutoNotifyEnabled;
- (id)getAccountCacheCopy;
- (void)setAccountGlobalNotify:(BOOL)arg1;
- (void)setAccountGlobalAutoNotify:(BOOL)arg1;
- (void)cleanUpAccountListWithoutNotify;
- (void)addAccountListWithResp:(id)arg1;
- (BOOL)isNotifyItemValid:(id)arg1;
- (void)addNotifyItem:(id)arg1 toAccountList:(id)arg2;
- (id)getScopeCacheCopyForUser:(id)arg1;
- (id)getScopeItemCopyWithScopeID:(id)arg1 forUser:(id)arg2;
- (id)getScopeItemWithScopeID:(id)arg1 forUser:(id)arg2;
- (void)setScopeGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (void)setImportantNotifyNum:(unsigned int)arg1 forUser:(id)arg2;
- (void)setServiceNormalMsgNotifyStatus:(BOOL)arg1 forUser:(id)arg2;
- (BOOL)serviceNormalMsgNotifyStatusForUser:(id)arg1;
- (void)updateServiceNormalMsgNotifyStatus:(BOOL)arg1 forUser:(id)arg2;
- (void)recalculateImportantNotifyNumForUser:(id)arg1;
- (void)setFetchFailMsgItem:(id)arg1 maxValidTime:(unsigned int)arg2;
- (void)setScopeList:(id)arg1 forUser:(id)arg2 isOverWriteDescInfo:(BOOL)arg3 settingEntry:(unsigned long long)arg4;
- (void)cleanUpShowInSettingScopeListForUser:(id)arg1;
- (id)convertMsgItems2ScopeItems:(id)arg1 isShowInSetting:(BOOL)arg2 cacheMaxAge:(unsigned int)arg3;
- (void)handleFetchAccountCacheAndScopeGlobalRecv:(id)arg1;
- (void)handleUpdateAccountGlobalNotifyOrScopeGlobalRecv:(id)arg1;
- (void)fetchAccountGlobalAutoNotify;
- (BOOL)updateAccountGlobalAutoNotify:(BOOL)arg1;
- (void)fetchScopeListForUser:(id)arg1;
- (void)fetchScopeGlobalStatusForUser:(id)arg1;
- (void)handleFetchScopeList:(id)arg1;
- (BOOL)updateScopeCacheGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (BOOL)updateScopeCacheScopeList:(id)arg1 forUser:(id)arg2 scene:(unsigned int)arg3;
- (void)handleUpdateScopeItemScopeRecv:(id)arg1;
- (void)fetchScopeItemScopeRecvWithScopeID:(id)arg1 forUser:(id)arg2;
- (void)fetchScopeItemScopeRecvWithScopeID:(id)arg1 businessType:(unsigned int)arg2 forUser:(id)arg3;
- (void)fetchScopeItemScopeRecvInPendingList;
- (void)handleFetchScopeItemScopeRecv:(id)arg1;
- (void)updateScopeItem:(id)arg1 forUser:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyInfoBatchFetcher:(id)arg1 didUpdateGlobalAutoNotify:(BOOL)arg2;
- (void)notifyInfoBatchFetcher:(id)arg1 didUpdateNotifySwitchInfo:(id)arg2;
- (void)notifyInfoSyncer:(id)arg1 didUpdateGlobalAutoNotify:(BOOL)arg2;
- (void)notifyInfoSyncer:(id)arg1 didUpdateServiceNormalMsgNotifyStatus:(BOOL)arg2 forUser:(id)arg3;
- (id)filterOutHandlingMsgItem;
- (id)getMsgItemWrapWithScopeID:(id)arg1 forUser:(id)arg2;
- (BOOL)updateMsgItemWrap:(id)arg1 isHandling:(BOOL)arg2;
- (BOOL)addMsgItemWrapToQueue:(id)arg1;
- (BOOL)removeMsgItemWrapFromQueue:(id)arg1;
- (BOOL)isMsgItemValid:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (BOOL)isNotifyEnabled;
- (id)notifyInfoBatchFetcher;
- (void)setNotifyInfoBatchFetcher:(id)arg1;
- (id)notifyInfoSyncer;
- (void)setNotifyInfoSyncer:(id)arg1;
- (id)contactFlagMap;
- (void)setContactFlagMap:(id)arg1;
- (void).cxx_destruct;
@end
