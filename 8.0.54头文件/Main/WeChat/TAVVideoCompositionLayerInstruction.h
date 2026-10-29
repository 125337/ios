@interface TAVVideoCompositionLayerInstruction : NSObject <TAVVideoComposition>
{
    int _trackID; // +0x8
    id <TAVVideoCompositionTrack> _imageSourceProvider; // +0x10
    id <TAVVideoComposition> _videoComposition; // +0x18
    id <TAVVideoTransition> _transition; // +0x20
    struct _timeRange; // +0x28
    CGAffineTransform _prefferdTransform; // +0x58
}
- (id)init;
- (id)initWithTrackID:(int)arg1 videoComposition:(id)arg2;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (int)trackID;
- (void)setTrackID:(int)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (CGAffineTransform)prefferdTransform;
- (void)setPrefferdTransform:(CGAffineTransform)arg1;
- (id)imageSourceProvider;
- (void)setImageSourceProvider:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (void).cxx_destruct;
@end

