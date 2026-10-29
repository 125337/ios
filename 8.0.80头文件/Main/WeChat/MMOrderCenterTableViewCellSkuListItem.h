@interface MMOrderCenterTableViewCellSkuListItem : UIView
{
    SkuInfo * _skuInfo; // +0x8
    MMCustomerOrderInfo * _order; // +0x10
    MMWebImageView * _imageView; // +0x18
    NSArray * _tagViews; // +0x20
    NSArray * _featureViews; // +0x28
    UILabel * _nameView; // +0x30
    UILabel * _attributeView; // +0x38
    UILabel * _priceView; // +0x40
    UILabel * _countView; // +0x48
    UILabel * _statusView; // +0x50
    UILabel * _deliveryInfoView; // +0x58
}
+ (double)imageHeight;
+ (CGSize)imageTagSize;
+ (double)tagHeight;
+ (double)nameLineHeight;
+ (id)nameFont;
+ (id)textTagFont;
+ (double)attributeViewHeight;
+ (double)deliveryInfoViewHeight;
+ (id)statusFont;
+ (id)priceFont;
+ (id)countFont;
+ (id)nameAttributedStringForName:(id)arg1 width:(double)arg2 tagsWidth:(double)arg3;
+ (double)preferHeightForSkuInfo:(id)arg1 order:(id)arg2 width:(double)arg3;
+ (double)widthOfOrderLabels:(id)arg1 maxWidth:(double)arg2;
+ (id)nameViewTextForSkuInfo:(id)arg1;
+ (id)countWordingForSkuInfo:(id)arg1;
+ (id)priceWordingForSkuInfo:(id)arg1 order:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)rightForLayoutTags:(id)arg1 left:(double)arg2 maxRight:(double)arg3 spacing:(double)arg4 centerY:(double)arg5;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)viewsOfOrderLabels:(id)arg1;
- (void)useTagViews:(id)arg1;
- (void)useFeatureViews:(id)arg1;
- (void)updateWithSkuInfo:(id)arg1 order:(id)arg2;
- (BOOL)isAccessibilityElement;
- (id)skuInfo;
- (void)setSkuInfo:(id)arg1;
- (id)order;
- (void)setOrder:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)tagViews;
- (void)setTagViews:(id)arg1;
- (id)featureViews;
- (void)setFeatureViews:(id)arg1;
- (id)nameView;
- (void)setNameView:(id)arg1;
- (id)attributeView;
- (void)setAttributeView:(id)arg1;
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (id)countView;
- (void)setCountView:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)deliveryInfoView;
- (void)setDeliveryInfoView:(id)arg1;
- (void).cxx_destruct;
@end
