@interface OMJCoverSnapshotOptions : NSObject
{
    int _sampleRate; // +0x8
    float _darknessRatioThreshold; // +0xc
    float _clarityThreshold; // +0x10
    struct _maxDuration; // +0x14
}
- (id)init;
- (id)initWithSampleRate:(int)arg1 maxDuration:(struct)arg2 darknessRatioThreshold:(float)arg3;
- (id)initWithSampleRate:(int)arg1 maxDuration:(struct)arg2;
- (id)initWithSampleRate:(int)arg1 maxDuration:(struct)arg2 darknessRatioThreshold:(float)arg3 clarityThreshold:(float)arg4;
- (id)description;
- (int)sampleRate;
- (struct)maxDuration;
- (float)darknessRatioThreshold;
- (float)clarityThreshold;
@end

