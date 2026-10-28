@interface WAContactMgr : MMUserService <MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _worker_queue; // +0x8
    NSMutableDictionary * _dicContactCache; // +0x10
    NSMutableDictionary * _dicAppid2UsernameCache; // +0x18
    NSMutableArray * _arrSingleAttrSyncWait; // +0x20
    NSMutableArray * _arrSingleAttrSyncRequest; // +0x28
    unsigned int _singleAttrSyncRequestInterval; // +0x30
    unsigned int _singleAttrSyncRequestIntervalWhenHitInvalidateContactCmd; // +0x34
    NSMutableArray * _arrBatchAttrSyncWait; // +0x38
    NSMutableSet * _setBatchAttrSyncRequest; // +0x40
    unsigned int _batchAttrSyncRequestInterval; // +0x48
}
+ (BOOL)isKeyValidWithKey:(id)arg1 keyType:(unsigned long long)arg2;
- (id)getLocalBackUpContactWithUsername:(id)arg1;
- (id)getLocalBackUpContactWithAppid:(id)arg1;
- (BOOL)saveLocalBackUpContact:(id)arg1;
- (BOOL)deleteLocalBackUpContactWithUsername:(id)arg1;
- (id)getCContactWithWeAppUserName:(id)arg1;
- (id)getAllCContactOfWeApp;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2;
- (id)getWeAppContact:(id)arg1;
- (id)getWeAppContactWithUsrName:(id)arg1 appId:(id)arg2;
- (id)getAllWeAppContact;
- (id)getAllWeAppUserName;
- (void)deleteWeAppContactList:(id)arg1;
- (void)updateWeAppContactWithKey:(id)arg1 updateType:(unsigned long long)arg2;
- (void)updateWeAppContactWithKey:(id)arg1 updateType:(unsigned long long)arg2 isForce:(BOOL)arg3 requestSource:(id)arg4;
- (void)updateWeAppContact:(id)arg1;
- (void)updateWeAppContact:(id)arg1 isForce:(BOOL)arg2;
- (void)updateWeAppContactWithAppid:(id)arg1;
- (void)updateWeAppContactWithAppid:(id)arg1 isForce:(BOOL)arg2;
- (void)batchUpdateWeAppContact:(id)arg1;
- (void)batchUpdateWeAppContactWithArrAppid:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)modifyWxAppOptWithBitMask:(unsigned int)arg1 bitValue:(unsigned int)arg2 userName:(id)arg3;
- (BOOL)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (BOOL)modifyLastLaunchTime:(unsigned int)arg1 withUserName:(id)arg2;
- (void)updateContactCacheAndCallModifyContact:(id)arg1;
- (BOOL)updateContactListToDBAndCache:(id)arg1;
- (void)notifyContactListModify:(id)arg1;
- (void)mainthread_callExtensionModifyContact:(id)arg1;
- (void)mainthread_callExtensionModifyContactList:(id)arg1;
- (void)mainthread_callExtensionDeleteContact:(id)arg1;
- (id)getContactFromCacheWithKey:(id)arg1 type:(unsigned long long)arg2;
- (id)getContactFromCache:(id)arg1;
- (id)getContactFromCacheWithAppid:(id)arg1;
- (void)setContactListToCache:(id)arg1;
- (void)removeContactListInCache:(id)arg1;
- (void)reloadOnConfigUpdated;
- (void)loadWxaAttrSyncRequestInterval;
- (id)getNewContactWithUserName:(id)arg1 bizAttr:(id)arg2;
- (void)updateContact:(id)arg1 withBizAttr:(id)arg2;
- (void)mainThread_updateWeAppContact:(id)arg1;
- (void)markWaitTaskBeForcedUpdated:(id)arg1;
- (BOOL)checkIsInSingleRequestingQueue:(id)arg1;
- (BOOL)checkIsInSingleWaitingQueue:(id)arg1;
- (BOOL)checkIsInQueue:(id)arg1 withTask:(id)arg2;
- (void)checkWxaAttrSyncWaitQueue;
- (void)removeUpdateTask:(id)arg1;
- (BOOL)isContactInUpdateInterval:(id)arg1;
- (BOOL)isUsernameInContactUpdateInterval:(id)arg1;
- (BOOL)isBufferInUpdateInterval:(id)arg1;
- (BOOL)isBufferInBatchUpdateInterval:(id)arg1;
- (BOOL)isBufferInUpdateIntervalByPrefetchInvalidateContact:(id)arg1;
- (BOOL)isUsernameHasHigherRemoteContactVersion:(id)arg1 getReportId:(unsigned int *)arg2;
- (id)getLocalBizAttrSyncBufferForUsername:(id)arg1;
- (id)getDBBizAttrSyncBufferForUsername:(id)arg1;
- (BOOL)requestWxaAttrSync:(id)arg1;
- (void)onResponseWxaAttrSync:(id)arg1;
- (void)reportResponse:(id)arg1;
- (void)executeIssueContactCmd:(id)arg1;
- (BOOL)checkResponseVersion:(id)arg1 username:(id)arg2 report:(unsigned int)arg3;
- (void)processWxaAttrSyncResponse:(id)arg1 completeHandlerOnMainThread:(id /* block */)arg2;
- (void)workThread_processWxaAttrSyncResponse:(id)arg1 withUserName:(id)arg2 requestBuffer:(id)arg3 completeHandlerOnMainThread:(id /* block */)arg4;
- (void)setHeadImageStatusForNewContact:(id)arg1 withOldContact:(id)arg2;
- (void)mainThread_batchUpdateWeAppContactWithArrAppid:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)mainThread_batchUpdateWeAppContact:(id)arg1;
- (void)checkBatchWxaAttrSyncWaitQueue;
- (BOOL)requestBatchWxaAttrSync:(id)arg1 versionList:(id)arg2;
- (void)onResponseBatchWxaAttrSync:(id)arg1;
- (void)processBatchWxaAttrSyncWithRequestedBufferDic:(id)arg1 response:(id)arg2 completeHandlerOnMainThread:(id /* block */)arg3;
- (void)workThread_processBatchWxaAttrSyncWithRequestedBufferDic:(id)arg1 response:(id)arg2 completeHandlerOnMainThread:(id /* block */)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)getUsernameForAppid:(id)arg1;
- (void).cxx_destruct;
@end
