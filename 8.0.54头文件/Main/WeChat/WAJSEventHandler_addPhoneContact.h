@interface WAJSEventHandler_addPhoneContact : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate>
{
    NSDictionary * _contact; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToExistContact;
- (void)createNewContact;
- (void)copyToContact:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

