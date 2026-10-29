@interface WCFinderSimplePlayerInitParam : NSObject
{
    BOOL _ignoreHDR; // +0x8
    BOOL _notShowDefaultThumb; // +0x9
    UIColor * _playerBackgroundColor; // +0x10
    NSString * _audioModuleGroupName; // +0x18
}
+ (id)defaultParams;
- (BOOL)ignoreHDR;
- (void)setIgnoreHDR:(BOOL)arg1;
- (BOOL)notShowDefaultThumb;
- (void)setNotShowDefaultThumb:(BOOL)arg1;
- (id)playerBackgroundColor;
- (void)setPlayerBackgroundColor:(id)arg1;
- (id)audioModuleGroupName;
- (void)setAudioModuleGroupName:(id)arg1;
- (void).cxx_destruct;
@end

