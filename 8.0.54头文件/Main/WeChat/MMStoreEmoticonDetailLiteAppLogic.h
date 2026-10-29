@interface MMStoreEmoticonDetailLiteAppLogic : NSObject <IStoreEmotionRewardExt>
{
    id /* block */ _finishInstallBlock; // +0x8
    id /* block */ _finishUninstallBlock; // +0x10
    WCDataItem * _timeLineData; // +0x18
    EmoticonStoreReportInfo * _reportInfo; // +0x20
    long long _extranceScene; // +0x28
    NSString * _appid; // +0x30
    NSString * _pid; // +0x38
    MMLiteAppViewController * _viewController; // +0x40
}
+ (id)createLogicWithPid:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (void)dealloc;
- (id)initWithPid:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (void)createStore;
- (void)setPid:(id)arg1;
- (BOOL)onDetailDataChange:(id)arg1;
- (BOOL)onInstallFinish:(id)arg1;
- (BOOL)onUnInstallFinish:(id)arg1;
- (BOOL)onReportEmoticonStoreActionIfNeeded:(id)arg1;
- (void)reportEmoticonStoreActionIfNeeded:(unsigned long long)arg1;
- (BOOL)isRewardClose:(unsigned long long)arg1 callbackId:(int)arg2;
- (void)onStoreEmotionRewardCompleteOkWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (id /* block */)finishInstallBlock;
- (void)setFinishInstallBlock:(id /* block */)arg1;
- (id /* block */)finishUninstallBlock;
- (void)setFinishUninstallBlock:(id /* block */)arg1;
- (id)timeLineData;
- (void)setTimeLineData:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (long long)extranceScene;
- (void)setExtranceScene:(long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pid;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

