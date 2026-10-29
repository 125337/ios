@interface BrandServiceManager : NSObject
{
    BrandServiceManagerCallbackBridge * callback_; // +0x8
}
+ (id)shareInstance;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BrandServiceManagerBridge *)bridge;
- (BOOL)isEnableHistoryBox;
- (BOOL)isDataMigrateDone;
- (void)getDataAsync:(unsigned long long)arg1 isInit:(BOOL)arg2 isReset:(BOOL)arg3 resetSize:(unsigned int)arg4 lastLocalId:(unsigned long long)arg5;
- (void)getNotifyMsgDataAsync:(unsigned long long)arg1 fromLocalId:(unsigned long long)arg2 limit:(unsigned int)arg3;
- (void)getResortResultInfoAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)getCacheResortSwitchInfoAsync:(unsigned long long)arg1;
- (id)getTopNData:(unsigned int)arg1;
- (id)getTopNArticleUrl:(unsigned int)arg1;
- (void)initWithTaskIdConfigDirUinClientVersionInitConfigAsync:(unsigned long long)arg1 configDir:(id)arg2 uin:(id)arg3 clientVersion:(unsigned int)arg4 initConfig:(id)arg5;
- (BOOL)hasInit;
- (void)onAppForegroundAsync:(unsigned long long)arg1;
- (void)onEnterAsync:(unsigned long long)arg1 sessionId:(unsigned int)arg2 digestMsgId:(unsigned long long)arg3;
- (void)onExitAsync:(unsigned long long)arg1;
- (void)setIsKeepPosAsync:(unsigned long long)arg1 keepPos:(BOOL)arg2;
- (void)resetNewMsgLineAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2;
- (void)resetAllNewMsgFlagAsync:(unsigned long long)arg1;
- (void)onExposeAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 validExpose:(BOOL)arg3 sessionId:(unsigned int)arg4 exposedDuration:(unsigned int)arg5 exposedAreaMaxRadio:(unsigned int)arg6;
- (void)onExposeParamListAsync:(unsigned long long)arg1 list:(id)arg2;
- (void)onMsgClickAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 postInCard:(unsigned int)arg3;
- (void)onRecCardExposeAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 type:(unsigned int)arg3;
- (void)onExpandAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2;
- (void)insertAsync:(unsigned long long)arg1 msgInfo:(id)arg2;
- (void)mockInsertRecCardAsync:(unsigned long long)arg1 msgCard:(id)arg2;
- (void)updateMsgContentAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 msgViewType:(unsigned int)arg3 content:(id)arg4;
- (BOOL)deleteByMsgId:(unsigned long long)arg1 msgType:(unsigned int)arg2;
- (void)deleteByUserNameAsync:(unsigned long long)arg1 userName:(id)arg2;
- (void)deleteByUserNameAndSvrIdAsync:(unsigned long long)arg1 userName:(id)arg2 svrId:(unsigned long long)arg3;
- (void)callOnDataChange:(unsigned int)arg1 msgInfo:(id)arg2 userName:(id)arg3;
- (void)callOnRecDataChange:(unsigned int)arg1 recInfo:(id)arg2;
- (void)callOnResortResultChanged;
- (void)disableResortForDebug:(BOOL)arg1;
- (void)ignoreResortNextReqTimeCheck:(unsigned int)arg1;
- (void)debugPrintSnapshotList:(BOOL)arg1;
- (unsigned int)getUnReadCount;
- (void)setFirstVisibleItemAsync:(unsigned long long)arg1 pos:(unsigned int)arg2;
- (unsigned int)getLastMsgTime;
- (id)getLastMsgInfo;
- (BOOL)getResortBandwidthOptSwitch;
- (id)getMsgInfoByMsgId:(unsigned long long)arg1;
- (unsigned long long)getLastMsgTimeByUserName:(id)arg1;
- (void)resetAllData;
- (void)removeAllDataAsync:(unsigned long long)arg1;
- (void)getRecListStartPosAsync:(unsigned long long)arg1;
- (void)getNewMsgLinePosAsync:(unsigned long long)arg1;
- (void)requestMoreRecDataAsync:(unsigned long long)arg1 scene:(unsigned int)arg2;
- (id)getCreationCenterInfo;
- (void)requestCreationCenterInfoAsync:(unsigned long long)arg1 scene:(unsigned int)arg2 data:(id)arg3;
- (id)getCacheResortConfigString;
- (void)resetCreationCenterRedPointAsync:(unsigned long long)arg1 newNum:(unsigned int)arg2;
- (void)callOnCreationCenterInfoChange:(BOOL)arg1 errorMsg:(id)arg2 info:(id)arg3;
- (void)resortV2ControlFlagChangeAsync:(unsigned long long)arg1 flag:(unsigned int)arg2 liftReadAreaSize:(unsigned int)arg3 historyBoxWording:(id)arg4 resortSceneBitSwitch:(unsigned long long)arg5;
- (void)onXmlPushReceiveAsync:(unsigned long long)arg1 type:(id)arg2 content:(id)arg3;
- (BOOL)deleteRecCardFromCache:(id)arg1;
- (void)onWechatIntoActive;
- (id)getOftenDetailMsgList:(id)arg1 limit:(unsigned int)arg2;
- (id)getAffConfig;
- (void)resetDataMigrateStatus;
@end

