@interface WCPayPwdViewController : WCPayBaseViewController <WCPayVoidCallbackDelegate, WCPayTransferPhoneChangeSwitchCgiDelegate, WCPayTransferPhoneGetSwitchCgiDelegate, IUpdateProfileMgrExt, WCPayGetTransferWordingCgiDelegate, MMWebViewDelegate, WCPayOpenTouchIDAuthLogicDelegate, WCPayLogicMgrExt, SetWCPayWebLogicStateExt, WCPayHongBaoRefundConfigCgiDelegate, ILinkEventExt, WCPayTransferPhoneProtocalHalfPageDelegate>
{
    id <WCPayPwdViewControllerDelegate> m_delegate; // +0x98
    BOOL _shouldUpdateWhenAppear; // +0xa0
    BOOL _isAgreedWithProtocol; // +0xa1
    unsigned int _m_fromScene; // +0xa4
    NSDictionary * _payManageData; // +0xa8
    WCPayGetTransferWordingCgi * _wordingCgi; // +0xb0
    GetTransferWordingResponse * _wordingResponse; // +0xb8
    WCPayHongBaoRefundConfigCgi * _hbRefundConfigCgi; // +0xc0
    GetHbRefundConfigResp * _hbRefundConfigResp; // +0xc8
    WCPayTransferPhoneGetSwitchCgi * _transferPhoneGetSwitchCgi; // +0xd0
    WCPayTransferPhoneChangeSwitchCgi * _transferPhoneChangeSwitchCgi; // +0xd8
    TransferPhoneGetSwitchResp * _transferPhoneGetSwitchResp; // +0xe0
    MMWebViewController * _uploadIdWebView; // +0xe8
    WCPayTransferPhoneProtocalHalfPage * _protocolHalfPage; // +0xf0
}
+ (void)updateExtraSection:(id)arg1 dic:(id)arg2 delegate:(id)arg3;
+ (id)decoratorViewWith:(id)arg1 header:(BOOL)arg2 width:(double)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)OnBack;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)requestTransferPhoneConfig;
- (void)requestHbRefundConfig;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)arg1;
- (void)OnHongBaoRefundConfigRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initCellView;
- (void)managePlanData;
- (void)onChangeHongBaoRefundPayWay;
- (void)onSwitchWallet:(id)arg1;
- (void)onPayManageLabelToWeb:(id)arg1;
- (id)delayDurationDesc;
- (void)requestWording;
- (void)onTouchIDSwitchChanged:(id)arg1;
- (void)onSimpleUserSetPwd;
- (void)onModifyPwd;
- (void)onResetPwd;
- (void)onChangeDelayTransferDuration;
- (void)unregisterWCPay;
- (void)reloadTable;
- (void)onProfileChange;
- (void)updatePayManageData;
- (void)initPayManageDataFromCacheOrNetwork;
- (void)reloadTableFromCache;
- (void)gotoPayManage:(id)arg1;
- (void)onRealname;
- (void)onRealnameVerifySuccess;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)setWCPayWebLogicStateJsapi:(id)arg1 didGetInfo:(id)arg2;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)onWCPayTransferPhoneGetSwitchCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneGetSwitchCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onTransferPhoneSwitch:(id)arg1;
- (id)genTransferPhoneSectionFooterView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWCPayTransferPhoneChangeSwitchCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneChangeSwitchCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)WCPayTransferPhoneProtocalHalfPageAgree;
- (void)WCPayTransferPhoneProtocalHalfPageDisagree;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_fromScene;
- (void)setM_fromScene:(unsigned int)arg1;
- (id)payManageData;
- (void)setPayManageData:(id)arg1;
- (id)wordingCgi;
- (void)setWordingCgi:(id)arg1;
- (id)wordingResponse;
- (void)setWordingResponse:(id)arg1;
- (id)hbRefundConfigCgi;
- (void)setHbRefundConfigCgi:(id)arg1;
- (id)hbRefundConfigResp;
- (void)setHbRefundConfigResp:(id)arg1;
- (id)transferPhoneGetSwitchCgi;
- (void)setTransferPhoneGetSwitchCgi:(id)arg1;
- (id)transferPhoneChangeSwitchCgi;
- (void)setTransferPhoneChangeSwitchCgi:(id)arg1;
- (id)transferPhoneGetSwitchResp;
- (void)setTransferPhoneGetSwitchResp:(id)arg1;
- (id)uploadIdWebView;
- (void)setUploadIdWebView:(id)arg1;
- (id)protocolHalfPage;
- (void)setProtocolHalfPage:(id)arg1;
- (BOOL)shouldUpdateWhenAppear;
- (void)setShouldUpdateWhenAppear:(BOOL)arg1;
- (BOOL)isAgreedWithProtocol;
- (void)setIsAgreedWithProtocol:(BOOL)arg1;
- (void).cxx_destruct;
@end
