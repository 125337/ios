@interface MMLocationUISearchBar : MMUISearchBar
{
    UIColor * _fieldBackgroundColor; // +0x10
    double _fieldCornerRadius; // +0x18
    UIView * _fieldBackgroundView; // +0x20
}
+ (id)textFont;
+ (CGSize)searchIconSize;
+ (double)searchIconExtraLength;
- (id)initWithFrame:(CGRect)arg1;
- (void)setLocationFieldBackgroundColor:(id)arg1;
- (void)setLocationFieldCornerRadius:(double)arg1;
- (void)setPlaceHolderIconColor:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)p_layoutFieldBackgroundView;
- (void)p_restoreTextFontIfNeeded;
- (void)p_applyDynamicSearchIcon;
- (id)fieldBackgroundColor;
- (void)setFieldBackgroundColor:(id)arg1;
- (double)fieldCornerRadius;
- (void)setFieldCornerRadius:(double)arg1;
- (id)fieldBackgroundView;
- (void)setFieldBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
