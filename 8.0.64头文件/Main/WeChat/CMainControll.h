@interface CMainControll : NSObject <INewSyncExt, MMServiceProtocol, NotifyFromEventDelegate, NetworkStatusDelegate, MMKernelExt, PBMessageObserverDelegate>
{
    CMMDB * m_oMMDB; // +0x8
    NSString * m_nsDocPath; // +0x10
    MMTimer * m_oTimerCheckEvent; // +0x18
    id <NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl; // +0x20
    NSRecursiveLock * m_oMsgQueLock; // +0x28
    NSMutableArray * m_arrMessageList; // +0x30
    NSString * m_nsLastToken; // +0x38
    unsigned int m_uiLastNetworkStatus; // +0x40
    NSDate * m_dtLastSyncForAuth; // +0x48
    NSDate * m_dtLastGetUpdateInfo; // +0x50
    BOOL m_bStop; // +0x58
}
- (id)init;
- (void)dealloc;
- (void)LoadLastSvrID;
- (void)Start:(id)arg1;
- (void)Stop;
- (void)StopAllEvent;
- (void)TimerCheckEvent;
- (void)CreateSyncTimer;
- (BOOL)IsNewUser;
- (unsigned int)CheckVersion;
- (void)SetVersionInited;
- (void)RaiseEvent:(unsigned int)arg1 MessageID:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)onNewSyncIPXX:(id)arg1;
- (void)handleIPXXMessage:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)SpeedyNotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)speedyDispacthMessage:(id)arg1;
- (void)HandleNewSyncPush:(id)arg1;
- (void)onKickQuit;
- (void)CheckUpdate:(id)arg1;
- (void)HandleRespForGetUpdateInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onLoginOK;
- (void)TimerSync;
- (id)m_oMMDB;
- (void)setM_oMMDB:(id)arg1;
- (void).cxx_destruct;
@end
