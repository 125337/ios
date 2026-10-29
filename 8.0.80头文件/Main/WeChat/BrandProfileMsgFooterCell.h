@interface BrandProfileMsgFooterCell : BrandProfileMsgBaseCell
{
    MMUILabel * _label; // +0x8
    UIImageView * _iconImgView; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (void).cxx_destruct;
@end
