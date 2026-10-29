@interface MMPowerABTest : NSObject
{
    BOOL _disableCdnEnhance; // +0x8
    BOOL _disableOffScreen; // +0x9
    BOOL _enable30FPS; // +0xa
    BOOL _enableQOS; // +0xb
    BOOL _playerFixLock; // +0xc
    BOOL _strategy2; // +0xd
    BOOL _playerFastGetter; // +0xe
    BOOL _livePIPFix; // +0xf
    long long _audienceInterval; // +0x10
    long long _anchorInterval; // +0x18
    long long _modelGeneration; // +0x20
}
- (id)init;
- (void)setup;
- (BOOL)isNewDevice;
- (BOOL)disableCdnEnhance;
- (void)setDisableCdnEnhance:(BOOL)arg1;
- (BOOL)disableOffScreen;
- (void)setDisableOffScreen:(BOOL)arg1;
- (BOOL)enable30FPS;
- (void)setEnable30FPS:(BOOL)arg1;
- (BOOL)enableQOS;
- (void)setEnableQOS:(BOOL)arg1;
- (BOOL)playerFixLock;
- (void)setPlayerFixLock:(BOOL)arg1;
- (BOOL)strategy2;
- (void)setStrategy2:(BOOL)arg1;
- (BOOL)playerFastGetter;
- (void)setPlayerFastGetter:(BOOL)arg1;
- (BOOL)livePIPFix;
- (void)setLivePIPFix:(BOOL)arg1;
- (long long)audienceInterval;
- (void)setAudienceInterval:(long long)arg1;
- (long long)anchorInterval;
- (void)setAnchorInterval:(long long)arg1;
- (long long)modelGeneration;
- (void)setModelGeneration:(long long)arg1;
@end
