@interface TSTrackedTapItem : TSTrackedSlideItem
{
    CGRect _rect; // +0x8
}
- (id)initWithTouches:(id)arg1 rectage:(CGRect)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (CGPoint)pointRangeOnView;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
@end
