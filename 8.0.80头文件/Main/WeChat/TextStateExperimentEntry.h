@interface TextStateExperimentEntry : NSObject <PBCoding>
{
    NSString * _key; // +0x8
    NSString * _value; // +0x10
}
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithItem:(id)arg1;
- (BOOL)isValid;
- (id)description;
- (id)key;
- (void)setKey:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end
