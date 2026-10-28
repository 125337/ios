@interface WCLabSettingDetailHeaderView : UIView
{
    MMWebImageView * _iconImageView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    UIView * _lineView; // +0x20
}
+ (double)heightForLabItem:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)arg1;
- (void)initIconView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)initLineView;
- (void).cxx_destruct;
@end
