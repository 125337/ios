@interface MMFinderLiveCustomPIPHandler : MMFinderLivePIPHandler <MMLiveTaskMgrExt, LiveCustomRenderPIPManagerExt>
{
    BOOL _isPIPCheckStart; // +0x8
    id <MMFinderLivePIPMinimizeLogicControllerDelegate> _logicControllerDelegate; // +0x10
    id <MMFinderLivePIPMinimizeLogicDelegate> _logicDelegate; // +0x18
    unsigned long long _indicatorState; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtensions;
- (void)checkPictureInPictureAbility;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)setIndicatorStateFlag:(unsigned long long)arg1;
- (void)clearIndicatorStateFlag:(unsigned long long)arg1;
- (void)onPictureInPictureStart;
- (void)updateCurrentVideoDecodePictureInPictureOptions;
- (void)configPIPHandleLogic;
- (id)getPIPHandleLogic;
- (id)getCurrentPIPHandleLogic;
- (BOOL)isPIPHandleLogicPrepared;
- (id)getPIPStartParam;
- (id)getCustomContentView;
- (void)setIndicatorState:(unsigned long long)arg1;
- (void)onIndicatorStateChanged;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(BOOL)arg2;
- (id)logicControllerDelegate;
- (void)setLogicControllerDelegate:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)isPIPCheckStart;
- (void)setIsPIPCheckStart:(BOOL)arg1;
- (unsigned long long)indicatorState;
- (void).cxx_destruct;
@end

