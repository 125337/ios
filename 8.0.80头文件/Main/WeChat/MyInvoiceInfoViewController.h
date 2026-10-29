@interface MyInvoiceInfoViewController : WCBizBaseViewController <IMyInvoiceLogicMgrExt, LongPressMenuViewDelegate>
{
    WCClearModeTextViewItem * m_textFieldCompanyTitleItem; // +0x88
    WCClearModeTextViewItem * m_textFieldPersonTitleItem; // +0x90
    WCBaseTextFieldItem * m_textFieldTaxNumberItem; // +0x98
    WCClearModeTextViewItem * m_textFieldAddressItem; // +0xa0
    WCBaseTextFieldItem * m_textFieldPhoneItem; // +0xa8
    WCClearModeTextViewItem * m_textFieldBankItem; // +0xb0
    WCBankNumberTextFieldItem * m_textFieldBankNumberItem; // +0xb8
    WCBaseTextFieldItem * m_textFieldEmail; // +0xc0
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xc8
    NSMutableArray * m_arrayInfo; // +0xd0
    id <MyInvoiceInfoViewControllerDelegate> m_delegate; // +0xd8
    NSIndexPath * m_selectItemIndex; // +0xe0
    MyInvoiceData * m_invoiceData; // +0xe8
    NSString * m_title_type; // +0xf0
    unsigned long long m_invoice_mode; // +0xf8
    int m_scene; // +0x100
    BOOL m_inAnimation; // +0x104
    CGRect m_oldFrame; // +0x108
    UIView * m_oldSuperView; // +0x128
    double m_oldBrightness; // +0x130
    NSString * m_nsItemTitle; // +0x138
    NSString * m_nsItemContent; // +0x140
    UIView * m_oLastLongPressView; // +0x148
    NSString * m_type; // +0x150
    MMUIButton * _companyTypeBtn; // +0x158
    MMUIButton * _personTypeBtn; // +0x160
    UIImageView * _qrcodeView; // +0x168
    UIView * _maskView; // +0x170
    InvoiceFooterView * _footerView; // +0x178
}
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)initInfoTemplate;
- (void)resetTextFieldContent;
- (void)reloadTableView;
- (void)makeQRCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeEmptyCell:(id)arg1 cellInfo:(id)arg2;
- (void)qrcodeTapped:(id)arg1;
- (void)setBrightness:(double)arg1;
- (void)updateBrightness;
- (void)addTitleTypeHeader;
- (BOOL)shouldShowInfoItem:(id)arg1;
- (void)setupWithInvoiceData:(id)arg1;
- (void)setInvoiceMode:(unsigned long long)arg1;
- (void)refreshViewWithInvoiceData:(id)arg1;
- (void)reloadInfoModeTableView;
- (void)OnComfireEnsureAlert;
- (void)OnCancelClick;
- (void)OnReturnClick;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBeInteractivePoped;
- (void)setMyTitle;
- (BOOL)fillDataTo:(id)arg1;
- (void)onEdit;
- (void)onNext;
- (void)OnSaveInvoiceRet:(BOOL)arg1 andGroupId:(long long)arg2 withInvoiceUrl:(id)arg3;
- (BOOL)canDoSave;
- (BOOL)checkIsEmpty:(id)arg1;
- (BOOL)checkIsTaxNumberRight;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (double)getTextViewHeightForContent:(id)arg1;
- (double)cellHightForContent:(id)arg1 andKey:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeTitleTypeCell:(id)arg1 cellInfo:(id)arg2;
- (void)setItemTitleAndContentOfId:(int)arg1;
- (double)getCellHeightWithId:(int)arg1;
- (void)makeInfoModeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onPersonTypeBtnClick;
- (void)onCompanyTypeBtnClick;
- (void)onTitleTypeChangeTo:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFromScene:(int)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (id)getInvoiceCopiedString:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (id)companyTypeBtn;
- (void)setCompanyTypeBtn:(id)arg1;
- (id)personTypeBtn;
- (void)setPersonTypeBtn:(id)arg1;
- (id)qrcodeView;
- (void)setQrcodeView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
