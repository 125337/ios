@interface BizMenuButtonInfo : NSObject
{
    NSNumber * _identifier; // +0x8
    NSString * _key; // +0x10
    NSString * _name; // +0x18
    NSString * _state; // +0x20
    NSNumber * _type; // +0x28
}
+ (id)makeWithIdentifier:(id)arg1 key:(id)arg2 name:(id)arg3 state:(id)arg4 type:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (void).cxx_destruct;
@end
