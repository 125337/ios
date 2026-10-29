@interface MMLiveLotteryGiftDistributeTypeCell : MMTableViewCell
{
    unsigned int _optionValue; // +0x8
    UIView * _bgView; // +0x10
    MMUILabel * _optionNameLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    NSString * _optionName; // +0x28
    NSString * _desc; // +0x30
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithOptionValue:(unsigned int)arg1 optionName:(id)arg2 desc:(id)arg3 isSelected:(BOOL)arg4;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)optionNameLabel;
- (void)setOptionNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (unsigned int)optionValue;
- (void)setOptionValue:(unsigned int)arg1;
- (id)optionName;
- (void)setOptionName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
