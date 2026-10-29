@interface TAVClip : NSObject <TAVTransitionableVideo, TAVTransitionableAudio, NSCopying>
{
    NSString * _identifier; // +0x8
    TAVResource * _resource; // +0x10
    TAVVideoConfiguration * _videoConfiguration; // +0x18
    TAVAudioConfiguration * _audioConfiguration; // +0x20
    TAVTransition * _transition; // +0x28
    struct _startTime; // +0x30
    struct _duration; // +0x48
}
- (void)setUserData:(id)arg1;
- (id)userData;
- (id)initWithAsset:(id)arg1;
- (id)initWithImage:(id)arg1 duration:(struct)arg2;
- (id)initWithEmptyDuration:(struct)arg1;
- (id)initEmptyVideoWithDuration:(struct)arg1;
- (id)initEmptyAudioWithDuration:(struct)arg1;
- (id)makeFullRangeCopy;
- (id)init;
- (id)initWithResource:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setStartTime:(struct)arg1;
- (struct)duration;
- (struct)timeRange;
- (unsigned long long)numberOfVideoTracks;
- (id)videoCompositionTrackForComposition:(id)arg1 atIndex:(long long)arg2;
- (id)sourceImageAtTime:(struct)arg1 renderSize:(CGSize)arg2;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (id)videoTransition;
- (unsigned long long)numberOfAudioTracks;
- (id)audioCompositionTrackForComposition:(id)arg1 atIndex:(long long)arg2;
- (id)audioTransition;
- (void)configureWithAudioMixParameters:(id)arg1;
- (void)applyEffectToBufferListInOut:(AudioBufferList *)arg1 renderInfo:(id)arg2;
- (BOOL)shouldDiscardCurrentItem;
- (id)debugDescription;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)resource;
- (void)setResource:(id)arg1;
- (id)videoConfiguration;
- (void)setVideoConfiguration:(id)arg1;
- (id)audioConfiguration;
- (void)setAudioConfiguration:(id)arg1;
- (struct)startTime;
- (void)setDuration:(struct)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (void).cxx_destruct;
@end
