@interface MJVolumeAnalysisResult : NSObject
{
    BOOL _isLowLoudness; // +0x8
    double _loudnessDecibel; // +0x10
}
- (id)initWithIsLowLoudness:(BOOL)arg1 loudnessDecibel:(double)arg2;
- (id)description;
- (BOOL)isLowLoudness;
- (double)loudnessDecibel;
@end
