@interface MMMultiSelectContactsJumpAppBannerView : MMUIView
{
    UIView * _contentView; // +0x8
    MMWebImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _contentLabel; // +0x20
    UIImageView * _arrowView; // +0x28
    NSString * _defaultIconImageName; // +0x30
}
+ (id)titleLabelFont;
+ (id)contentLabelFont;
+ (double)heightForViewWithWidth:(double)arg1 title:(id)arg2 andContent:(id)arg3;
- (void)updateViewWithTitle:(id)arg1 content:(id)arg2 iconUrlString:(id)arg3 andIconDefaultName:(id)arg4;
- (void)layoutSubviews;
- (void)updateForIlink;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)defaultIconImageName;
- (void)setDefaultIconImageName:(id)arg1;
- (void).cxx_destruct;
@end

