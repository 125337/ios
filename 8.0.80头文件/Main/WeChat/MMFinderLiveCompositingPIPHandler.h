@interface MMFinderLiveCompositingPIPHandler : MMFinderLivePIPHandler
{
    BOOL _isPIPCheckStart; // +0x8
}
- (void)checkPictureInPictureAbility;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)updateCurrentVideoDecodePictureInPictureOptions;
- (void)configPIPHandleLogic;
- (id)getPIPHandleLogic;
- (id)getCurrentPIPHandleLogic;
- (BOOL)isPIPHandleLogicPrepared;
- (BOOL)isPIPCheckStart;
- (void)setIsPIPCheckStart:(BOOL)arg1;
@end
