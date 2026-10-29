@interface MyInvoiceInfoViewController : WCBizBaseViewController <IMyInvoiceLogicMgrExt, LongPressMenuViewDelegate>
{
    WCClearModeTextViewItem * m_textFieldCompanyTitleItem; // +0x80
    WCClearModeTextViewItem * m_textFieldPersonTitleItem; // +0x88
    WCBaseTextFieldItem * m_textFieldTaxNumberItem; // +0x90
    WCClearModeTextViewItem * m_textFieldAddressItem; // +0x98
    WCBaseTextFieldItem * m_textFieldPhoneItem; // +0xa0
    WCClearModeTextViewItem * m_textFieldBankItem; // +0xa8
    WCBankNumberTextFieldItem * m_textFieldBankNumberItem; // +0xb0
    WCBaseTextFieldItem * m_textFieldEmail; // +0xb8
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xc0
    NSMutableArray * m_arrayInfo; // +0xc8
    id <MyInvoiceInfoViewControllerDelegate> m_delegate; // +0xd0
    NSIndexPath * m_selectItemIndex; // +0xd8
    MyInvoiceData * m_invoiceData; // +0xe0
    NSString * m_title_type; // +0xe8
    unsigned long long m_invoice_mode; // +0xf0
    int m_scene; // +0xf8
    BOOL m_inAnimation; // +0xfc
    CGRect m_oldFrame; // +0x100
    UIView * m_oldSuperView; // +0x120
    double m_oldBrightness; // +0x128
    NSString * m_nsItemTitle; // +0x130
    NSString * m_nsItemContent; // +0x138
    UIView * m_oLastLongPressView; // +0x140
    NSString * m_type; // +0x148
    MMUIButton * _companyTypeBtn; // +0x150
    MMUIButton * _personTypeBtn; // +0x158
    UIImageView * _qrcodeView; // +0x160
    UIView * _maskView; // +0x168
    InvoiceFooterView * _footerView; // +0x170
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

