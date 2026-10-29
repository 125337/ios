@interface TAVKeyframeVideoConfiguration : NSObject <TAVVideoComposition>
{
    NSMutableArray * _keyframes; // +0x8
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (void)insertKeyframe:(id)arg1;
- (void)removeKeyframe:(id)arg1;
- (void)removeAllKeyframes;
- (void)removeKeyframesInTimeRange:(struct)arg1;
- (id)keyframes;
- (void)setKeyframes:(id)arg1;
- (void).cxx_destruct;
@end

