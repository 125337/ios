@interface WCTransition : MMObject
{
    WCEvent * _event; // +0x8
    WCState * _sourceState; // +0x10
    NSDictionary * _userInfo; // +0x18
}
- (id)initWithEvent:(id)arg1 fromState:(id)arg2 userInfo:(id)arg3;
- (id)destinationState;
- (id)description;
- (id)event;
- (id)sourceState;
- (id)userInfo;
- (void).cxx_destruct;
@end

