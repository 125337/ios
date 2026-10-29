@interface CNetworkStatusMgr : MMUserService <INewSyncExt, MMServiceProtocol, MessageObserverDelegate, CNetworkStatusExt, IEmoticonDownloadExt, MMKernelExt, PBMessageObserverDelegate, INetworkStatusReportWithGPSExt>
{
    BOOL m_bConnecting; // +0x8
    BOOL m_bConnected; // +0x9
    BOOL m_bAllStatusServerFailed; // +0xa
    BOOL m_bLongLinkStatusServerFailed; // +0xb
    BOOL m_bAllStatusServerConnected; // +0xc
    BOOL m_bGettingData; // +0xd
    BOOL m_bReadOnceAgain; // +0xe
    NSMutableArray * m_messsageIdToListen; // +0x10
    BOOL m_bIsNetworkReachable; // +0x18
    BOOL m_bIsServerReachable; // +0x19
    unsigned int m_eNetworkStatusType; // +0x1c
    BOOL m_bIsNetworkWeak; // +0x20
    NSDate * m_dtLastReport; // +0x28
    ReportInfo * m_oReportInfo; // +0x30
    MMTimer * m_oReportTimer; // +0x38
    NSString * m_nsLastWifiBssid; // +0x40
    NSString * m_nsCacheWifiBssid; // +0x48
    NSString * m_nsCacheWifiSsid; // +0x50
    BOOL m_isCheckingNetwork; // +0x58
    BOOL m_isBaseNetworkOK; // +0x59
    BOOL m_isWechatNetworkOK; // +0x5a
    BOOL m_isWechatLongLinkOK; // +0x5b
    unsigned long long m_beginGettingDataTime; // +0x60
}
- (BOOL)isDuringSync;
- (void)translateStatus;
- (BOOL)isServerReachable;
- (BOOL)isGettingData;
- (void)checkCallStatusChangedExt;
- (void)handleNetworkStatusChange:(id)arg1;
- (void)handleSyncBegin;
- (void)handleSyncEnd;
- (void)initMessageIdToListen;
- (void)unListenMessageId;
- (void)regExt;
- (void)unregExt;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onNewSyncBegin;
- (void)onNewSyncOplogFail;
- (void)onNewSyncOplogConnectFail;
- (void)onNewSyncEnd;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (id)getReportStringWithScene:(unsigned int)arg1;
- (id)getGpsReportString:(id)arg1;
- (unsigned int)getNetworkStatusType;
- (void)setReadToGettingData;
- (void)ClearIDCache;
- (void)UpdateWifiInfo:(unsigned int)arg1;
- (void)OnUpdateWifiInfo:(BOOL)arg1 Scene:(unsigned int)arg2;
- (BOOL)isConnectedTestingEnv;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)LoadReportInfo;
- (void)SaveReportInfo;
- (void)OnNetworkStatusReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)onAuthOK;
- (void)CheckBG2FG;
- (void)CheckReportNetworkInfo:(unsigned int)arg1;
- (id)MakeSafeReportString:(id)arg1;
- (void)InternalReportNetworkInfo:(id)arg1;
- (void)InternalReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isNetworkChecking;
- (void)startNetworkChecking;
- (void)onNetworkCheckResult:(BOOL)arg1 stage:(unsigned int)arg2 allEnds:(BOOL)arg3 kvString:(id)arg4;
- (BOOL)isNetworkWeak;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (void).cxx_destruct;
@end

