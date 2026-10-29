@interface _TtC6WeChat21WSTextFieldInteractor : WebSearchPluginBase
{
    UITextField * textField; // +0x8
     forbidNotifyTextChanged; // +0x10
     didEditingAtBegining; // +0x11
     viewHasAppear; // +0x12
    void * latestNotifiedText; // +0x18
}
- (id)textField;
- (id)trimmedText;
- (id)latestNotifiedText;
- (void)setLatestNotifiedText:(id)arg1;
- (id)initWithTextField:(id)arg1 webviewOwner:(id)arg2;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (BOOL)textFieldShouldBeginEditing;
- (void)onSearchInputTextChanged:(id)arg1;
- (void)__onSearchInputTextChangedWith:(id)arg1;
- (void)focusSearchBar:(BOOL)arg1;
- (id)init;
- (void).cxx_destruct;
@end
