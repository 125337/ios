@interface OMCAudioWaveformProvider : NSObject
{
    OMCClipSegment * _clipSegment; // +0x8
}
- (id)initWithClipSegment:(id)arg1;
- (void)updateSampleRate:(float)arg1 forChannel:(int)arg2;
- (void)updateSampleCount:(int)arg1 forChannel:(int)arg2;
- (BOOL)fetchWaveform:(void *)arg1 startIndex:(int *)arg2 timeRange:(struct)arg3 forChannel:(int)arg4;
- (void).cxx_destruct;
@end

