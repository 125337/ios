@interface TAVSoftEncodingColorProperties : NSObject
{
    int _wxColorPrimaries; // +0x8
    int _wxColorTransferCharacteristic; // +0xc
    int _wxColorSpace; // +0x10
    int _wxColorRange; // +0x14
}
- (id)init;
- (int)wxColorPrimaries;
- (void)setWxColorPrimaries:(int)arg1;
- (int)wxColorTransferCharacteristic;
- (void)setWxColorTransferCharacteristic:(int)arg1;
- (int)wxColorSpace;
- (void)setWxColorSpace:(int)arg1;
- (int)wxColorRange;
- (void)setWxColorRange:(int)arg1;
@end
