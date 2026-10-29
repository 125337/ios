@interface MMLiveGamePlayTogetherJoinTeamSettingCell : MMLiveGamePlayTogetherTableViewCell
{
    UIView * _containerView; // +0x8
    UILabel * _optionLabel; // +0x10
    UILabel * _descLabel; // +0x18
    UIImageView * _arrowImageView; // +0x20
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)setupAction;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithItem:(id)arg1;
- (void)prepareForReuse;
- (void)updateSize;
- (id)containerView;
- (id)descLabel;
- (id)optionLabel;
- (id)arrowImageView;
- (void)setContainerView:(id)arg1;
- (void)setOptionLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

