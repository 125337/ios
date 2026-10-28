@interface WCFinderPersonalCenterSectionHeaderView : UICollectionReusableView <WCFinderRedDotNotifyExt>
{
    id <WCFinderPersonalCenterSectionHeaderViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    MMUIButton * _identityHintButton; // +0x18
    WCFinderAccountSelectedButton * _accountSelectButton; // +0x20
    unsigned long long _style; // +0x28
    UIButton * _settingButton; // +0x30
}
+ (double)headerViewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)enableIdentityHint;
- (void)enableSetting:(id)arg1 action:(SEL)arg2;
- (void)setStyle:(unsigned long long)arg1;
- (id)titleLabel;
- (id)identityHintButton;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)_layoutSettingButton;
- (void)identityHintButtonDidClick;
- (void)selectAccountButtonDidClick;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setIdentityHintButton:(id)arg1;
- (id)accountSelectButton;
- (void)setAccountSelectButton:(id)arg1;
- (unsigned long long)style;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
- (void).cxx_destruct;
@end
