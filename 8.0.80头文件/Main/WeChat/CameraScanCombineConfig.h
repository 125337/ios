@interface CameraScanCombineConfig : MMObject
{
    BOOL _bEnableMemoryProtection; // +0x8
    BOOL _bEnableSvrDetector; // +0x9
    BOOL _bEnableMotionDetector; // +0xa
    BOOL _bEnableRotationDetector; // +0xb
    BOOL _enableCodeFilter; // +0xc
    BOOL _bEnableClickDetection; // +0xd
    BOOL _bEnableLK; // +0xe
    BOOL _bEnableWeakIntentFilter; // +0xf
    BOOL _bEnableCenterFilter; // +0x10
    BOOL _bEnableTextReID; // +0x11
    BOOL _bEnableStrideConfig; // +0x12
    unsigned long long _mixedScanStatus; // +0x18
    long long _frameCountPerCombineGoodDetect; // +0x20
    unsigned long long _eUploadImageEncodeType; // +0x28
    double _fUploadCropRatio; // +0x30
    double _fMotionDetectorThreshold; // +0x38
    double _fRotationDetectorThreshold; // +0x40
    long long _preloadPopQueueTaskCount; // +0x48
    unsigned long long _shadowDetectSampleScore; // +0x50
    unsigned long long _debouncedStableDuration; // +0x58
    long long _clickDetectionInterval; // +0x60
    long long _commonDetectionInterval; // +0x68
    NSDictionary * _goodsModelCategory; // +0x70
    double _centerFilterHighThreshold; // +0x78
    double _centerFilterLowThreshold; // +0x80
    CameraScanModelABConfig * _modelABConfig; // +0x88
}
- (unsigned long long)mixedScanStatus;
- (void)setMixedScanStatus:(unsigned long long)arg1;
- (long long)frameCountPerCombineGoodDetect;
- (void)setFrameCountPerCombineGoodDetect:(long long)arg1;
- (BOOL)bEnableMemoryProtection;
- (void)setBEnableMemoryProtection:(BOOL)arg1;
- (unsigned long long)eUploadImageEncodeType;
- (void)setEUploadImageEncodeType:(unsigned long long)arg1;
- (double)fUploadCropRatio;
- (void)setFUploadCropRatio:(double)arg1;
- (BOOL)bEnableSvrDetector;
- (void)setBEnableSvrDetector:(BOOL)arg1;
- (BOOL)bEnableMotionDetector;
- (void)setBEnableMotionDetector:(BOOL)arg1;
- (double)fMotionDetectorThreshold;
- (void)setFMotionDetectorThreshold:(double)arg1;
- (BOOL)bEnableRotationDetector;
- (void)setBEnableRotationDetector:(BOOL)arg1;
- (double)fRotationDetectorThreshold;
- (void)setFRotationDetectorThreshold:(double)arg1;
- (long long)preloadPopQueueTaskCount;
- (void)setPreloadPopQueueTaskCount:(long long)arg1;
- (BOOL)enableCodeFilter;
- (void)setEnableCodeFilter:(BOOL)arg1;
- (unsigned long long)shadowDetectSampleScore;
- (void)setShadowDetectSampleScore:(unsigned long long)arg1;
- (unsigned long long)debouncedStableDuration;
- (void)setDebouncedStableDuration:(unsigned long long)arg1;
- (BOOL)bEnableClickDetection;
- (void)setBEnableClickDetection:(BOOL)arg1;
- (long long)clickDetectionInterval;
- (void)setClickDetectionInterval:(long long)arg1;
- (long long)commonDetectionInterval;
- (void)setCommonDetectionInterval:(long long)arg1;
- (BOOL)bEnableLK;
- (void)setBEnableLK:(BOOL)arg1;
- (BOOL)bEnableWeakIntentFilter;
- (void)setBEnableWeakIntentFilter:(BOOL)arg1;
- (id)goodsModelCategory;
- (void)setGoodsModelCategory:(id)arg1;
- (BOOL)bEnableCenterFilter;
- (void)setBEnableCenterFilter:(BOOL)arg1;
- (double)centerFilterHighThreshold;
- (void)setCenterFilterHighThreshold:(double)arg1;
- (double)centerFilterLowThreshold;
- (void)setCenterFilterLowThreshold:(double)arg1;
- (BOOL)bEnableTextReID;
- (void)setBEnableTextReID:(BOOL)arg1;
- (BOOL)bEnableStrideConfig;
- (void)setBEnableStrideConfig:(BOOL)arg1;
- (id)modelABConfig;
- (void)setModelABConfig:(id)arg1;
- (void).cxx_destruct;
@end
