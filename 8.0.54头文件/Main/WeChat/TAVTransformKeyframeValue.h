@interface TAVTransformKeyframeValue : NSObject <TAVKeyframeValue>
{
    float _scale; // +0x8
    float _rotation; // +0xc
    CGPoint _translation; // +0x10
}
+ (id)applyEffectToSourceImage:(id)arg1 param:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (float)scale;
- (void)setScale:(float)arg1;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (CGPoint)translation;
- (void)setTranslation:(CGPoint)arg1;
@end

