@interface EnterpriseHomeContactCell : MMTableViewCell
{
    MMWebImageView * _iconImageView; // +0x8
    MMUILabel * _displayNameLabel; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubViews;
- (void)updateHomeContactInfo:(id)arg1;
- (void)layoutSubviews;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (void).cxx_destruct;
@end

