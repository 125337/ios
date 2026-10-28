@interface MMFinderLiveShopShelfTipsView : MMRectTriangleArrowView
{
    MMFinderLiveShopShelfHintInfo * _info; // +0x8
    UILabel * _label; // +0x10
    MMWebImageView * _imageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2;
- (void)layoutSubviews;
- (void)setInfo:(id)arg1;
- (CGSize)imageSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (double)selfCornerRadius;
- (id)info;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
