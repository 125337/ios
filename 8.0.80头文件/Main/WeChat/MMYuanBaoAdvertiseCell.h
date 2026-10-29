@interface MMYuanBaoAdvertiseCell : MMTableViewCell
{
    NSObject<MMYuanBaoAdvertiseCellDelegate> * _delegate; // +0x8
    NSString * _iconUrl; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    MMUIButton * _adButton; // +0x30
    UIButton * _closeButton; // +0x38
    UIImageView * _poparrowImageView; // +0x40
    NSDictionary * _reportParams; // +0x48
    MMImageView * _iconNamePostfix; // +0x50
}
+ (double)getCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)updateStatus;
- (void)layoutSubviews;
- (void)adButtonTapped;
- (void)setCloseButtonHidden:(BOOL)arg1;
- (void)closeButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
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
- (id)iconNamePostfix;
- (void)setIconNamePostfix:(id)arg1;
- (void).cxx_destruct;
@end
