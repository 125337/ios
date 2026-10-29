@interface MMFinderLiveShopShelfMainTableHeaderItemView : UIView
{
    MMWebImageView * _mainIcon; // +0x8
    UILabel * _titleLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)mainIconSize;
- (double)contentHeight;
- (double)preferredHeight;
- (UIEdgeInsets)actionButtonInsetsForSingleColumn:(BOOL)arg1;
- (CGSize)actionButtonSizeForContentSize:(CGSize)arg1 singleColumn:(BOOL)arg2;
- (double)actionButtonMaxWidthFromContentLeft:(double)arg1 spacing:(double)arg2 singleColumn:(BOOL)arg3;
- (id)mainIcon;
- (void)setMainIcon:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
