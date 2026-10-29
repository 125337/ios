@interface WXGChatSyncClientMgr : MMUserService <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate, MMKernelExt, WXGImportMessageHelperDelegate, MMServiceProtocol>
{
    NSString * _lastDownloadFileName; // +0x8
    BOOL _isAuthFinish; // +0x10
    BOOL _isManualAuth; // +0x11
    BOOL _isMainDeviceSupportAfterSleep; // +0x12
    unsigned int _timeIntervalFromLastSucceedChatSync; // +0x14
    unsigned int _timeIntervalFromLastSendChatSyncRequest; // +0x18
    unsigned int _timeLimitPackageMsg; // +0x1c
}
+ (void)hexStringToUnsignedChar:(id)arg1 output:(char * *)arg2 outputLength:(unsigned int *)arg3;
- (void)onServiceInit;
- (void)dealloc;
- (void)onRevChatSyncRequest:(id)arg1 MsgWrap:(id)arg2;
- (void)parseAppMsg:(id)arg1;
- (id)getRealSyncDataDirFromUnzipDir:(id)arg1;
- (void)importMsgFromSyncFile:(id)arg1;
- (BOOL)checkRequestAfterSleepFrequent;
- (void)requestChatSyncAfterSleep;
- (void)sendChatSyncNewXmlWithAction:(id)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3 sessionName:(id)arg4 identifier:(id)arg5 limit:(unsigned int)arg6;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)OnCdnDownload:(id)arg1;
- (BOOL)filterMsgBeforeAddToDB:(id)arg1;
- (id)getMMKV;
- (void)saveStatus;
- (void)loadStatus;
- (id)decryptOriginAesKeyFromAppMsg:(id)arg1 withPrivatekey:(id)arg2;
- (void).cxx_destruct;
@end

