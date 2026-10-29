@interface TSKPitchDetect : NSObject
{
    unique_ptr<audiobase::dsp::PitchDetect, std::default_delete<audiobase::dsp::PitchDetect>> _pd; // +0x8
}
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2 frameSize:(unsigned long long)arg3 hopSize:(unsigned long long)arg4 enableNonRealTimeCalculation:(BOOL)arg5;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2 enableNonRealTimeCalculation:(BOOL)arg3;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2;
- (void)dealloc;
- (void)process:(const short *)arg1 bufLen:(unsigned long long)arg2 timestamp:(float)arg3;
- (id)pitchs;
- (void)seek:(unsigned long long)arg1;
- (void)startTask;
- (void)stopTask;
- (id)nonRealTimePitchs;
- (id)nonRealTimePitchsAligned5Ms;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

