@interface EmoticonCameraRecoverMgr : MMUserService <EmoticonRecoverLogicObjectDelegate, IMsgExt, CNetworkStatusExt, MMKernelExt, EmoticonServerNotifyTaskDelegate, MMServiceProtocol, EmoticonRecover>
{
    BOOL _m_hasOnceStartRecover; // +0x8
    BOOL _m_hasNotStartRecoverTaskInList; // +0x9
    unsigned int _m_manageViewRecentUpdateTime; // +0xc
    EmoticonRecoverLogicObject * _m_recoverLogicObject; // +0x10
    NSMutableArray * _m_notifyTaskList; // +0x18
}
- (id)init;
- (BOOL)recoverEmoticonFromServer;
- (void)recoverEmoticonFromManageView;
- (BOOL)isRecoveringEmoticon;
- (BOOL)isRecoveringEmoticonComplete;
- (BOOL)isRecoveringStatusSafeForOperation;
- (BOOL)isFirstRecoverAfterAuth;
- (void)tryRecoverAnotherPart;
- (void)checkRecoverEmoticonFromServer;
- (void)setNeedsRecoverAndNeedClearData:(BOOL)arg1;
- (BOOL)needRecover;
- (void)onManulLoginOK;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)serverNotifyTaskCanResumeLogic:(id)arg1;
- (void)onLogicDidResumed:(id)arg1;
- (BOOL)isInManageView;
- (BOOL)needNotifyEmoticonListChangeImmediately;
- (void)onEmoticonRecoverLogicDownloadMd5ListOK;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)runNotifyTask;
- (id)m_recoverLogicObject;
- (void)setM_recoverLogicObject:(id)arg1;
- (id)m_notifyTaskList;
- (void)setM_notifyTaskList:(id)arg1;
- (BOOL)m_hasOnceStartRecover;
- (void)setM_hasOnceStartRecover:(BOOL)arg1;
- (BOOL)m_hasNotStartRecoverTaskInList;
- (void)setM_hasNotStartRecoverTaskInList:(BOOL)arg1;
- (unsigned int)m_manageViewRecentUpdateTime;
- (void)setM_manageViewRecentUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

