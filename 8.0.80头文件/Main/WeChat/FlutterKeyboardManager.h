@interface FlutterKeyboardManager : NSObject
{
    NSMutableArray * _primaryResponders; // +0x8
    NSMutableArray * _secondaryResponders; // +0x10
}
- (id)init;
- (void)addPrimaryResponder:(id)arg1;
- (void)addSecondaryResponder:(id)arg1;
- (void)handlePress:(id)arg1 nextAction:(id /* block */)arg2;
- (void)dispatchToSecondaryResponders:(id)arg1 complete:(id /* block */)arg2;
- (id)primaryResponders;
- (id)secondaryResponders;
- (void).cxx_destruct;
@end
