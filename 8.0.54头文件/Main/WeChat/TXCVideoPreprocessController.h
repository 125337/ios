@interface TXCVideoPreprocessController : TXCVideoBindableSerialGroup <TXCGSensorDelegate, TXCVideoPreprocessSupervisorDelegate, TXIVideoPreprocessInterface>
{
    id <TXCVideoPreprocessControllerDelegate> _delegate; // +0x8
    TXCGSensor * _gSensor; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCVideoPreprocessConfig * _config; // +0x20
    id <TXIGlContext> _glContext; // +0x28
    TXCYuvToRgbFilter * _yuvToRgbFilter; // +0x30
    TXCBeautifyFilter * _beautifyFilter; // +0x38
    TXCCustomProcessor * _customFilter; // +0x40
    TXCTransformFilter * _encodeTransformFilter; // +0x48
    id <TXIVideoBindable> _localRenderFilter; // +0x50
    id <TXIVideoBindable> _customRenderFilter; // +0x58
    TXCRgbToYuvFilter * _rgbToYuvFilter; // +0x60
    TXCImageBlendFilter * _watermark; // +0x68
    TXCLookupFilter * _lutFilter; // +0x70
    TXCRoiRegionTransformFilter * _roiRegionTransformFilter; // +0x78
    TXCVideoPreprocessSupervisor * _supervisor; // +0x80
}
- (id)initWithQueue:(id)arg1 context:(id)arg2;
- (void)setupFilters;
- (void)updateInputForSupervisor:(id)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (void)setEncoderFeatures:(unsigned long long)arg1;
- (void)setLocalRenderer:(id)arg1;
- (void)setCustomRenderer:(id)arg1;
- (void)setOutputResolution:(CGSize)arg1;
- (void)setCustomPreprocessResolution:(id)arg1;
- (void)enableOutputMirror:(BOOL)arg1;
- (void)setOutputRotation:(unsigned long long)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)setOutputFormat:(unsigned long long)arg1;
- (void)setCustomPreprocess:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setBeautifyStyle:(unsigned long long)arg1;
- (void)setBeautyLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setRuddinessLevel:(float)arg1;
- (void)setEnableSharpnessEnhancement:(BOOL)arg1;
- (void)setImageFilterImage:(id)arg1;
- (void)setImageFilterStrength:(float)arg1;
- (void)setImageFilterLeftImage:(id)arg1 leftStrength:(float)arg2 rightImage:(id)arg3 rightStrength:(float)arg4 leftRatio:(float)arg5;
- (void)setWatermark:(id)arg1 atRect:(CGRect)arg2;
- (void)setRoiConfig:(id)arg1 shouldSkipRoiRegionTransform:(BOOL)arg2;
- (void)enableRoiEncoding:(BOOL)arg1;
- (void)setupStreamLine;
- (void)gSensor:(id)arg1 onRotationChange:(unsigned long long)arg2 isViewInLandscape:(BOOL)arg3;
- (BOOL)fixValue:(float *)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (void)updateInputRatio:(CGSize)arg1;
- (void)preprocessSupervisorDidUpdateStrategy;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)gSensor;
- (void)setGSensor:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (id)yuvToRgbFilter;
- (void)setYuvToRgbFilter:(id)arg1;
- (id)beautifyFilter;
- (void)setBeautifyFilter:(id)arg1;
- (id)customFilter;
- (void)setCustomFilter:(id)arg1;
- (id)encodeTransformFilter;
- (void)setEncodeTransformFilter:(id)arg1;
- (id)localRenderFilter;
- (void)setLocalRenderFilter:(id)arg1;
- (id)customRenderFilter;
- (void)setCustomRenderFilter:(id)arg1;
- (id)rgbToYuvFilter;
- (void)setRgbToYuvFilter:(id)arg1;
- (id)watermark;
- (void)setWatermark:(id)arg1;
- (id)lutFilter;
- (void)setLutFilter:(id)arg1;
- (id)roiRegionTransformFilter;
- (void)setRoiRegionTransformFilter:(id)arg1;
- (id)supervisor;
- (void).cxx_destruct;
@end

