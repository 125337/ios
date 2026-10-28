@interface MMLiveRewardQuotaCell : MMTableViewCell
{
    unsigned int _rewardQuota; // +0x8
    UIImageView * _selectionIndicatorView; // +0x10
    MMUILabel * _rewardQuotaLabel; // +0x18
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithRewardQuota:(unsigned int)arg1 optionName:(id)arg2 isSelected:(BOOL)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)selectionIndicatorView;
- (void)setSelectionIndicatorView:(id)arg1;
- (id)rewardQuotaLabel;
- (void)setRewardQuotaLabel:(id)arg1;
- (unsigned int)rewardQuota;
- (void)setRewardQuota:(unsigned int)arg1;
- (void).cxx_destruct;
@end
