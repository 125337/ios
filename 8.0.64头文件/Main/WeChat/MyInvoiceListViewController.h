@interface MyInvoiceListViewController : WCBizBaseViewController <PasswordLogicDelegate, LongPressMenuViewDelegate, MyInvoiceInfoViewControllerDelegate, IMyInvoiceLogicMgrExt>
{
    PasswordLogic * m_passwordLogic; // +0x88
    unsigned long long m_enWCAddressAddressListScene; // +0x90
    UIView * m_oLastLongPressView; // +0x98
    NSMutableArray * m_invoiceDataArr; // +0xa0
    int m_scene; // +0xa8
    MyInvoiceData * m_selectInvoice; // +0xb0
    id <MyInvoiceListViewControllerDelegate> _delegate; // +0xb8
    InvoiceFooterView * _footerView; // +0xc0
}
- (id)init;
- (void)initPasswordLogic;
- (void)initNavigationBar;
- (void)MyInvoiceBack;
- (void)onNext;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBeInteractivePoped;
- (void)dealloc;
- (void)setupWithInvoiceDataArr:(id)arg1 fromScene:(int)arg2;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordFail:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (id)getInvoiceCopiedString:(id)arg1;
- (double)getCellHeightForInvoice:(id)arg1;
- (void)resetDefautSelect;
- (void)refreshViewWithInvoiceDataArr:(id)arg1;
- (void)InvoiceAdd;
- (void)makeNewCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)selectActionCell:(id)arg1;
- (void)gotoInvoiceDetail:(id)arg1;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)accessoryButtonTappedForRowWithIndexPath:(id)arg1 Cell:(id)arg2;
- (void)gotoInfoOfInvoice:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnAddNewInvoiceData:(id)arg1 ofGroupId:(long long)arg2;
- (void)OnEditInvoiceData:(id)arg1;
- (void)OnDelInvoiceRet:(BOOL)arg1 andGroupId:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
