@interface CameraScanCombineConfig : MMObject
{
    BOOL _bEnableMemoryProtection; // +0x8
    BOOL _bEnableSvrDetector; // +0x9
    BOOL _bEnableMotionDetector; // +0xa
    long long _frameCountPerCombineGoodDetect; // +0x10
    unsigned long long _eUploadImageEncodeType; // +0x18
    double _fUploadCropRatio; // +0x20
    double _fMotionDetectorThreshold; // +0x28
    long long _preloadPopQueueTaskCount; // +0x30
}
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
- (long long)preloadPopQueueTaskCount;
- (void)setPreloadPopQueueTaskCount:(long long)arg1;
@end

