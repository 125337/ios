@interface MMLiveLotteryTypeInfo : NSObject
{
    BOOL _disableSelect; // +0x8
    int _optionValue; // +0xc
    NSString * _optionName; // +0x10
    NSString * _desc; // +0x18
}
- (int)optionValue;
- (void)setOptionValue:(int)arg1;
- (id)optionName;
- (void)setOptionName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)disableSelect;
- (void)setDisableSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

