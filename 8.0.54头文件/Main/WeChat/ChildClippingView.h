@interface ChildClippingView : UIView
{
    NSArray * _filters; // +0x8
    NSMutableArray * _backdropFilterSubviews; // +0x10
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)applyBlurBackdropFilters:(id)arg1;
- (void)dealloc;
- (id)backdropFilterSubviews;
- (id)filters;
- (void)setFilters:(id)arg1;
- (void)setBackdropFilterSubviews:(id)arg1;
@end

