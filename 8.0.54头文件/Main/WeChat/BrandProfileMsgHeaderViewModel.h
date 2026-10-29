@interface BrandProfileMsgHeaderViewModel : BrandProfileMsgBaseViewModel
{
    NSMutableArray * _titleLabelStyles; // +0x10
    CGSize _titleSize; // +0x18
}
- (id)tableViewCellClassName;
- (double)calCellHeight;
- (unsigned long long)headerType;
- (double)titleHeight;
- (double)titleTopPadding;
- (double)titleBottomPadding;
- (id)titleStr;
- (id)titleFont;
- (void)onUnfold;
- (id)titleLabelStyles;
- (void)setTitleLabelStyles:(id)arg1;
- (CGSize)titleSize;
- (void)setTitleSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

