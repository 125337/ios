@interface TAVSourceExportVideoConfiguration : NSObject
{
    BOOL _useHDRToSDR; // +0x8
    BOOL _useSoftEncNewThreadsControl; // +0x9
    int _bitrateUp; // +0xc
    int _bitrateDown; // +0x10
    int _vcodec2Preset; // +0x14
    float _crf; // +0x18
    int _vbvBufferSize; // +0x1c
    NSDictionary * _inputSettings; // +0x20
    unsigned long long _averageBitRate; // +0x28
    double _frameRate; // +0x30
    NSString * _videoProfileLevel; // +0x38
    TAVSourceExportColorProperties * _colorProperties; // +0x40
    TAVSoftEncodingColorProperties * _softEncColorProperties; // +0x48
    NSDictionary * _videoOutputSetting; // +0x50
    CGSize _videoSize; // +0x58
}
- (id)init;
- (id)makeOutputSetting;
- (id)inputSettings;
- (void)setInputSettings:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (unsigned long long)averageBitRate;
- (void)setAverageBitRate:(unsigned long long)arg1;
- (double)frameRate;
- (void)setFrameRate:(double)arg1;
- (id)videoProfileLevel;
- (void)setVideoProfileLevel:(id)arg1;
- (id)colorProperties;
- (void)setColorProperties:(id)arg1;
- (id)softEncColorProperties;
- (void)setSoftEncColorProperties:(id)arg1;
- (int)bitrateUp;
- (void)setBitrateUp:(int)arg1;
- (int)bitrateDown;
- (void)setBitrateDown:(int)arg1;
- (BOOL)useHDRToSDR;
- (void)setUseHDRToSDR:(BOOL)arg1;
- (BOOL)useSoftEncNewThreadsControl;
- (void)setUseSoftEncNewThreadsControl:(BOOL)arg1;
- (int)vcodec2Preset;
- (void)setVcodec2Preset:(int)arg1;
- (float)crf;
- (void)setCrf:(float)arg1;
- (int)vbvBufferSize;
- (void)setVbvBufferSize:(int)arg1;
- (id)videoOutputSetting;
- (void)setVideoOutputSetting:(id)arg1;
- (void).cxx_destruct;
@end

