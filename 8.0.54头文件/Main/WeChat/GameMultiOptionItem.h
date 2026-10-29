@interface GameMultiOptionItem : NSObject
{
    BOOL _hasClearOption; // +0x8
    NSString * _debugKey; // +0x10
    NSString * _title; // +0x18
    NSArray * _optionAndDescArray; // +0x20
    id /* block */ _didSetOptionBlock; // +0x28
}
- (id)initWithDebugKey:(id)arg1 title:(id)arg2 optionAndDescArray:(id)arg3;
- (id)initWithDebugKey:(id)arg1 title:(id)arg2 optionAndDescArray:(id)arg3 hasClearOption:(BOOL)arg4;
- (id)currentValue;
- (void)setDebugValueAtIndex:(long long)arg1;
- (id)descForOptionValue:(id)arg1;
- (id)debugKey;
- (void)setDebugKey:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)optionAndDescArray;
- (void)setOptionAndDescArray:(id)arg1;
- (id /* block */)didSetOptionBlock;
- (void)setDidSetOptionBlock:(id /* block */)arg1;
- (BOOL)hasClearOption;
- (void)setHasClearOption:(BOOL)arg1;
- (void).cxx_destruct;
@end

