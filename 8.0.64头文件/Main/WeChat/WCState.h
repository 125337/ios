@interface WCState : MMObject
{
    NSString * _name; // +0x8
}
+ (id)stateNameOfState:(unsigned long long)arg1;
+ (id)stateWithState:(unsigned long long)arg1;
- (BOOL)isEqualToState:(unsigned long long)arg1;
- (id)initWithName:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void).cxx_destruct;
@end
