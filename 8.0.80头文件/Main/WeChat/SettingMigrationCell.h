@interface SettingMigrationCell : UITableViewCell
{
    BOOL _isOptEnable; // +0x8
    NSString * _titleString; // +0x10
    NSString * _iconName; // +0x18
    UIImageView * _iconImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIView * _myBackgroundView; // +0x38
    UIView * _topSeperator; // +0x40
    UIView * _bottomSeperator; // +0x48
    UIView * _betweenSeperator; // +0x50
}
+ (double)cellHeight:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (BOOL)isOptEnable;
- (void)setIsOptEnable:(BOOL)arg1;
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
