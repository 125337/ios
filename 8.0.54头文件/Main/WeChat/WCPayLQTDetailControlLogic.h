@interface WCPayLQTDetailControlLogic : WCPayControlLogic <WCPayLQTDetailViewControllerDelegate, WCPayLQTQryUserFundDetailCgiDelegate, WCPayLQTCloseFundAccountCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayLQTMoneyControlLogicDelegate, WCPayLQTOpenLqbAccountCgiDelegate, WCPayLQTOnClickRedDotCgiDelegate, WCPayRealNameTipsViewControllerDelegate, WCPayLQTAutoChargeSetttingViewControllerDelegate, WCPayLQTAutoChargeQrySettingCgiDelegate, WCPayLQTAutoChargeModifyTimeCgiDelegate, WCPayLQTAutoChargeOpenCgiDelegate, MMUseCaseCallback, WCPayLQTAutoChargeCloseCgiDelegate, WCPlayerConfigViewControllerDelegate>
{
    BOOL _bIsLQTFetchOrSaveSucc; // +0x38
    BOOL _bHasShowRealnameGuide; // +0x39
    id <WCPayLQTDetailControlLogicDelegate> _logicDelegate; // +0x40
    NSString * _traceInfo; // +0x48
    WCPayLQTQryUserFundDetailCgi * _qryDetailCgi; // +0x50
    WCPayLQTCloseFundAccountCgi * _closeFundCgi; // +0x58
    WCPayLQTMoneyControlLogic * _lqtMoneyControlLogic; // +0x60
    WCPayLQTOpenLqbAccountCgi * _lqbOpenAccoutCgi; // +0x68
    WCPayLQTOnClickRedDotCgi * _lqtOnClickRedDotCgi; // +0x70
    unsigned long long _fromScene; // +0x78
    MMTipsViewController * _upgradeTipsView; // +0x80
    unsigned long long _getPwdScene; // +0x88
    WCPayLQTAutoChargeQrySettingCgi * _autoChargeQrySettingCgi; // +0x90
    WCPayLQTAutoChargeOpenCgi * _autoChargeOpenCgi; // +0x98
    WCPayLQTAutoChargeCloseCgi * _autoChargeCloseCgi; // +0xa0
    WCPayLQTAutoChargeModifyTimeCgi * _autoChargeModifyTimeCgi; // +0xa8
}
- (void)updateTraceInfo:(id)arg1;
- (void)dealloc;
- (id)initWithFromScene:(unsigned long long)arg1 controlData:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)gotoLQTDetailViewControllerAndRequestData;
- (void)onDetailViewControllerBack;
- (void)onDetailViewControllerSaveBtnClick;
- (void)onDetailViewControllerFetchBtnClick;
- (void)startLQTMoneyControlLogicWithMoneyScece:(unsigned long long)arg1;
- (void)onDetailViewControllerUnBindBtnClick;
- (void)onDetailViewControllerNeedUpdateDataFromSvr;
- (void)onDetailViewControllerNeedUpdateDataFromSvrWithLoading;
- (void)onDetailViewControllerClickAutoChargeSetting;
- (void)onLQTMoneyControlLogicUpdateTraceInfo:(id)arg1;
- (void)onLQTMoneyControlLogicStop:(BOOL)arg1;
- (void)onLQTMoneyControlLogicNeedToRefreshLQTDetail;
- (void)onLQTMoneyControlLogicNeedToRefreshBalanceDetail;
- (void)showPayPwdViewControllerWithScene:(unsigned long long)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)queryUserLQTDetailFromSvrShouldLoading:(BOOL)arg1;
- (void)queryUserLQTDetailFromSvrShouldLoading:(BOOL)arg1 loadCache:(BOOL)arg2;
- (void)onGetLQTQryUserFundDetailResp:(id)arg1;
- (void)onGetLQTQryUserFundDetailPopItems:(id)arg1;
- (void)onGetDetailPopItems:(id)arg1 scene:(unsigned long long)arg2;
- (void)onPopsItemClick:(id)arg1;
- (void)onGetLQTQryUserFundDetailRealnameGuideInfo:(id)arg1;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)sendCloseFundAccountRequestWithPwdString:(id)arg1;
- (void)onGetLQTCloseFundAccountResp:(id)arg1;
- (void)delayDismissViewControllerOnCloseAccount;
- (void)sendLqbOpenAccountRequest;
- (void)onGetLqbOpenAccountCgiResp:(id)arg1;
- (void)clickLqbOpenAccountError;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onDetailViewControllerClickDeposit;
- (void)onDetailViewControllerShouldPopItem:(id)arg1 fromTransferIn:(BOOL)arg2;
- (void)onDetailViewContollerClickRedDot:(id)arg1;
- (void)BalanceDetailJumpToLQTSave:(id)arg1 showKeyboard:(BOOL)arg2 entranceType:(int)arg3 bindSerial:(id)arg4 amount:(id)arg5 vcDelegate:(id)arg6;
- (void)reportLQTUpgradeV2:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)gotoSettingViewControllerAndPutDetailViewControllerBack;
- (void)onChargeSettingViewControllerBack;
- (void)onUserOpenAutoChargeSetting;
- (void)onUserCloseAutoChargeSetting;
- (void)onUserModifyAutoChargeTime:(id)arg1;
- (void)refreshAutoSettingViewControllerWithOldData;
- (void)getLQTAutoChargeQrySettingDataFromSvr:(BOOL)arg1;
- (void)onGetLQTAutoChargeQrySettingCgiResp:(id)arg1 fromServer:(BOOL)arg2;
- (void)sendAutoChargeSettingOpenRequestWithPayPwd:(id)arg1;
- (void)onGetLQTAutoChargeOpenResp:(id)arg1;
- (void)sendAutoChargeSettingCloseRequestWithPayPwd:(id)arg1;
- (void)onGetLQTAutoChargeCloseCgiResp:(id)arg1;
- (void)sendAutoChargeSettingModifyTimeRequestWithModifyTime:(id)arg1;
- (void)onGetLQTAutoChargeModifyTimeResp:(id)arg1;
- (void)onGetLQTOnClickRedDotResp:(id)arg1;
- (void)call:(id)arg1;
- (id)genStaticVideoPlayInfo:(id)arg1;
- (id)generateDownloadArgsWrap:(id)arg1;
- (id)getTempVideoPath:(id)arg1;
- (id)getFormatVideoPath:(id)arg1;
- (id)getTempDirectory;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)traceInfo;
- (void)setTraceInfo:(id)arg1;
- (id)qryDetailCgi;
- (void)setQryDetailCgi:(id)arg1;
- (id)closeFundCgi;
- (void)setCloseFundCgi:(id)arg1;
- (id)lqtMoneyControlLogic;
- (void)setLqtMoneyControlLogic:(id)arg1;
- (id)lqbOpenAccoutCgi;
- (void)setLqbOpenAccoutCgi:(id)arg1;
- (id)lqtOnClickRedDotCgi;
- (void)setLqtOnClickRedDotCgi:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (BOOL)bIsLQTFetchOrSaveSucc;
- (void)setBIsLQTFetchOrSaveSucc:(BOOL)arg1;
- (id)upgradeTipsView;
- (void)setUpgradeTipsView:(id)arg1;
- (BOOL)bHasShowRealnameGuide;
- (void)setBHasShowRealnameGuide:(BOOL)arg1;
- (unsigned long long)getPwdScene;
- (void)setGetPwdScene:(unsigned long long)arg1;
- (id)autoChargeQrySettingCgi;
- (void)setAutoChargeQrySettingCgi:(id)arg1;
- (id)autoChargeOpenCgi;
- (void)setAutoChargeOpenCgi:(id)arg1;
- (id)autoChargeCloseCgi;
- (void)setAutoChargeCloseCgi:(id)arg1;
- (id)autoChargeModifyTimeCgi;
- (void)setAutoChargeModifyTimeCgi:(id)arg1;
- (void).cxx_destruct;
@end

