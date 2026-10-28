@interface WXGRoamMigrationPlatform : NSObject <MigrationPlatformBase, IChatLogDataMgrExt, PBMessageObserverDelegate, FlutterMigrateUICallback>
{
    MigrationPlatformCallback * _migrationPlatformCb; // +0x8
    NSObject<OS_dispatch_semaphore> * _chatLogSemaphore; // +0x10
    NSObject<OS_dispatch_queue> * _bridgeQueue; // +0x18
    unsigned long long _offlineQrcodeTaskId; // +0x20
    NSString * _lastQrCode; // +0x28
}
+ (id)sharedInstance;
- (void)setCallback:(id)arg1;
- (void)doOfflineCgiAsync:(unsigned long long)arg1 funcId:(int)arg2 uri:(id)arg3 reqBuf:(id)arg4 extra:(id)arg5;
- (void)getAllConversationForUserNameAsync:(unsigned long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3 excludeMedia:(BOOL)arg4 userName:(id)arg5;
- (void)getAllConversationAsync:(unsigned long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3 excludeMedia:(BOOL)arg4;
- (void)getAllConversationAsyncOld:(unsigned long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3 excludeMedia:(BOOL)arg4;
- (void)getPcMinVersionAsync:(unsigned long long)arg1;
- (BOOL)isPomEnable;
- (BOOL)isLogout;
- (void)notifyToPc:(int)arg1 args:(id)arg2;
- (id)getLastQrCode;
- (id)commonCallPlatform:(id)arg1 rpcReq:(id)arg2;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (id)getBridgeQueue;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleResp:(id)arg1;
- (void)onFlutterMigrateUIDidAppear;
- (void)onFlutterMigrateUIDidDisappear;
- (id)migrationPlatformCb;
- (void)setMigrationPlatformCb:(id)arg1;
- (id)chatLogSemaphore;
- (void)setChatLogSemaphore:(id)arg1;
- (id)bridgeQueue;
- (void)setBridgeQueue:(id)arg1;
- (unsigned long long)offlineQrcodeTaskId;
- (void)setOfflineQrcodeTaskId:(unsigned long long)arg1;
- (id)lastQrCode;
- (void)setLastQrCode:(id)arg1;
- (void).cxx_destruct;
@end
