@interface WCMusicFooterNoMoreView : UIView
{
    UIView * _leftLine; // +0x8
    UIView * _rightLine; // +0x10
    UIView * _centerDot; // +0x18
    CGSize _lineSize; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)generateLineView;
- (id)leftLine;
- (id)rightLine;
- (id)centerDot;
- (void)setLeftLine:(id)arg1;
- (void)setRightLine:(id)arg1;
- (void)setCenterDot:(id)arg1;
- (CGSize)lineSize;
- (void)setLineSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
