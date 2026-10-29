@interface MonoServiceMgr : MMUserService <MultiTalkMgrExt, IVOIPUILogicMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _monoServiceAppSceneDict; // +0x8
    NSMutableDictionary * _mainSceneAudioMonoServiceDict; // +0x10
    NSMutableDictionary * _subSceneAudioMonoServiceDict; // +0x18
    NSMutableDictionary * _mainSceneVideoMonoServiceDict; // +0x20
    NSMutableDictionary * _subSceneVideoMonoServiceDict; // +0x28
    NSString * _currentVoipOrMultiTalkId; // +0x30
}
+ (id)createUniqueId:(id)arg1 monoServiceKind:(unsigned long long)arg2 business:(unsigned long long)arg3 subBusiness:(unsigned long long)arg4;
+ (id)createUniqueId:(id)arg1 business:(unsigned long long)arg2 subBusiness:(unsigned long long)arg3;
+ (BOOL)isLastActionInMainScene;
+ (BOOL)hasSubAppScene;
+ (id)utilCreateUniqueId;
+ (BOOL)isCurrentlyInVoIPOrMultiTalk;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearData;
- (void)updateMonoServiceAppScene:(unsigned long long)arg1 forMonoServiceBusiness:(unsigned long long)arg2 subBusiness:(unsigned long long)arg3 serviceId:(id)arg4;
- (unsigned long long)getCurrentAppSceneForMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)addAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3 inMainAppScene:(BOOL)arg4;
- (BOOL)addAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)addAudioMonoServiceBusinessUseLastActiveScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)removeAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)addVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3 inMainAppScene:(BOOL)arg4;
- (BOOL)addVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)addVideoMonoServiceBusinessUseLastActiveScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)removeVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)changeAudioMonoServiceBusinessToMainAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)changeVideoMonoServiceBusinessToMainAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)changeAudioMonoServiceBusinessToSubAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (BOOL)changeVideoMonoServiceBusinessToSubAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (id)getMainAppSceneAudioMonoServiceList;
- (id)getSubAppSceneAudioMonoServiceList;
- (id)getAudioMonoServiceList;
- (unsigned long long)getMainAppSceneAudioMonoServiceCountExceptBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (unsigned long long)getSubAppSceneAudioMonoServiceCountExceptBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (id)getMainAppSceneVideoMonoServiceList;
- (id)getSubAppSceneVideoMonoServiceList;
- (BOOL)isContainAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 inMainScene:(BOOL)arg3;
- (BOOL)isContainVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 inMainScene:(BOOL)arg3;
- (BOOL)isContainAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3 inMainScene:(BOOL)arg4;
- (id)createVoipOrMultiTalkServiceId;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onPlayerPausePlay:(id)arg1;
- (void)onPlayer:(id)arg1 muteChanged:(BOOL)arg2;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onVideoVoipViewDisappear;
- (id)monoServiceAppSceneDict;
- (void)setMonoServiceAppSceneDict:(id)arg1;
- (id)mainSceneAudioMonoServiceDict;
- (void)setMainSceneAudioMonoServiceDict:(id)arg1;
- (id)subSceneAudioMonoServiceDict;
- (void)setSubSceneAudioMonoServiceDict:(id)arg1;
- (id)mainSceneVideoMonoServiceDict;
- (void)setMainSceneVideoMonoServiceDict:(id)arg1;
- (id)subSceneVideoMonoServiceDict;
- (void)setSubSceneVideoMonoServiceDict:(id)arg1;
- (id)currentVoipOrMultiTalkId;
- (void)setCurrentVoipOrMultiTalkId:(id)arg1;
- (void).cxx_destruct;
@end

