@interface WAStarCollectionViewLayoutAnimateConfig : NSObject
{
    BOOL _preventAniamteBack; // +0x8
    CGPoint _animatePos; // +0x10
}
- (CGPoint)animatePos;
- (void)setAnimatePos:(CGPoint)arg1;
- (BOOL)preventAniamteBack;
- (void)setPreventAniamteBack:(BOOL)arg1;
@end

