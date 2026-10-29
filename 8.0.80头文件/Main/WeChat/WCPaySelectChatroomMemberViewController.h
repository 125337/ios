@interface WCPaySelectChatroomMemberViewController : WCPayContactSelectListBaseViewController <WCPayContactSelectListBaseViewControllerDelegate, WCPayUnionTransferBeforeCgiDelegate>
{
    id <WCPaySelectChatroomMemberViewControllerDelegate> _delegate; // +0x98
    WCPayUnionTransferBeforeCgi * _unionBeforeCgi; // +0xa0
    CContact * _selectUser; // +0xa8
}
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)leftBarbuttonClick;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)getReloadContactDataList;
- (id)getChatroomContact;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(BOOL)arg2;
- (void)realCallbackSelectContact:(id)arg1;
- (void)onWCPayUnionTransferBeforeCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferBeforeCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)checkPermission:(unsigned int)arg1 errMsg:(id)arg2;
- (id)delegate;
- (id)unionBeforeCgi;
- (void)setUnionBeforeCgi:(id)arg1;
- (id)selectUser;
- (void)setSelectUser:(id)arg1;
- (void).cxx_destruct;
@end
