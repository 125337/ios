@interface MMFinderLiveCustomPIPHandler : MMFinderLivePIPHandler <MMLiveTaskMgrExt, LiveCustomRenderPIPManagerExt>
{
    BOOL _delayToAutoStartPIPAbility; // +0x8
    BOOL _isInBackground; // +0x9
    BOOL _isPIPCheckStart; // +0xa
    id <MMFinderLivePIPMinimizeLogicControllerDelegate> _logicControllerDelegate; // +0x10
    id <MMFinderLivePIPMinimizeLogicDelegate> _logicDelegate; // +0x18
    unsigned long long _indicatorState; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)initNotifications;
- (void)checkPictureInPictureAbility;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)stopPictureInPictureCompletely:(BOOL)arg1;
- (void)clearLastStates;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)setIndicatorStateFlag:(unsigned long long)arg1;
- (void)clearIndicatorStateFlag:(unsigned long long)arg1;
- (void)onPIPAuthorityAchieved;
- (void)onPIPAuthorityOccupied;
- (id)getDisplayingCustomContentView;
- (id)getDisplayingContentView;
- (void)onPictureInPictureStart;
- (void)onPictureInPictureStop;
- (void)updateCurrentVideoDecodePictureInPictureOptions;
- (void)configPIPHandleLogic;
- (id)getPIPHandleLogic;
- (id)getCurrentPIPHandleLogic;
- (BOOL)isPIPHandleLogicPrepared;
- (id)getConfigPIPHandleLogic;
- (id)getPIPStartParam;
- (BOOL)isEnableReuseLastPIPOpenState;
- (BOOL)isCurrHasPIPAudioModuleAuthority;
- (id)getCustomContentView;
- (void)setIndicatorState:(unsigned long long)arg1;
- (void)onIndicatorStateChanged;
- (void)setDelayToAutoStartPIPAbility:(BOOL)arg1;
- (BOOL)isPIPOpen;
- (BOOL)isPIPStart;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(BOOL)arg2;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (id)logicControllerDelegate;
- (void)setLogicControllerDelegate:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)delayToAutoStartPIPAbility;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)isPIPCheckStart;
- (void)setIsPIPCheckStart:(BOOL)arg1;
- (unsigned long long)indicatorState;
- (void).cxx_destruct;
@end
