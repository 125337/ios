@interface MMLiveLotteryTypeCell : MMTableViewCell
{
    BOOL _enable; // +0x8
    unsigned int _optionValue; // +0xc
    UIImageView * _selectionIndicatorView; // +0x10
    MMUILabel * _optionNameLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    UIView * _sepelateLine; // +0x28
    NSString * _optionName; // +0x30
    NSString * _desc; // +0x38
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithOptionValue:(unsigned int)arg1 optionName:(id)arg2 desc:(id)arg3 isSelected:(BOOL)arg4 enable:(BOOL)arg5;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)selectionIndicatorView;
- (void)setSelectionIndicatorView:(id)arg1;
- (id)optionNameLabel;
- (void)setOptionNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)sepelateLine;
- (void)setSepelateLine:(id)arg1;
- (unsigned int)optionValue;
- (void)setOptionValue:(unsigned int)arg1;
- (id)optionName;
- (void)setOptionName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
