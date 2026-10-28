@interface MMStoreEmoticonDetailLiteAppLogic : NSObject <IStoreEmotionRewardExt>
{
    int _extranceScene; // +0x8
    id /* block */ _finishInstallBlock; // +0x10
    id /* block */ _finishUninstallBlock; // +0x18
    WCDataItem * _timeLineData; // +0x20
    EmoticonStoreReportInfo * _reportInfo; // +0x28
    unsigned long long _vcHash; // +0x30
    NSString * _appid; // +0x38
    NSString * _pid; // +0x40
    MMLiteAppViewController * _viewController; // +0x48
}
+ (id)createLogicWithPid:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (void)dealloc;
- (id)initWithPid:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (id /* block */)finishInstallBlock;
- (void)setFinishInstallBlock:(id /* block */)arg1;
- (id /* block */)finishUninstallBlock;
- (void)setFinishUninstallBlock:(id /* block */)arg1;
- (id)timeLineData;
- (void)setTimeLineData:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (int)extranceScene;
- (void)setExtranceScene:(int)arg1;
- (unsigned long long)vcHash;
- (void)setVcHash:(unsigned long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
