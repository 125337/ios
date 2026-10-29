@interface MMPowerABTest : NSObject
{
    BOOL _disableCdnEnhance; // +0x8
    BOOL _disableOffScreen; // +0x9
    BOOL _enable30FPS; // +0xa
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
- (long long)audienceInterval;
- (void)setAudienceInterval:(long long)arg1;
- (long long)anchorInterval;
- (void)setAnchorInterval:(long long)arg1;
- (long long)modelGeneration;
- (void)setModelGeneration:(long long)arg1;
@end

