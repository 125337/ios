@interface MMMLiveRewardQuotaSettingDetailCell : MMUIView
{
    unsigned long long _rewardQuota; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _rewardQuotaLabel; // +0x18
    MMUIButton * _arrowButton; // +0x20
    UIView * _separatorLine; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateRewardQuota:(unsigned long long)arg1;
- (unsigned long long)rewardQuota;
- (void)setRewardQuota:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rewardQuotaLabel;
- (void)setRewardQuotaLabel:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
