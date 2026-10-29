@interface SettingMyProfileViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate, IOplogExt, IMyInvoiceLogicMgrExt>
{
    MMHeadImageView * m_headImage; // +0x68
    NameEditorViewController * m_CurrentVC; // +0x70
    NSString * m_nsTempNickName; // +0x78
    BOOL m_bHaveInvoiceInfo; // +0x80
    WCTableViewManager * m_tableViewMgr; // +0x88
    GetWecoinBalanceResponse * _wecoinBalanceResponse; // +0x90
    RingToneSettingCellHandler * _ringToneSettingCellHandler; // +0x98
}
- (BOOL)isNeedShowWCPay;
- (void)showModifyUserNameProtocol;
- (void)updateTableCell;
- (id)getSettingHeadImage;
- (void)updateHead:(id)arg1;
- (void)onChangeImg:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldRestrictContentViewSize;
- (void)fetchData;
- (id)wccoinCellRightView;
- (void)makeChangeImg;
- (void)showModifyNickName;
- (void)showModifyPatpatSuffix;
- (void)showModifyPatpatSuffixWithScene:(unsigned long long)arg1;
- (void)showQRInfoView;
- (void)showMyAddressInfoView;
- (void)showInvoiceView;
- (void)showSocialInfo;
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
- (void)registerYReportSdk;
- (id)wecoinBalanceResponse;
- (void)setWecoinBalanceResponse:(id)arg1;
- (id)ringToneSettingCellHandler;
- (void)setRingToneSettingCellHandler:(id)arg1;
- (void).cxx_destruct;
@end

