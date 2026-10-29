@interface QMCBaseAnnotation : QPointAnnotation
{
    BOOL _invisible; // +0x8
    int _zIndex; // +0xc
    NSString * _identifier; // +0x10
    UIImage * _iconImage; // +0x18
    double _width; // +0x20
    double _height; // +0x28
    NSString * _routeName; // +0x30
    CGPoint _anchor; // +0x38
}
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (CGPoint)anchor;
- (void)setAnchor:(CGPoint)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (BOOL)invisible;
- (void)setInvisible:(BOOL)arg1;
- (id)routeName;
- (void)setRouteName:(id)arg1;
- (void).cxx_destruct;
@end
