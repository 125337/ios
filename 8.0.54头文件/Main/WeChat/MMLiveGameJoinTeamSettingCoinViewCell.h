@interface MMLiveGameJoinTeamSettingCoinViewCell : MMTableViewCell
{
    unsigned int _value; // +0x8
    UIImageView * _coin; // +0x10
    UILabel * _valueLabel; // +0x18
}
+ (id)identifier;
+ (double)height;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setValue:(unsigned int)arg1 isOther:(BOOL)arg2;
- (id)coin;
- (void)setCoin:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (unsigned int)value;
- (void)setValue:(unsigned int)arg1;
- (void).cxx_destruct;
@end

