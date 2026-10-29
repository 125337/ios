@interface MMLiveGameJoinTeamSettingViewCell : MMTableViewCell
{
    unsigned int _joinTeamMode; // +0x8
    UIImageView * _selectionIndicatorView; // +0x10
    UIImageView * _coinView; // +0x18
    UILabel * _coinValueLabel; // +0x20
    MMCPLabel * _joinTeamModeNameLabel; // +0x28
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithJoinTeamMode:(unsigned int)arg1 joinTeamModeName:(id)arg2 isSelected:(BOOL)arg3 coinValue:(unsigned int)arg4;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)selectionIndicatorView;
- (void)setSelectionIndicatorView:(id)arg1;
- (id)coinView;
- (void)setCoinView:(id)arg1;
- (id)coinValueLabel;
- (void)setCoinValueLabel:(id)arg1;
- (id)joinTeamModeNameLabel;
- (void)setJoinTeamModeNameLabel:(id)arg1;
- (unsigned int)joinTeamMode;
- (void)setJoinTeamMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

