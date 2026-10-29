@interface TAVComposition : NSObject
{
    BOOL _cacheDecodedFrameAsEmptyFrame; // +0x8
    CIColor * _backgroundColor; // +0x10
    NSArray * _videoChannels; // +0x18
    NSArray * _audioChannels; // +0x20
    NSArray * _overlays; // +0x28
    NSArray * _audios; // +0x30
    id <TAVVideoComposition> _videoComposition; // +0x38
    id <TAVVideoCompositionMixer> _videoCompositionMixer; // +0x40
    CGSize _renderSize; // +0x48
    struct _frameDuration; // +0x58
}
+ (void)reloadVideoStartTimeWithProviders:(id)arg1;
+ (void)reloadAudioStartTimeWithProviders:(id)arg1;
+ (void)reloadStartTimeWithProviders:(id)arg1 transitionTime:(id /* block */)arg2;
- (struct)getTotalDuration;
- (id)init;
- (CGSize)renderSize;
- (void)setRenderSize:(CGSize)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (struct)frameDuration;
- (void)setFrameDuration:(struct)arg1;
- (BOOL)cacheDecodedFrameAsEmptyFrame;
- (void)setCacheDecodedFrameAsEmptyFrame:(BOOL)arg1;
- (id)videoChannels;
- (void)setVideoChannels:(id)arg1;
- (id)audioChannels;
- (void)setAudioChannels:(id)arg1;
- (id)overlays;
- (void)setOverlays:(id)arg1;
- (id)audios;
- (void)setAudios:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)videoCompositionMixer;
- (void)setVideoCompositionMixer:(id)arg1;
- (void).cxx_destruct;
@end
