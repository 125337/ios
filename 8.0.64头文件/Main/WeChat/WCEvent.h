@interface WCEvent : MMObject
{
    NSString * _name; // +0x8
    NSArray * _sourceStates; // +0x10
    WCState * _destinationState; // +0x18
}
- (id)initWithName:(id)arg1 transitioningFromStates:(id)arg2 toState:(id)arg3;
- (id)description;
- (id)name;
- (id)sourceStates;
- (id)destinationState;
- (void).cxx_destruct;
@end
