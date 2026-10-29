@interface FavCheckBox : UIView
{
    BOOL _selected; // +0x8
    BOOL _usesNewStyle; // +0x9
    BOOL _overlay; // +0xa
    UIImageView * _imageView; // +0x10
    CGSize _renderedSize; // +0x18
}
+ (id)checkBoxWithSize:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setUsesNewStyle:(BOOL)arg1;
- (void)setOverlay:(BOOL)arg1;
- (void)refreshImage;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)isSelected;
- (BOOL)usesNewStyle;
- (BOOL)overlay;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (CGSize)renderedSize;
- (void)setRenderedSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
