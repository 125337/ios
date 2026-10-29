@interface TextStateSectionView : UIView
{
    CGSize _respondSize; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGSize)respondSize;
- (void)setRespondSize:(CGSize)arg1;
@end

