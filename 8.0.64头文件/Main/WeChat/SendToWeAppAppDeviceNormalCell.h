@interface SendToWeAppAppDeviceNormalCell : MMTableViewCell
{
    BOOL _isPromotionApp; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    UIView * _bottomLineView; // +0x20
    UIImage * _icon; // +0x28
    UIImageView * _cornerImageView; // +0x30
    UIImageView * _weappIconCircle; // +0x38
    NSString * _title; // +0x40
    MMUILabel * _weappTypeLabel; // +0x48
    long long _cornerStyle; // +0x50
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)initUI;
- (void)resetUI;
- (void)configWithItem:(id)arg1 needBottomLine:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateCornerMask;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)cornerImageView;
- (void)setCornerImageView:(id)arg1;
- (id)weappIconCircle;
- (void)setWeappIconCircle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)weappTypeLabel;
- (void)setWeappTypeLabel:(id)arg1;
- (BOOL)isPromotionApp;
- (void)setIsPromotionApp:(BOOL)arg1;
- (long long)cornerStyle;
- (void)setCornerStyle:(long long)arg1;
- (void).cxx_destruct;
@end
