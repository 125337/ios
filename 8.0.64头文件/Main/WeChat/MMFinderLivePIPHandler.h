@interface MMFinderLivePIPHandler : NSObject
{
    id /* block */ _getLiveJoinedCallback; // +0x8
    id /* block */ _getLiveVCAppearCallback; // +0x10
    id /* block */ _getAppActiveCallback; // +0x18
    id /* block */ _showSwitchGuideCallback; // +0x20
    MMFinderLiveTaskId * _liveTaskId; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)checkPictureInPictureAbility;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (BOOL)showPIPSwitchGuide;
- (id)finderLiveTask;
- (BOOL)isLiveVCAppear;
- (BOOL)isLiveJoined;
- (BOOL)isResignActive;
- (id /* block */)getLiveJoinedCallback;
- (void)setGetLiveJoinedCallback:(id /* block */)arg1;
- (id /* block */)getLiveVCAppearCallback;
- (void)setGetLiveVCAppearCallback:(id /* block */)arg1;
- (id /* block */)getAppActiveCallback;
- (void)setGetAppActiveCallback:(id /* block */)arg1;
- (id /* block */)showSwitchGuideCallback;
- (void)setShowSwitchGuideCallback:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void).cxx_destruct;
@end
