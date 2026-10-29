@interface PersonalHotwordInput : NSObject
{
    NSString * _asrText; // +0x8
    NSString * _editText; // +0x10
    NSString * _attr; // +0x18
    NSString * _key; // +0x20
}
+ (id)keyWithAsrText:(id)arg1 editText:(id)arg2 attr:(id)arg3;
- (id)init;
- (id)initWithAsrText:(id)arg1 editText:(id)arg2 attr:(id)arg3;
- (id)asrText;
- (void)setAsrText:(id)arg1;
- (id)editText;
- (void)setEditText:(id)arg1;
- (id)attr;
- (void)setAttr:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end
