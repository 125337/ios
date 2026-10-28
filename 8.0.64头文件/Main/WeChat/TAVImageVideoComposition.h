@interface TAVImageVideoComposition : NSObject <TAVVideoComposition, NSCopying>
{
    TAVImageResource * _resource; // +0x8
    TAVVideoConfiguration * _videoConfiguration; // +0x10
    struct _startTime; // +0x18
}
+ (id)imageVideoCompositionWithImage:(id)arg1 duration:(struct)arg2;
- (id)init;
- (id)initWithResource:(id)arg1;
- (struct)duration;
- (struct)timeRange;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)debugDescription;
- (id)resource;
- (void)setResource:(id)arg1;
- (id)videoConfiguration;
- (void)setVideoConfiguration:(id)arg1;
- (struct)startTime;
- (void)setStartTime:(struct)arg1;
- (void).cxx_destruct;
@end
