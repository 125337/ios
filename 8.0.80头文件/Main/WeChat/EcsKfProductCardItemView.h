@interface EcsKfProductCardItemView : UIControl
{
    EcsKfProductInfo * _productInfo; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    EcsRichTextLabel * _titleLabel; // +0x18
    EcsTagsView * _guaranteeTagsView; // +0x20
    MMEcsPriceView * _priceView; // +0x28
    UIView * _highlightMaskView; // +0x30
    unsigned long long _highlightToken; // +0x38
    CGSize _lastBindSize; // +0x40
}
+ (double)itemHeight;
+ (id)priceViewConfig;
+ (id)productShareItemWithProductInfo:(id)arg1;
+ (id)defaultTitleRichLabelWithTitle:(id)arg1;
+ (id)showBoxTagWithItems:(id)arg1;
+ (id)guaranteeInfoFromShowBoxItem:(id)arg1;
+ (id)stringValueFromJSON:(id)arg1 key:(id)arg2;
+ (id)colorStringFromBackendRgba:(id)arg1 fallback:(id)arg2;
+ (id)defaultGuaranteeTagWithProductInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)bindProductInfo:(id)arg1;
- (void)prepareForReuse;
- (id)accessibilityLabelForProductInfo:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)guaranteeTagsView;
- (void)setGuaranteeTagsView:(id)arg1;
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (unsigned long long)highlightToken;
- (void)setHighlightToken:(unsigned long long)arg1;
- (CGSize)lastBindSize;
- (void)setLastBindSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
