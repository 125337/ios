@interface MMFinderLiveConnectMicConditionCell : MMTableViewCell
{
    UILabel * _typeTitle; // +0x8
    UIView * _separator; // +0x10
    UIImageView * _checkIconView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)toggle;
- (void)unToggle;
- (void)setSeparatorHidden:(BOOL)arg1;
- (id)typeTitle;
- (void)setTypeTitle:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)checkIconView;
- (void)setCheckIconView:(id)arg1;
- (void).cxx_destruct;
@end
