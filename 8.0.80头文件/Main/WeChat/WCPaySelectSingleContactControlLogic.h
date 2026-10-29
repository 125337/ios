@interface WCPaySelectSingleContactControlLogic : WCPayControlLogic <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate>
{
    BOOL _pushVC; // +0x38
    BOOL _onlyShowContactList; // +0x39
    id <WCPaySelectSingleContactControlLogicDelegate> _delegate; // +0x40
    NSString * _selectContactVCTitle; // +0x48
    JSApiSelectSessionViewController * _selectSessionVC; // +0x50
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)stopSelectContact;
- (void)stopSelectContactAnimated:(BOOL)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)pushVC;
- (void)setPushVC:(BOOL)arg1;
- (BOOL)onlyShowContactList;
- (void)setOnlyShowContactList:(BOOL)arg1;
- (id)selectContactVCTitle;
- (void)setSelectContactVCTitle:(id)arg1;
- (id)selectSessionVC;
- (void)setSelectSessionVC:(id)arg1;
- (void).cxx_destruct;
@end
