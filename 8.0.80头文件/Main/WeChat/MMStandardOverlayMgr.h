@interface MMStandardOverlayMgr : MMUserService <MMServiceProtocol>
{
    double _keyboardHeight; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (double)bottomOffsetForViewController:(id)arg1;
- (void)invalidateLayout;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
@end
