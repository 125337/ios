@interface MMSetWXAliasHandler : PrivateCommonApiHandler <WCAccountBindPhoneControlLogicDelegate>
{
    WCAccountBindPhoneControlLogic * _logic; // +0x8
}
- (void)handleCommonApiWithParams:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end
