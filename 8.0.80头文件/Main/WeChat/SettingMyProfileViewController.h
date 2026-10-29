@interface SettingMyProfileViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate, IOplogExt, IMyInvoiceLogicMgrExt>
{
    MMHeadImageView * m_headImage; // +0x70
    NameEditorViewController * m_CurrentVC; // +0x78
    NSString * m_nsTempNickName; // +0x80
    BOOL m_bHaveInvoiceInfo; // +0x88
    WCTableViewManager * m_tableViewMgr; // +0x90
    RingToneSettingCellHandler * _ringToneSettingCellHandler; // +0x98
    GetWecoinBalanceResponse * _wecoinBalanceResponse; // +0xa0
    SettingMyAccountExtInfoLogic * _m_infoLogic; // +0xa8
    SettingMyProfileViewController * _retainSelfForInvoiceRequest; // +0xb0
}
- (BOOL)isNeedShowWCPay;
- (void)showModifyUserNameProtocol;
- (void)updateTableCell;
- (id)getSettingHeadImage;
- (void)updateHead:(id)arg1;
- (void)onChangeImg;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)shouldRestrictContentViewSize;
- (void)fetchData;
- (id)wccoinCellRightView;
- (void)makeChangeImg;
- (id)createNameEditorViewController;
- (void)presentModalViewControllerForDL:(id)arg1 animated:(BOOL)arg2;
- (id)makeBindPhoneView;
- (void)showBindPhone;
- (void)showModifyNickName;
- (void)showModifyNickName:(id)arg1;
- (void)showModifyPatpatSuffix;
- (void)showModifyPatpatSuffixWithScene:(unsigned long long)arg1;
- (void)showQRInfoView;
- (void)showMyAddressInfoView;
- (void)showInvoiceView;
- (void)showWCCoinView;
- (void)dealloc;
- (void)preLoadGlobalRing;
- (void)OnGetInvoiceRet:(BOOL)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)onInfoChange;
- (void)onModifyNickName:(id)arg1 vc:(id)arg2;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)setupDeepLinkConfig;
- (void)viewDidTransitionToNewSize;
- (void)didPatSuffixModified;
- (void)onFinderSvrExptConfigHitChanged:(int)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)bindPhoneReturn;
- (void)registerYReportSdk;
- (void)Save;
- (id)makeSignView;
- (id)getSexString;
- (id)getAddressString;
- (void)onModifySex:(id)arg1;
- (void)saveNewSign:(id)arg1;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)showModifySexView;
- (void)showModifyAddressView;
- (void)showModifySignView;
- (void)showRingTonePage;
- (id)ringToneSettingCellHandler;
- (void)setRingToneSettingCellHandler:(id)arg1;
- (id)wecoinBalanceResponse;
- (void)setWecoinBalanceResponse:(id)arg1;
- (id)m_infoLogic;
- (void)setM_infoLogic:(id)arg1;
- (id)retainSelfForInvoiceRequest;
- (void)setRetainSelfForInvoiceRequest:(id)arg1;
- (void).cxx_destruct;
@end
