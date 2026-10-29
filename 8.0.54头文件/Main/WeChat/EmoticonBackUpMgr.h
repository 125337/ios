@interface EmoticonBackUpMgr : MMUserService <EmoticonRecoverLogicObjectDelegate, MMKernelExt, CNetworkStatusExt, IMsgExt, EmoticonServerNotifyTaskDelegate, MMServiceProtocol, EmoticonRecover>
{
    BOOL _m_hasOnceStartRecover; // +0x8
    BOOL _m_hasNotStartRecoverTaskInList; // +0x9
    unsigned int _m_lastManageViewUploadTime; // +0xc
    EmoticonRecoverLogicObject * _m_recoverLogicObject; // +0x10
    NSMutableArray * _m_notifyTaskList; // +0x18
}
- (id)init;
- (void)onServiceClearData;
- (BOOL)canStartCgiNow;
- (void)recoverEmoticonFromManageView;
- (BOOL)recoverEmoticonFromServer;
- (BOOL)isRecoveringEmoticon;
- (BOOL)isRecoveringEmoticonComplete;
- (BOOL)isRecoveringEmoticonFromServer;
- (BOOL)isRecoveringStatusSafeForOperation;
- (BOOL)isFirstRecoverAfterAuth;
- (void)tryRecoverAnotherPart;
- (void)checkRecoverEmoticonFromServer;
- (BOOL)needRecover;
- (void)onEmoticonRecoverLogicDownloadMd5ListOK;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (BOOL)isInManageView;
- (BOOL)needNotifyEmoticonListChangeImmediately;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)setNeedsRecoverAndNeedClearData:(BOOL)arg1;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)serverNotifyTaskCanResumeLogic:(id)arg1;
- (void)onLogicDidResumed:(id)arg1;
- (void)runNotifyTask;
- (id)m_recoverLogicObject;
- (void)setM_recoverLogicObject:(id)arg1;
- (id)m_notifyTaskList;
- (void)setM_notifyTaskList:(id)arg1;
- (BOOL)m_hasOnceStartRecover;
- (void)setM_hasOnceStartRecover:(BOOL)arg1;
- (unsigned int)m_lastManageViewUploadTime;
- (void)setM_lastManageViewUploadTime:(unsigned int)arg1;
- (BOOL)m_hasNotStartRecoverTaskInList;
- (void)setM_hasNotStartRecoverTaskInList:(BOOL)arg1;
- (void).cxx_destruct;
@end

