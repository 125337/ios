@interface WXGChatSyncLogic : NSObject <ICdnComMgrExt, PBMessageObserverDelegate, WXGChatSyncDataPackerDelegate, IOnlineClientMgrExt>
{
    NSString * m_uploadingFileName; // +0x8
    NSString * m_uploadingFilePath; // +0x10
    BOOL m_startSync; // +0x18
    long long m_sessionListCount; // +0x20
    long long m_sessionInfoCount; // +0x28
    long long m_msgCount; // +0x30
    long long m_timeLimit; // +0x38
    NSArray * m_msgIntervalArray; // +0x40
    NSArray * m_msgLimitArray; // +0x48
    NSString * m_getMoreIdentifier; // +0x50
    unsigned long long m_getMoreMsgLimit; // +0x58
    unsigned int m_dataSize; // +0x60
    NSDate * m_startSyncDate; // +0x68
    NSDate * m_startPack; // +0x70
    NSString * m_pemPublicKey; // +0x78
    CdnUploadTaskInfo * m_currentUploadInfo; // +0x80
    BOOL m_bPartnerDeviceLogin; // +0x88
    unsigned int m_deviceType; // +0x8c
    NSString * m_currentSyncType; // +0x90
    NSString * _deviceContext; // +0x98
    WXGChatSyncDataPacker * _dataPacker; // +0xa0
}
+ (id)unsignedcharToHexString:(char *)arg1 withSize:(unsigned int)arg2;
- (id)init;
- (long long)getSessionListCount;
- (long long)getSessionInfoCount;
- (long long)getTimeLimit;
- (void)p_markStartSync;
- (void)p_markStopSync;
- (void)stopSync;
- (void)startSyncWithType:(unsigned long long)arg1 withPemKey:(id)arg2;
- (void)trySendAppMessage;
- (void)onLoginWeb;
- (void)onLogoutWeb;
- (void)startSleepSyncWithExt:(id)arg1 withPemKey:(id)arg2;
- (void)startGetMoreSynceWithExt:(id)arg1 withPemKey:(id)arg2;
- (void)onChatSyncDataPackFinishWithFilePath:(id)arg1 withMsgCount:(unsigned long long)arg2;
- (void)startUploadDataToCDNWithFilePath:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)autoSendAppMessage;
- (BOOL)sendAppMessage;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportStartSync;
- (void)reportSyncSuccess;
- (void)reportCDNFailed;
- (void)reportAppMsgFailed;
- (id)deviceContext;
- (void)setDeviceContext:(id)arg1;
- (id)dataPacker;
- (void)setDataPacker:(id)arg1;
- (void).cxx_destruct;
@end
