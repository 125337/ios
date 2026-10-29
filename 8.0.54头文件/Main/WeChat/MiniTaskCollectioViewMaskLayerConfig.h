@interface MiniTaskCollectioViewMaskLayerConfig : NSObject
{
    double _cornerRadius; // +0x8
    CGRect _leftRect; // +0x10
    CGRect _rightRect; // +0x30
    CGRect _middleRect; // +0x50
    CGRect _outerFrame; // +0x70
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
@end

