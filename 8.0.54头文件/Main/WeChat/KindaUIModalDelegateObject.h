@interface KindaUIModalDelegateObject : NSObject <MMIUIPagePlatformDelegate, MMIUIModalPlatformFuncDelegate>
{
    MMVoidBoolI32Callback * _keyboardShowCallback; // +0x8
    id /* block */ _requestEndEditing; // +0x10
    KindaModalController * _controller; // +0x18
}
- (long long)currentPlatform;
- (void)genSnapshotImpl:(BOOL)arg1 callback:(id)arg2;
- (void)fragmentShow:(BOOL)arg1;
- (void)refreshNavigationBar;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)endEditing;
- (id)keyboardShowCallback;
- (void)setKeyboardShowCallback:(id)arg1;
- (id /* block */)requestEndEditing;
- (void)setRequestEndEditing:(id /* block */)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (void).cxx_destruct;
@end

