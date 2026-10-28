@interface MJDashLine : MMUIView
{
    BOOL _isVertical; // +0x8
}
+ (Class)layerClass;
+ (id)verticalLine;
+ (id)horizontalLine;
- (id)initWithFrame:(CGRect)arg1 isVertical:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setLineDashPattern:(id)arg1;
- (id)lineDashPattern;
- (void)setDashColor:(id)arg1;
- (void)setDashColor:(id)arg1 animated:(BOOL)arg2;
- (id)dashColor;
- (BOOL)isVertical;
@end
