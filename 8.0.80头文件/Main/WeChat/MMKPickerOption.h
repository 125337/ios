@interface MMKPickerOption : NSObject
{
    NSString * _optionId; // +0x8
    NSString * _text; // +0x10
}
+ (id)KPickerOptionWithOptionId:(id)arg1 text:(id)arg2;
- (id)initWithOptionId:(id)arg1 text:(id)arg2;
- (id)description;
- (id)optionId;
- (id)text;
- (void).cxx_destruct;
@end
