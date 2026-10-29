@interface EmoticonCameraResultSetting : NSObject
{
    BOOL _mute; // +0x8
    BOOL _fastPlay; // +0x9
    BOOL _removeBg; // +0xa
}
- (BOOL)mute;
- (void)setMute:(BOOL)arg1;
- (BOOL)fastPlay;
- (void)setFastPlay:(BOOL)arg1;
- (BOOL)removeBg;
- (void)setRemoveBg:(BOOL)arg1;
@end

