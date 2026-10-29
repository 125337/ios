@interface MMMusicLiveSendLocationBubbleView : MMUIView
{
    MMUILabel * _hintLabel; // +0x8
    double _triangleRightMargin; // +0x10
}
- (id)init;
- (id)genPath;
- (void)setTriangleRightMargin:(double)arg1;
- (id)hintLabel;
- (void)layoutSubviews;
- (void)setHintLabel:(id)arg1;
- (double)triangleRightMargin;
- (void).cxx_destruct;
@end

