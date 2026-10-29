@interface OMCAutoVolumeCalculator : NSObject
{
    SharedPtr<XMFAudioAutoVolumeCalculator> _backingAutoVolumeCalculator; // +0x8
}
- (id)init;
- (id)calculateVolumeWithClipSegments:(id)arg1 baseLoudness:(double)arg2 autoVolumeLevel:(double)arg3 segmentAnalysisDuration:(double)arg4 subSegmentDuration:(double)arg5;
- (id)calculateLoudnessWithClipSegment:(id)arg1 timeRangeInMedia:(struct)arg2;
- (SharedPtr<XMFAudioAutoVolumeCalculator>)backingAutoVolumeCalculator;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

