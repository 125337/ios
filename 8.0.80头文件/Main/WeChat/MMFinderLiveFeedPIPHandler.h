@interface MMFinderLiveFeedPIPHandler : MMFinderLiveCustomPIPHandler
{
    MMFinderLiveFeedPIPContext * _pipContext; // +0x8
    long long _forbidOptions; // +0x10
}
- (id)initWithFeedStreamTaskId:(id)arg1;
- (void)registerExtensions;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)arg1;
- (id)getPIPHandleLogic;
- (void)clearLastStates;
- (BOOL)isEnableReuseLastPIPOpenState;
- (void)setForbidOption:(long long)arg1;
- (void)unSetForbidOption:(long long)arg1;
- (void)onForbidOptionsChangeFrom:(long long)arg1 to:(long long)arg2;
- (id)feedStreamTaskId;
- (BOOL)enableAutoStartPIPInBackground;
- (void)createPIPContextIfNeed;
- (id)pipContext;
- (void)setPipContext:(id)arg1;
- (long long)forbidOptions;
- (void)setForbidOptions:(long long)arg1;
- (void).cxx_destruct;
@end
