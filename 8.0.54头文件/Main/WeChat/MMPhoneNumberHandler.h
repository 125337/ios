@interface MMPhoneNumberHandler : MMObject <WCActionSheetDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate, IMsgRevokeExt>
{
    NSString * _phoneNumber; // +0x8
    UIViewController * _viewController; // +0x10
    CBaseContact * m_oContact; // +0x18
    NSDictionary * _userInfo; // +0x20
}
+ (id)sharedInstance;
+ (void)handlePhoneNumber:(id)arg1;
+ (void)handleWechatProfilePhoneNumber:(id)arg1;
+ (void)handleBankCardNumber:(id)arg1;
+ (void)handlePhoneNumber:(id)arg1 contact:(id)arg2;
+ (void)makePhoneCall:(id)arg1;
+ (BOOL)canMakePhoneCall;
+ (void)addToContact:(id)arg1;
- (id)init;
- (id)getViewController;
- (void)showContactActionSheet:(id)arg1;
- (void)showTotalActionSheet:(id)arg1;
- (void)showWechatProfilePhoneNumberActionSheet;
- (void)handlePhoneNumber:(id)arg1;
- (void)handleBankCardNumber:(id)arg1;
- (void)handleWechatProfilePhone:(id)arg1;
- (void)handlePhoneNumber:(id)arg1 contact:(id)arg2;
- (void)handleTotalActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleContactActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleWechatOutActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showPeoplePickerController;
- (void)showNewPersonViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)AddPhoneNumberToExistContact:(id)arg1 viewController:(id)arg2;
- (void)CreateNewContact:(id)arg1 viewController:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

