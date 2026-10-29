@interface WCAddressListViewController : WCAddressBaseViewController <PasswordLogicDelegate, LongPressMenuViewDelegate>
{
    id <WCAddressListViewControllerDelegate> m_delegate; // +0x88
    PasswordLogic * m_passwordLogic; // +0x90
    int m_enWCAddressAddressListScene; // +0x98
    UIView * m_oLastLongPressView; // +0xa0
    long long addressSelectedForLongPress; // +0xa8
}
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initPasswordLogic;
- (void)initNavigationBar;
- (void)reloadAddressList:(int)arg1;
- (void)onResendConfirm;
- (void)onNext;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (double)navigationAreaHeight;
- (double)getContentViewY;
- (void)viewDidLoad;
- (void)dealloc;
- (void)showImportYiXunAddressView;
- (void)onImportYiXunAddressConfirm;
- (void)startImportYiXunAddress:(BOOL)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordFail:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (id)getAddressCopyedString:(id)arg1;
- (double)getCellHeightForAddress:(id)arg1;
- (void)resetDefautSelect;
- (void)refreshViewWithData:(id)arg1;
- (void)createFooterView;
- (void)removeFooterView;
- (void)makeNewCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDefaultCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeEmptyCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeGiftSceneCell:(id)arg1;
- (void)onSelectAddressFillByFriends;
- (void)makeAddressFillByFriendsCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeUseAddressTipsCell:(id)arg1 cellInfo:(id)arg2;
- (void)selectActionCell:(id)arg1;
- (void)selectEditingCell:(id)arg1;
- (void)clickCopyButton:(id)arg1;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)onLongPressAddreessCell:(id)arg1;
- (void)copyForLongPress;
- (void)deleteForLongPress;
- (BOOL)canBecomeFirstResponder;
- (long long)overrideUserInterfaceStyle;
- (void).cxx_destruct;
@end

