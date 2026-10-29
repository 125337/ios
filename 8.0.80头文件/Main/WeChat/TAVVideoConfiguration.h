@interface TAVVideoConfiguration : NSObject <TAVVideoComposition, NSCopying>
{
    unsigned long long _contentMode; // +0x8
    id <TAVVideoComposition> _effect; // +0x10
    CGRect _frame; // +0x18
    CGAffineTransform _transform; // +0x38
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (unsigned long long)contentMode;
- (void)setContentMode:(unsigned long long)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (CGAffineTransform)transform;
- (void)setTransform:(CGAffineTransform)arg1;
- (id)effect;
- (void)setEffect:(id)arg1;
- (void).cxx_destruct;
@end
