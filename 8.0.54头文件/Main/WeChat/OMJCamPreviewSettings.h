@interface OMJCamPreviewSettings : NSObject
{
    BOOL _shouldEnableImageSeqPrefetch; // +0x8
    BOOL _shouldUseEchoCancellation; // +0x9
    float _lensDirtyCheckThreshold; // +0xc
    unsigned long long _dimensionLevel; // +0x10
    OMJCamLyricsStyle * _defaultLyricsStyle; // +0x18
    double _aigcGeneratingTimeout; // +0x20
    OMJCaptureSession * _captureSession; // +0x28
}
- (id)initWithDimensionLevel:(unsigned long long)arg1;
- (unsigned long long)dimensionLevel;
- (BOOL)shouldEnableImageSeqPrefetch;
- (void)setShouldEnableImageSeqPrefetch:(BOOL)arg1;
- (BOOL)shouldUseEchoCancellation;
- (void)setShouldUseEchoCancellation:(BOOL)arg1;
- (id)defaultLyricsStyle;
- (void)setDefaultLyricsStyle:(id)arg1;
- (double)aigcGeneratingTimeout;
- (void)setAigcGeneratingTimeout:(double)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (float)lensDirtyCheckThreshold;
- (void)setLensDirtyCheckThreshold:(float)arg1;
- (void).cxx_destruct;
@end

