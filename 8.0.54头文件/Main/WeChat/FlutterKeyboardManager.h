@interface FlutterKeyboardManager : NSObject
{
    unique_ptr<fml::WeakNSObjectFactory<FlutterKeyboardManager>, std::default_delete<fml::WeakNSObjectFactory<FlutterKeyboardManager>>> _weakFactory; // +0x8
    NSMutableArray * _primaryResponders; // +0x10
    NSMutableArray * _secondaryResponders; // +0x18
}
- (id)init;
- (void)addPrimaryResponder:(id)arg1;
- (void)addSecondaryResponder:(id)arg1;
- (void)dealloc;
- (WeakNSObject<FlutterKeyboardManager>)getWeakNSObject;
- (void)handlePress:(id)arg1 nextAction:(id /* block */)arg2;
- (void)dispatchToSecondaryResponders:(id)arg1 complete:(id /* block */)arg2;
- (id)primaryResponders;
- (id)secondaryResponders;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

