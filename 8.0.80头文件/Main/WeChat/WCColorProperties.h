@interface WCColorProperties : NSObject
{
    long long _colorPrimaries; // +0x8
    long long _colorTransferCharacteristic; // +0x10
    long long _colorSpace; // +0x18
    long long _colorRange; // +0x20
}
+ (id)colorPropertiesWithABAColor:(WXColorProperties)arg1;
+ (id)colorPropertiesWithABADict:(id)arg1;
- (id)initWithColorPrimaries:(long long)arg1 colorTransferCharacteristic:(long long)arg2 colorSpace:(long long)arg3 colorRange:(long long)arg4;
- (BOOL)isDisplayP3;
- (long long)colorPrimaries;
- (void)setColorPrimaries:(long long)arg1;
- (long long)colorTransferCharacteristic;
- (void)setColorTransferCharacteristic:(long long)arg1;
- (long long)colorSpace;
- (void)setColorSpace:(long long)arg1;
- (long long)colorRange;
- (void)setColorRange:(long long)arg1;
@end
