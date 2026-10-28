@interface WCSessionFlowConfiger : NSObject <IExptServiceExt>
{
    BOOL _isNeedReportSingle; // +0x8
    BOOL _isNeedCollectSessionUBA; // +0x9
    WCSessionFlowConfigModel * _sessionFlowConfigModel; // +0x10
    WCSessionPageConfigModel * _sessionPageConfigModel; // +0x18
    WCSessionUBAConfigModel * _sessionUBAConfigModel; // +0x20
}
- (void)onInit;
- (void)onClearData;
- (void)initSessionFlowConfig;
- (void)initSessionPageConfig;
- (void)initSessionUBA;
- (id)getSessionFlowConfigsByPageName:(id)arg1 prePage:(id)arg2;
- (id)getSessionFlowConfigByPageName:(id)arg1 prePage:(id)arg2 sessionParamExpects:(id)arg3;
- (id)getSessionFlowConfigBySid:(id)arg1;
- (id)getSessionFlowSidByPageName:(id)arg1 prePage:(id)arg2 sessionParamExpects:(id)arg3;
- (id)getPagePathConfigModel:(id)arg1;
- (id)getPagePathConfigModels:(id)arg1;
- (id)getSessionUBAUnitConfigModel:(id)arg1;
- (id)getMonitorViewOperation:(id)arg1 pageName:(id)arg2;
- (id)getMonitorViewOperation:(id)arg1 pageName:(id)arg2 viewID:(id)arg3;
- (BOOL)isBlackListPage:(id)arg1;
- (BOOL)isMainTabPage:(id)arg1;
- (BOOL)isFilterPage:(id)arg1;
- (BOOL)isNeedReportSingleSwitch;
- (BOOL)isMonitorSessionFlow;
- (BOOL)isSessionMonitorSwitch;
- (BOOL)isSessionUBAMonitorSwitch;
- (BOOL)isSessionControlMonitorGesture;
- (BOOL)isSessionControlMonitorUIcontrol;
- (void)onSessionConfigChange:(id)arg1 isDel:(BOOL)arg2 needReport:(BOOL)arg3;
- (void)realHandleSessionConfigChange:(id)arg1 isDel:(BOOL)arg2 needReport:(BOOL)arg3 isLocal:(BOOL)arg4;
- (void)onSessionPageConfigChange:(id)arg1 isDel:(BOOL)arg2 andSessionPageId:(unsigned int)arg3 needReport:(BOOL)arg4;
- (void)onSessionUBAConfigChange:(id)arg1 isDel:(BOOL)arg2;
- (id)getMMKV;
- (id)sessionFlowConfigModel;
- (void)setSessionFlowConfigModel:(id)arg1;
- (id)sessionPageConfigModel;
- (void)setSessionPageConfigModel:(id)arg1;
- (id)sessionUBAConfigModel;
- (void)setSessionUBAConfigModel:(id)arg1;
- (BOOL)isNeedReportSingle;
- (void)setIsNeedReportSingle:(BOOL)arg1;
- (BOOL)isNeedCollectSessionUBA;
- (void)setIsNeedCollectSessionUBA:(BOOL)arg1;
- (void).cxx_destruct;
@end
