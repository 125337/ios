@interface SettingMigrationCell : UITableViewCell
{
    NSString * _titleString; // +0x8
    NSString * _iconName; // +0x10
    UIImageView * _iconImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIView * _myBackgroundView; // +0x30
    UIView * _topSeperator; // +0x38
    UIView * _bottomSeperator; // +0x40
    UIView * _betweenSeperator; // +0x48
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)myBackgroundView;
- (void)setMyBackgroundView:(id)arg1;
- (id)topSeperator;
- (void)setTopSeperator:(id)arg1;
- (id)bottomSeperator;
- (void)setBottomSeperator:(id)arg1;
- (id)betweenSeperator;
- (void)setBetweenSeperator:(id)arg1;
- (void).cxx_destruct;
@end

