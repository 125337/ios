@interface TAVSourceExportColorProperties : NSObject
{
    NSString * _colorPrimaries; // +0x8
    NSString * _transferFunction; // +0x10
    NSString * _YCbCrMatrix; // +0x18
}
+ (id)dp3ColorProperties;
+ (id)hdColorProperties;
- (id)init;
- (id)makeSettingsDictionary;
- (id)colorPrimaries;
- (void)setColorPrimaries:(id)arg1;
- (id)transferFunction;
- (void)setTransferFunction:(id)arg1;
- (id)YCbCrMatrix;
- (void)setYCbCrMatrix:(id)arg1;
- (void).cxx_destruct;
@end

