@interface WCAddressListViewController : WCAddressBaseViewController <LongPressMenuViewDelegate>
{
    id <WCAddressListViewControllerDelegate> m_delegate; // +0x90
    PasswordLogic * m_passwordLogic; // +0x98
    unsigned long long m_enWCAddressAddressListScene; // +0xa0
    UIView * m_oLastLongPressView; // +0xa8
    long long addressSelectedForLongPress; // +0xb0
}
- (void)addListView;
- (void)refreshListViewWith:(id)arg1 selectedAddressId:(unsigned int)arg2;
- (void)copyWithAddress:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initNavigationBar;
- (void)reloadAddressList:(unsigned long long)arg1;
- (void)onResendConfirm;
- (void)addNew;
- (void)onNext;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (double)navigationAreaHeight;
- (double)getContentViewY;
- (void)viewDidLoad;
- (void)dealloc;
- (void)resetDefautSelect;
- (void)refreshViewWithData:(id)arg1;
- (void)selectActionCell:(id)arg1;
- (void)selectEditingCell:(id)arg1;
- (void)clickCopyButton:(id)arg1;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)onLongPressAddreessCell:(id)arg1;
- (void)copyForLongPress;
- (void)deleteForLongPress;
- (BOOL)canBecomeFirstResponder;
- (long long)overrideUserInterfaceStyle;
- (void)registerYReportSdk;
- (BOOL)isEditMode;
- (BOOL)isInHalfPage;
- (void)selectAddress:(id)arg1;
- (void).cxx_destruct;
@end
