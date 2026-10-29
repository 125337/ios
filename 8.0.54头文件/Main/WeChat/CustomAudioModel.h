@interface CustomAudioModel : NSObject
{
    double _Time; // +0x8
    NSString * _EventType; // +0x10
    NSString * _EventWaveformPath; // +0x18
    NSArray * _EventParameters; // +0x20
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (double)Time;
- (void)setTime:(double)arg1;
- (id)EventType;
- (void)setEventType:(id)arg1;
- (id)EventWaveformPath;
- (void)setEventWaveformPath:(id)arg1;
- (id)EventParameters;
- (void)setEventParameters:(id)arg1;
- (void).cxx_destruct;
@end

