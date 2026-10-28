@interface TAVEmptyAudioTransition : NSObject <TAVAudioTransition>
{
    NSString * _identifier; // +0x8
    struct _duration; // +0x10
}
- (id)init;
- (id)initWithDuration:(struct)arg1;
- (void)applyNextAudioMixInputParameters:(id)arg1 timeRange:(struct)arg2;
- (void)applyPreviousAudioMixInputParameters:(id)arg1 timeRange:(struct)arg2;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (struct)duration;
- (void)setDuration:(struct)arg1;
- (void).cxx_destruct;
@end
