@interface ExptService : MMUserService <IExptLogicCallback, IMsgExt, MMKernelExt, ReportDelegate, SessionFlowSwizzleExt, IExptAppLogicCallback, MMServiceProtocol>
{
    BOOL _hadLoadedExpt; // +0x8
    BOOL _hadLoadedAppExpt; // +0x9
    BOOL _isAuthOk; // +0xa
    BOOL _isReqNow; // +0xb
    BOOL _isUseExptV2Logic; // +0xc
    BOOL _isUseEnFormatNumber; // +0xd
    NSMutableDictionary * _exptItemMap; // +0x10
    NSMutableDictionary * _exptKeyMap; // +0x18
    ExptLogic * _exptLogic; // +0x20
    ExptDebugReportLogic * _debugReportLogic; // +0x28
    NSString * _exptKVDebugKey; // +0x30
    ExptAppLogic * _exptAppLogic; // +0x38
    NSMutableDictionary * _exptAppItemMap; // +0x40
    NSMutableDictionary * _exptAppKeyMap; // +0x48
    MMLRUCache * _logControlCache; // +0x50
    NSRecursiveLock * _logLock; // +0x58
    NSString * _globalSequence; // +0x60
}
- (id)numberValueForExptKey:(id)arg1;
- (id)stringValueForExptKey:(id)arg1;
- (void)reportHitExpt:(id)arg1;
- (BOOL)getExptInfo:(id)arg1 andExptId:(id *)arg2 andGroupId:(id *)arg3;
- (id)getExptInfo:(id)arg1;
- (BOOL)getExpt:(id)arg1 withBoolDef:(BOOL)arg2;
- (BOOL)getExptReadOnly:(id)arg1 withBoolDef:(BOOL)arg2;
- (float)getFloatExptReadOnly:(id)arg1 withDef:(float)arg2;
- (long long)getIntegerExptReadOnly:(id)arg1 withDef:(long long)arg2;
- (id)getExpt:(id)arg1 withDef:(id)arg2;
- (id)getExptReadOnly:(id)arg1 withDef:(id)arg2;
- (id)getNumberExpt:(id)arg1;
- (float)getFloatExpt:(id)arg1 withDef:(float)arg2;
- (id)useEnUSFormatNumber:(id)arg1;
- (long long)getIntegerExpt:(id)arg1 withDef:(long long)arg2;
- (id)getStringExpt:(id)arg1;
- (id)getExptItemByUseFlag:(id)arg1;
- (id)getStringExptV2:(id)arg1 andNeedReport:(BOOL)arg2;
- (id)getStringExpt:(id)arg1 andNeedReport:(BOOL)arg2;
- (id)logControlCache;
- (id)logLock;
- (BOOL)checkNeedLog:(id)arg1 andVal:(id)arg2 andNow:(unsigned long long)arg3;
- (id)getAllExpt;
- (id)getExptId:(id)arg1;
- (void)onServiceInit;
- (void)onServiceAfterInit;
- (void)onServiceClearData;
- (void)getSvrExpt;
- (void)onSystemUpgrade;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)getSvrExptByManulLogin;
- (void)willEnterForeground;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)tryToLoadExpt;
- (void)tryToSaveExpt;
- (void)getLocalExptList:(id)arg1;
- (id)sharedSerialQueue;
- (void)onGotSvrExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (void)asyncGotSvrExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (BOOL)checkNeedDelAllExpt:(unsigned int)arg1;
- (id)mmExptPath:(id)arg1;
- (id)mmExptPath:(id)arg1 md5:(id)arg2;
- (BOOL)isOpenMonitorKV;
- (void)stopMonitorKV;
- (void)startMonitorKV:(id)arg1;
- (void)startMonitorKV:(id)arg1 isAuto:(BOOL)arg2;
- (void)kvReport:(id)arg1 logid:(unsigned int)arg2;
- (void)onViewDidAppear:(id)arg1 withVC:(id)arg2;
- (void)onViewDidDisappear:(id)arg1 withVC:(id)arg2;
- (void)sendSession:(id)arg1;
- (void)sendDebugInfo:(unsigned int)arg1 key:(unsigned int)arg2 content:(id)arg3;
- (void)tryToLoadAppExpt;
- (void)tryToSaveAppExpt;
- (id)getAppExpt:(id)arg1;
- (void)checkToGetSvrAppExpt;
- (void)getLocalAppExptList:(id)arg1;
- (void)onGotAppExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andFromScene:(unsigned int)arg4;
- (void)asyncOnGotAppExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andFromScene:(unsigned int)arg4;
- (void)getAppSvrExpt;
- (void)reportApp;
- (void)resetUseExptV2Logic;
- (void)showDebugExptHitInfo:(id)arg1 andKey:(id)arg2 andVal:(id)arg3;
- (unsigned int)getNeedToShowHitExptId;
- (void)setNeedToShowHitExptId:(unsigned int)arg1;
- (void)checkIsDeviceInfoChange;
- (void)saveSystemInfo;
- (id)exptItemMap;
- (void)setExptItemMap:(id)arg1;
- (id)exptKeyMap;
- (void)setExptKeyMap:(id)arg1;
- (BOOL)hadLoadedExpt;
- (void)setHadLoadedExpt:(BOOL)arg1;
- (id)exptLogic;
- (void)setExptLogic:(id)arg1;
- (id)debugReportLogic;
- (void)setDebugReportLogic:(id)arg1;
- (id)exptKVDebugKey;
- (void)setExptKVDebugKey:(id)arg1;
- (BOOL)hadLoadedAppExpt;
- (void)setHadLoadedAppExpt:(BOOL)arg1;
- (id)exptAppLogic;
- (void)setExptAppLogic:(id)arg1;
- (id)exptAppItemMap;
- (void)setExptAppItemMap:(id)arg1;
- (id)exptAppKeyMap;
- (void)setExptAppKeyMap:(id)arg1;
- (void)setLogControlCache:(id)arg1;
- (void)setLogLock:(id)arg1;
- (BOOL)isAuthOk;
- (void)setIsAuthOk:(BOOL)arg1;
- (BOOL)isReqNow;
- (void)setIsReqNow:(BOOL)arg1;
- (id)globalSequence;
- (void)setGlobalSequence:(id)arg1;
- (BOOL)isUseExptV2Logic;
- (void)setIsUseExptV2Logic:(BOOL)arg1;
- (BOOL)isUseEnFormatNumber;
- (void)setIsUseEnFormatNumber:(BOOL)arg1;
- (void).cxx_destruct;
@end
