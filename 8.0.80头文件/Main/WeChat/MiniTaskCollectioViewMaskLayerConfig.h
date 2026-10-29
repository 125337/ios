@interface MiniTaskCollectioViewMaskLayerConfig : NSObject
{
    double _cornerRadius; // +0x8
    NSArray * _topRowRects; // +0x10
    CGRect _leftRect; // +0x18
    CGRect _rightRect; // +0x38
    CGRect _middleRect; // +0x58
    CGRect _outerFrame; // +0x78
}
- (CGRect)leftRect;
- (void)setLeftRect:(CGRect)arg1;
- (CGRect)rightRect;
- (void)setRightRect:(CGRect)arg1;
- (CGRect)middleRect;
- (void)setMiddleRect:(CGRect)arg1;
- (CGRect)outerFrame;
- (void)setOuterFrame:(CGRect)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)topRowRects;
- (void)setTopRowRects:(id)arg1;
- (void).cxx_destruct;
@end
