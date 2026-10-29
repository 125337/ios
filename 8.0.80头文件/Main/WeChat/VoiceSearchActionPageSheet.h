@interface VoiceSearchActionPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _isMessage; // +0x8
    BOOL _actionTaken; // +0x9
    BOOL _didShow; // +0xa
    id /* block */ _onShow; // +0x10
    id /* block */ _onCancel; // +0x18
    id /* block */ _onContinue; // +0x20
    id /* block */ _onSelect; // +0x28
    NSString * _actionText; // +0x30
    UIView * _contentView; // +0x38
    UIScrollView * _contactList; // +0x40
    UIView * _contactRows; // +0x48
    NSArray * _contacts; // +0x50
    NSArray * _usernames; // +0x58
}
- (id)initWithContacts:(id)arg1 actionText:(id)arg2 isMessage:(BOOL)arg3;
- (id)labelWithText:(id)arg1 size:(double)arg2;
- (id)avatarForContact:(id)arg1 size:(double)arg2;
- (void)buildContent;
- (double)pageSheetContentHeight;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)selectRow:(id)arg1;
- (void)confirm;
- (void)selectIndex:(unsigned long long)arg1;
- (void)cancel;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (id /* block */)onShow;
- (void)setOnShow:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onContinue;
- (void)setOnContinue:(id /* block */)arg1;
- (id /* block */)onSelect;
- (void)setOnSelect:(id /* block */)arg1;
- (id)actionText;
- (void)setActionText:(id)arg1;
- (BOOL)isMessage;
- (void)setIsMessage:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)contactList;
- (void)setContactList:(id)arg1;
- (id)contactRows;
- (void)setContactRows:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)usernames;
- (void)setUsernames:(id)arg1;
- (BOOL)actionTaken;
- (void)setActionTaken:(BOOL)arg1;
- (BOOL)didShow;
- (void)setDidShow:(BOOL)arg1;
- (void).cxx_destruct;
@end
