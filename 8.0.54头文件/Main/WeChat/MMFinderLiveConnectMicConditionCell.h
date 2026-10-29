@interface MMFinderLiveConnectMicConditionCell : MMTableViewCell
{
    UILabel * _typeTitle; // +0x8
    UIView * _separator; // +0x10
    UIImageView * _checkIconView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)toggle;
- (void)unToggle;
- (id)typeTitle;
- (id)separator;
- (id)checkIconView;
- (void)setTypeTitle:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setCheckIconView:(id)arg1;
- (void).cxx_destruct;
@end

