@interface MAVExportOptionalParam : NSObject
{
    BOOL _useHevcEncode; // +0x8
    BOOL _useHDREncode; // +0x9
    BOOL _useSoftHEVCEncode; // +0xa
    BOOL _useSoftEncNewThreadsControl; // +0xb
    BOOL _useHDRToSDR; // +0xc
    BOOL _keepsProcessInBackground; // +0xd
    int _vcodec2Preset; // +0x10
    float _crf; // +0x14
    int _vbvBufferSize; // +0x18
    int _bitrateUp; // +0x1c
    int _bitrateDown; // +0x20
    id <TAVSourceSoftEncoderFactory> _encoderFactory; // +0x28
}
- (BOOL)isUseHevcEncode;
- (void)setUseHevcEncode:(BOOL)arg1;
- (BOOL)isUseHDREncode;
- (void)setUseHDREncode:(BOOL)arg1;
- (BOOL)isUseSoftHEVCEncode;
- (void)setUseSoftHEVCEncode:(BOOL)arg1;
- (BOOL)useSoftEncNewThreadsControl;
- (void)setUseSoftEncNewThreadsControl:(BOOL)arg1;
- (int)vcodec2Preset;
- (void)setVcodec2Preset:(int)arg1;
- (float)crf;
- (void)setCrf:(float)arg1;
- (int)vbvBufferSize;
- (void)setVbvBufferSize:(int)arg1;
- (int)bitrateUp;
- (void)setBitrateUp:(int)arg1;
- (int)bitrateDown;
- (void)setBitrateDown:(int)arg1;
- (BOOL)isUseHDRToSDR;
- (void)setUseHDRToSDR:(BOOL)arg1;
- (id)encoderFactory;
- (void)setEncoderFactory:(id)arg1;
- (BOOL)keepsProcessInBackground;
- (void)setKeepsProcessInBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end

