@interface WCWidgetPlayerParams : NSObject
{
    BOOL _isBGMMusicMute; // +0x8
    BOOL _isAutoReplay; // +0x9
    BOOL _isAudioModuleEnabled; // +0xa
    int _audioModuleScene; // +0xc
    UIView * _overlayView; // +0x10
    RecommendedMusicInfo * _bgmMusicInfo; // +0x18
    CALayer * _overlayViewLayer; // +0x20
    NSString * _audioModuleIdentifier; // +0x28
}
- (id)init;
- (id)description;
- (BOOL)hasValidWidget;
- (void)setAudioModuleScene:(int)arg1;
- (id)overlayView;
- (void)setOverlayView:(id)arg1;
- (id)bgmMusicInfo;
- (void)setBgmMusicInfo:(id)arg1;
- (BOOL)isBGMMusicMute;
- (void)setIsBGMMusicMute:(BOOL)arg1;
- (BOOL)isAutoReplay;
- (void)setIsAutoReplay:(BOOL)arg1;
- (int)audioModuleScene;
- (id)overlayViewLayer;
- (void)setOverlayViewLayer:(id)arg1;
- (id)audioModuleIdentifier;
- (void)setAudioModuleIdentifier:(id)arg1;
- (BOOL)isAudioModuleEnabled;
- (void)setIsAudioModuleEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

