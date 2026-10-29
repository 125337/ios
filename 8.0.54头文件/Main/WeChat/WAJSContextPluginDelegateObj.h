@interface WAJSContextPluginDelegateObj : NSObject
{
    BOOL _delegateMark; // +0x8
    NSObject * _weakDelegate; // +0x10
}
- (id)weakDelegate;
- (void)setWeakDelegate:(id)arg1;
- (BOOL)delegateMark;
- (void)setDelegateMark:(BOOL)arg1;
- (void).cxx_destruct;
@end

