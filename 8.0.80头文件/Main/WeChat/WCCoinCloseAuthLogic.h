@interface WCCoinCloseAuthLogic : NSObject <WCActionSheetDelegate>
{
    id /* block */ _callback; // +0x8
}
- (void)start:(id /* block */)arg1;
- (void)haveBalance;
- (void)closeAuth;
- (void)fail;
- (void)success;
- (id)getTopVC;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
