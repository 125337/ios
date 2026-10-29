@interface WCFinderSimplePlayerInitParam : NSObject
{
    BOOL _ignoreHDR; // +0x8
    BOOL _notShowDefaultThumb; // +0x9
    BOOL _beforePlayHideLoadingView; // +0xa
    BOOL _bUseShareCover; // +0xb
    BOOL _disableFeedPlaybackSideEffects; // +0xc
    int _audioModuleScene; // +0x10
    UIColor * _playerBackgroundColor; // +0x18
    NSString * _audioModuleGroupName; // +0x20
    long long _imageMediaType; // +0x28
    unsigned long long _playerInfoReportTrigger; // +0x30
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
- (int)audioModuleScene;
- (void)setAudioModuleScene:(int)arg1;
- (BOOL)beforePlayHideLoadingView;
- (void)setBeforePlayHideLoadingView:(BOOL)arg1;
- (long long)imageMediaType;
- (void)setImageMediaType:(long long)arg1;
- (BOOL)bUseShareCover;
- (void)setBUseShareCover:(BOOL)arg1;
- (unsigned long long)playerInfoReportTrigger;
- (void)setPlayerInfoReportTrigger:(unsigned long long)arg1;
- (BOOL)disableFeedPlaybackSideEffects;
- (void)setDisableFeedPlaybackSideEffects:(BOOL)arg1;
- (void).cxx_destruct;
@end
