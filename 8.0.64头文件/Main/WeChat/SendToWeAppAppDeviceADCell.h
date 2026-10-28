@interface SendToWeAppAppDeviceADCell : MMTableViewCell
{
    NSString * _desc; // +0x8
    NSString * _title; // +0x10
    MagicAdInfo * _adInfo; // +0x18
    NSObject<SendToWeAppAppDeviceADCellDelegate> * _delegate; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
    UIImageView * _iconImageView; // +0x38
    MMUIButton * _adButton; // +0x40
    UIButton * _closeButton; // +0x48
    UIImageView * _poparrowImageView; // +0x50
    NSDictionary * _reportParams; // +0x58
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (void)adButtonTapped;
- (void)setCloseButtonHidden:(BOOL)arg1;
- (void)closeButtonTapped;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)adButton;
- (void)setAdButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)poparrowImageView;
- (void)setPoparrowImageView:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end
