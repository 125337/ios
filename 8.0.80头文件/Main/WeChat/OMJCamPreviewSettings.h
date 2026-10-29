@interface OMJCamPreviewSettings : NSObject
{
    BOOL _shouldEnableImageSeqPrefetch; // +0x8
    BOOL _shouldUseEchoCancellation; // +0x9
    BOOL _shouldUseAIGCBridgeService; // +0xa
    BOOL _shouldEnableAsyncAIGC; // +0xb
    BOOL _shouldForceUseDimensionLevel; // +0xc
    BOOL _shouldUseLongSide1920Policy; // +0xd
    float _lensDirtyCheckThreshold; // +0x10
    unsigned long long _dimensionLevel; // +0x18
    OMJCamLyricsStyle * _defaultLyricsStyle; // +0x20
    double _aigcGeneratingTimeout; // +0x28
    OMJCaptureSession * _captureSession; // +0x30
    unsigned long long _forceUsedDimensionLevel; // +0x38
    OMJAspectRatio * _defaultAspectRatioInfo; // +0x40
}
- (id)initWithDimensionLevel:(unsigned long long)arg1;
- (void)setAspectRatioFromWidth:(int)arg1 height:(int)arg2;
- (void)setAspectRatioFromType:(unsigned long long)arg1;
- (unsigned long long)dimensionLevel;
- (BOOL)shouldEnableImageSeqPrefetch;
- (void)setShouldEnableImageSeqPrefetch:(BOOL)arg1;
- (BOOL)shouldUseEchoCancellation;
- (void)setShouldUseEchoCancellation:(BOOL)arg1;
- (id)defaultLyricsStyle;
- (void)setDefaultLyricsStyle:(id)arg1;
- (double)aigcGeneratingTimeout;
- (void)setAigcGeneratingTimeout:(double)arg1;
- (BOOL)shouldUseAIGCBridgeService;
- (void)setShouldUseAIGCBridgeService:(BOOL)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (float)lensDirtyCheckThreshold;
- (void)setLensDirtyCheckThreshold:(float)arg1;
- (BOOL)shouldEnableAsyncAIGC;
- (void)setShouldEnableAsyncAIGC:(BOOL)arg1;
- (BOOL)shouldForceUseDimensionLevel;
- (void)setShouldForceUseDimensionLevel:(BOOL)arg1;
- (unsigned long long)forceUsedDimensionLevel;
- (void)setForceUsedDimensionLevel:(unsigned long long)arg1;
- (BOOL)shouldUseLongSide1920Policy;
- (void)setShouldUseLongSide1920Policy:(BOOL)arg1;
- (id)defaultAspectRatioInfo;
- (void).cxx_destruct;
@end
