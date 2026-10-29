@interface WXSourceColorProperties : NSObject
{
    NSString * _colorPrimaries; // +0x8
    NSString * _transferFunction; // +0x10
    NSString * _YCbCrMatrix; // +0x18
}
- (id)init;
- (id)makeSettingsColorDictionary:(WxVideoTransParaABA)arg1 isHEVCHardware:(BOOL)arg2 isHEVCSoftware:(BOOL)arg3 enableSetColorProperty:(int)arg4;
- (id)makeSettingsRangeDictionary:(WxVideoTransParaABA)arg1 enableSetColorProperty:(int)arg2;
- (BOOL)needHDRtoSDR:(WxVideoTransParaABA)arg1 enableSetColorProperty:(int)arg2;
- (id)colorPrimaries;
- (void)setColorPrimaries:(id)arg1;
- (id)transferFunction;
- (void)setTransferFunction:(id)arg1;
- (id)YCbCrMatrix;
- (void)setYCbCrMatrix:(id)arg1;
- (void).cxx_destruct;
@end
