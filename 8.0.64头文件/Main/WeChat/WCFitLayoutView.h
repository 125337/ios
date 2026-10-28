@interface WCFitLayoutView : UIView
{
    MMWebImageView * _leftImageView; // +0x8
    UILabel * _rightLabel; // +0x10
    double _maxWidth; // +0x18
    long long _layoutType; // +0x20
}
- (id)initLeftImageRightTitle;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)leftImageView;
- (id)rightLabel;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (long long)layoutType;
- (void)setLayoutType:(long long)arg1;
- (void).cxx_destruct;
@end
