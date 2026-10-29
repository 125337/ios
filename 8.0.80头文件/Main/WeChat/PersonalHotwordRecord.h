@interface PersonalHotwordRecord : NSObject <PBCoding>
{
    unsigned int _count; // +0x8
    unsigned int _lastUpdateTime; // +0xc
    NSString * _asrText; // +0x10
    NSString * _editText; // +0x18
    NSString * _attr; // +0x20
    NSString * _key; // +0x28
}
+ (void)PBArrayAdd_asrText;
+ (void)PBArrayAdd_editText;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_attr;
+ (void)PBArrayAdd_key;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)asrText;
- (void)setAsrText:(id)arg1;
- (id)editText;
- (void)setEditText:(id)arg1;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (id)attr;
- (void)setAttr:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end
