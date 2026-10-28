@interface WCSessionFlowMgr : MMUserService <MMServiceProtocol, WCSessionFlowMonitorExt>
{
    WCSessionFlowStatItem * sessionFlowStatItem; // +0x8
    unsigned int pId; // +0x10
    NSString * pName; // +0x18
    NSString * prePage; // +0x20
    NSString * currentPage; // +0x28
    unsigned int viewHashCodeOffset; // +0x30
    unsigned int tabHashCodeOffset; // +0x34
    unsigned int pageHashCodeOffset; // +0x38
    unsigned int floatHashCodeOffset; // +0x3c
    BOOL isContinueLastSession; // +0x40
    BOOL isCallbackForeground; // +0x41
    unsigned long long reportSeq; // +0x48
    WCSessionDSLExecuter * sessionDSLExecuter; // +0x50
    unsigned int businessIdSeq; // +0x58
    NSMutableDictionary * ignoreSessionQuitDic; // +0x60
    NSString * floatPerPageName; // +0x68
    unsigned long long floatPerPageHash; // +0x70
    WCSessionFlowSessionInfo * lastFloatSessionInfo; // +0x78
    WCSessionFlowSessionInfo * lastEnterSessionInfo; // +0x80
    BOOL isRepeatEnterFloat; // +0x88
    NSMutableArray * last10PagePathCache; // +0x90
    NSString * lastSessionId; // +0x98
    NSMutableArray * nowSessionPageIds; // +0xa0
    NSMutableArray * lastSessionPageIds; // +0xa8
    WCSessionFlowConfiger * sessionConfiger; // +0xb0
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onSessionConfigUpdate;
- (BOOL)isMonitorGesture;
- (BOOL)isMonitorUIcontrol;
- (id)getLastSessionInfo;
- (void)onEnterPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (id)createSessionPagePathInfo:(id)arg1 withTime:(unsigned long long)arg2 withPageName:(id)arg3;
- (void)overSessionPagePathInfo:(id)arg1 withTime:(unsigned long long)arg2;
- (void)matchPagePathConfigModel:(id)arg1 withPagePathInfo:(id)arg2;
- (void)matchExactPagePathConfigModel:(id)arg1 withPagePathInfo:(id)arg2 withPagePathConfigModel:(id)arg3 withSessionMarkPagePathInfo:(id)arg4;
- (void)matchVaguePagePathConfigModel:(id)arg1 withPagePathInfo:(id)arg2 withPagePathConfigModel:(id)arg3 withSessionMarkPagePathInfo:(id)arg4;
- (void)overMatchVaguePagePathConfigModel:(id)arg1 withPageName:(id)arg2;
- (void)onQuitPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (id)createSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withHashCode:(unsigned long long)arg3 withPageName:(id)arg4 withPrePage:(id)arg5;
- (id)createIllegalSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withHashCode:(unsigned long long)arg3 withPrePage:(id)arg4;
- (void)overSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withEnterBack:(BOOL)arg3;
- (void)overIllegaSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withEnterBack:(BOOL)arg3;
- (id)getSessionFlowPageMergeInfo:(id)arg1 withSessionId:(id)arg2;
- (id)getSessionPagePathMergeInfo:(id)arg1 withSid:(id)arg2 withPagePathId:(id)arg3;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onDisappearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)getSessionPagePathBusinessParams:(id)arg1 withPageName:(id)arg2 withObj:(id)arg3 withAction:(unsigned long long)arg4 withBlock:(id /* block */)arg5;
- (void)obtainSessionPagePathBusinessParams:(id)arg1 withPageName:(id)arg2 withObj:(id)arg3 withAction:(unsigned long long)arg4 withBlock:(id /* block */)arg5;
- (void)ignoreSessionQuit;
- (id)requestSessionPageId;
- (void)putBizData:(id)arg1 withKey:(id)arg2 withBizId:(id)arg3;
- (void)putBizData:(id)arg1 withKey:(id)arg2;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onViewShow:(id)arg1 withVC:(id)arg2;
- (void)onViewDismiss:(id)arg1 withVC:(id)arg2;
- (void)onViewShow:(id)arg1 withName:(id)arg2 withVC:(id)arg3;
- (void)onViewDismiss:(id)arg1 withName:(id)arg2 withVC:(id)arg3;
- (void)onFloatViewShow:(id)arg1;
- (void)onFloatViewDismiss:(id)arg1;
- (void)onViewOperation:(id)arg1 withViewOperationAction:(unsigned long long)arg2 withViewController:(id)arg3;
- (void)onSendEvent:(id)arg1;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (id)getSessionConfigModel:(id)arg1 withVC:(id)arg2 withPrePage:(id)arg3;
- (void)overOneReportItem:(unsigned long long)arg1 withContinueLast:(BOOL)arg2 isChangeAccount:(BOOL)arg3;
- (void)reconstructOneReportItem:(unsigned long long)arg1;
- (void)reportAndSave:(id)arg1 isChangeAccount:(BOOL)arg2;
- (void)checkAndFilterBusinessData:(id)arg1;
- (void)filterSessionUBABusinessParam:(id)arg1;
- (void)fixSessionFlowPagePath:(id)arg1;
- (void)filterSessionPageViewOperation:(id)arg1;
- (void)handleSessionFlowDataMerge:(id)arg1;
- (void)saveSessionJsonStr:(id)arg1 withMemoryKey:(id)arg2;
- (id)getSessionFlowJsonStr:(id)arg1 withMemoryKey:(id)arg2;
- (id)getSessionFlowJsonStr:(id)arg1 withMatchPagePaths:(id)arg2;
- (void)reportSessionData:(id)arg1 witPId:(unsigned int)arg2 withPName:(id)arg3 withLogId:(unsigned int)arg4;
- (id)getSessionDataAttr:(id)arg1 witPId:(unsigned int)arg2 withPName:(id)arg3 withSubSeq:(unsigned long long)arg4 withSubSeqSum:(unsigned long long)arg5;
- (id)getSessionFlowSingleJsonString:(id)arg1;
- (id)getSessionFlowMergeJsonString:(id)arg1;
- (id)getSessionUBAJsonString:(id)arg1;
- (id)getSessionBusinessDataJsonString:(id)arg1;
- (id)getSessionMergePagePathJsonString:(id)arg1;
- (id)getMatchPagePathJsonString:(id)arg1;
- (id)obtainBusinessInfo:(id)arg1 withDataPathConfig:(id)arg2;
- (id)getCurrentValidSessionInfo;
- (id)getSessionInfo:(id)arg1 withHashCode:(unsigned long long)arg2;
- (id)createSessionId:(id)arg1 withTime:(unsigned long long)arg2;
- (id)createIllegalSessionId:(id)arg1 withTime:(unsigned long long)arg2;
- (id)createSessionPageId:(id)arg1 withTime:(unsigned long long)arg2;
- (id)getSidBySessionId:(id)arg1;
- (id)getDataMMKV;
- (id)getConfigMMKV;
- (void).cxx_destruct;
@end
