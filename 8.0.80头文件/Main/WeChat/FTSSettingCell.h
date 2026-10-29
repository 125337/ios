@interface FTSSettingCell : MMTableViewCell
{
    FTSSettingItem * _settingItem; // +0x8
    SearchMatchTip * _matchTip; // +0x10
    AttributeLabel * _titleLabel; // +0x18
    AttributeLabel * _summaryLabel; // +0x20
    double _lastLayoutWidth; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateSettingItem:(id)arg1 matchTip:(id)arg2;
- (void)updateStatus:(BOOL)arg1;
- (void)layoutSubviews;
- (id)settingItem;
- (void).cxx_destruct;
@end
