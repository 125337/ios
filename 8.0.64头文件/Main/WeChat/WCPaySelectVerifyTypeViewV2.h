@interface WCPaySelectVerifyTypeViewV2 : UIView
{
    id <WCPaySelectVerifyTypeViewV2Delegate> _m_delegate; // +0x8
    UIView * _baseGrowView; // +0x10
    UIView * _growView; // +0x18
    UIView * _headerView; // +0x20
    UIImageView * _iconImageView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _descLabel; // +0x38
    UIView * _footerView; // +0x40
    UIButton * _nextButton; // +0x48
    UIButton * _footerTipsView; // +0x50
    UIImageView * _footerTipsIcon; // +0x58
    UIButton * _footerTipsButton; // +0x60
    UIImageView * _footerTipsArrowIcon; // +0x68
    long long _guideType; // +0x70
    GetRealnameWordingRsp * _wording; // +0x78
    double _minHeight; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithGuideType:(long long)arg1 wordingResp:(id)arg2 minHeight:(double)arg3 delegate:(id)arg4;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateIconImageView;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateFooterView;
- (void)updateNextButton;
- (void)updateFooterTipsView;
- (void)updateFooterTipsIcon;
- (void)updateFooterTipsButton;
- (void)updateFooterTipsArrowIcon;
- (void)clickSafeTips;
- (void)onClickNextButton;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)baseGrowView;
- (void)setBaseGrowView:(id)arg1;
- (id)growView;
- (void)setGrowView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (id)footerTipsView;
- (void)setFooterTipsView:(id)arg1;
- (id)footerTipsIcon;
- (void)setFooterTipsIcon:(id)arg1;
- (id)footerTipsButton;
- (void)setFooterTipsButton:(id)arg1;
- (id)footerTipsArrowIcon;
- (void)setFooterTipsArrowIcon:(id)arg1;
- (long long)guideType;
- (void)setGuideType:(long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (void).cxx_destruct;
@end
