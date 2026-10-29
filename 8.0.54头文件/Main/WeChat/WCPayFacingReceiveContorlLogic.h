@interface WCPayFacingReceiveContorlLogic : WCPayControlLogic <PBMessageObserverDelegate, IOplogExt, WCPayF2FQrcodeCgiDelegate, WCPayApplyQrcodeCgiDelegate, WCPaySaveQrcodeCgiDelegate, MMWebViewDelegate, WCPayGetMchQRCodeCgiDelegate, WCPaySaveMchQRCodeCgiDelegate, WCPayNotifyMchQRCodeSaveCgiDelegate, WCPaySetMchQRCodeFixedCgiDelegate, WCPayMchCodeVoiceOperateCgiDelegate, WCPayF2fShortTermQrcodeCgiDelegate, WCPayMchShortTermQrcodeCgiDelegate, WCPayQrcodeSaveNotifyCgiDelegate, WCPayFacingReceiveQRCodeViewControllerDelegate, WCPayFacingReceiveFixedAmountViewControllerDelegate>
{
    NSString * m_nsFacingAmountTotalMoney; // +0x38
    NSString * m_nsFacingAmountDesc; // +0x40
    BOOL _m_isSoundOn; // +0x48
    BOOL _m_bHasReportBottomDetailItem; // +0x49
    BOOL _m_isOnBackground; // +0x4a
    BOOL _bHasReportShowPage; // +0x4b
    BOOL _refresh_url_has_processed_user; // +0x4c
    BOOL _refresh_url_has_processed_mch; // +0x4d
    int _currentCodeType; // +0x50
    WCPayF2FQrcodeCgi * _m_getQRCodeCgi; // +0x58
    WCPayApplyQrcodeCgi * _m_applyQRCodeCgi; // +0x60
    WCPaySaveQrcodeCgi * _m_saveQRCodeCgi; // +0x68
    WCPayQrcodeSaveNotifyCgi * _qrcodeSaveNotifyCgi; // +0x70
    MMWebViewController * _uploadIdWebView; // +0x78
    WCPayGetMchQRCodeCgi * _getMchQRCodeCgi; // +0x80
    WCPaySaveMchQRCodeCgi * _saveMchQRCodeCgi; // +0x88
    WCPayNotifyMchQRCodeSaveCgi * _notifyMchQRCodeSaveCgi; // +0x90
    WCPayMchCodeVoiceOperateCgi * _mchCodeVoiceOperateCgi; // +0x98
    WCPayFacingReceiveQRCodeViewController * _m_WCPayFacingReceiveQRCodeViewController; // +0xa0
    WCPayF2fShortTermQrcodeCgi * _shortTermQrcodeCgi; // +0xa8
    MMTimer * _getUserShortTermCodeTimer; // +0xb0
    MMTimer * _getUserShortTermCodeErrorTimer; // +0xb8
    long long _refresh_url_last_time_user; // +0xc0
    long long _fixed_refresh_url_last_time_user; // +0xc8
    WCPayMchShortTermQrcodeCgi * _shortTermQrcodeMchCgi; // +0xd0
    MMTimer * _getMchShortTermCodeTimer; // +0xd8
    MMTimer * _getMchShortTermCodeErrorTimer; // +0xe0
    long long _refresh_url_last_time_mch; // +0xe8
    long long _fixed_refresh_url_last_time_mch; // +0xf0
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)resume;
- (void)pause;
- (void)dealloc;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (void)WCPayFacingReceiveWitchBalance;
- (void)WCPayFacingReceiveNoTruthNameBtnDone;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (id)WCPayFacingReceiveGetOfflineLogo;
- (id)WCPayFacingReceiveGetOfflineSlogan;
- (void)WCPayFacingReceiveApplyQRCode:(id)arg1;
- (void)WCPayFacingReceiveSaveQRCode:(id)arg1 feeType:(id)arg2 usage:(id)arg3 latitude:(id)arg4 longtitude:(id)arg5 timeStamp:(id)arg6 saveNotifyInfo:(id)arg7 desc:(id)arg8;
- (void)WCPayFacingReceiveNotifySaveQRCode:(unsigned int)arg1 isFixedCode:(BOOL)arg2;
- (int)getCurrentFacingReceiveCodeType;
- (void)userChangeFacingReceiveCodeType:(int)arg1;
- (void)needRefreshMchCodeDataFromSvr;
- (void)onApplyQrcode:(id)arg1;
- (void)onApplyQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)onSaveQrcode:(id)arg1;
- (void)onSaveQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)onGetF2FQrcode:(id)arg1;
- (void)onGetF2FQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)requestQRCodeSaveNotify:(unsigned int)arg1 isFixedCode:(BOOL)arg2;
- (void)onWCPayQrcodeSaveNotifyCgiResp:(id)arg1;
- (void)onWCPayQrcodeSaveNotifyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)webViewReturn:(id)arg1;
- (void)playVibration;
- (void)VerifyUserInfo;
- (BOOL)isShowingUserFacingReceiveCode;
- (BOOL)isReceiveOptionEnabled;
- (id)currentReceiveOptionInfo;
- (void)reportShowPage;
- (void)refreshViewController;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(BOOL)arg1;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(BOOL)arg1;
- (void)updateSoundOn:(BOOL)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)handleSyncOplogFail;
- (void)handleSyncOplogSuccess;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)WCPayFacingReceiveRefreshVoiceOperationSetting;
- (BOOL)isMchCodeAbtestOpen;
- (void)requestGetMchCodeUrlFromSvrNeedLoadCache:(BOOL)arg1;
- (void)onGetMchQRCodeCgiResp:(id)arg1;
- (void)onGetSaveMchQRCodeCgiResp:(id)arg1;
- (void)requestMchQRCodeSaveNotify:(unsigned int)arg1 isFixedCode:(BOOL)arg2;
- (void)onGetNotifyMchQRCodeSaveCgiResp:(id)arg1;
- (void)requestMchCodeVoiceOperateWithScene:(unsigned int)arg1;
- (void)onGetMchCodeVoiceOperateCgiResp:(id)arg1;
- (void)updateMchCodeVoiceSwitchWithState:(BOOL)arg1;
- (void)startShortTermQrCodeTimer:(int)arg1;
- (void)doGetMchShortTermQrCode;
- (void)doGetMchShortTermQrCodeActively;
- (void)doGetMchShortTermQrCode:(BOOL)arg1;
- (void)doGetMchShortTermQrCodeWithLoading:(BOOL)arg1;
- (void)doGetUserShortTermQrCode;
- (void)doGetUserShortTermQrCodeActively;
- (void)doGetUserShortTermQrCode:(BOOL)arg1;
- (void)doGetShortTermQrCode:(int)arg1 isFixedCode:(BOOL)arg2 isHardRefresh:(BOOL)arg3 isTimeoutRefresh:(BOOL)arg4;
- (void)doGetShortTermQrCodeForFixedAmount:(int)arg1 Money:(unsigned long long)arg2 Description:(id)arg3;
- (void)onCgiGetShortTermQrcodeResp:(id)arg1;
- (void)continueOnSuccessfullyGetShortTermQrcodeResp:(int)arg1 hasDesc:(BOOL)arg2;
- (void)onCgiGetMchShortTermQrcodeResp:(id)arg1;
- (void)continueOnSuccessfullyGetMchShortTermQrcodeResp:(int)arg1 hasDesc:(BOOL)arg2;
- (void)startShortTermQrCodeErrorTimer:(int)arg1;
- (void)doGetUserShortTermQrCodeError;
- (void)doGetMchShortTermQrCodeError;
- (void)doGetShortTermQrCodeError:(int)arg1;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onViewEnterForeground:(id)arg1;
- (void)onViewEnterBackground:(id)arg1;
- (BOOL)hasMchQrcode;
- (BOOL)m_isSoundOn;
- (void)setM_isSoundOn:(BOOL)arg1;
- (id)m_getQRCodeCgi;
- (void)setM_getQRCodeCgi:(id)arg1;
- (id)m_applyQRCodeCgi;
- (void)setM_applyQRCodeCgi:(id)arg1;
- (id)m_saveQRCodeCgi;
- (void)setM_saveQRCodeCgi:(id)arg1;
- (id)qrcodeSaveNotifyCgi;
- (void)setQrcodeSaveNotifyCgi:(id)arg1;
- (BOOL)m_bHasReportBottomDetailItem;
- (void)setM_bHasReportBottomDetailItem:(BOOL)arg1;
- (BOOL)m_isOnBackground;
- (void)setM_isOnBackground:(BOOL)arg1;
- (id)uploadIdWebView;
- (void)setUploadIdWebView:(id)arg1;
- (int)currentCodeType;
- (void)setCurrentCodeType:(int)arg1;
- (id)getMchQRCodeCgi;
- (void)setGetMchQRCodeCgi:(id)arg1;
- (id)saveMchQRCodeCgi;
- (void)setSaveMchQRCodeCgi:(id)arg1;
- (id)notifyMchQRCodeSaveCgi;
- (void)setNotifyMchQRCodeSaveCgi:(id)arg1;
- (id)mchCodeVoiceOperateCgi;
- (void)setMchCodeVoiceOperateCgi:(id)arg1;
- (BOOL)bHasReportShowPage;
- (void)setBHasReportShowPage:(BOOL)arg1;
- (id)m_WCPayFacingReceiveQRCodeViewController;
- (void)setM_WCPayFacingReceiveQRCodeViewController:(id)arg1;
- (id)shortTermQrcodeCgi;
- (void)setShortTermQrcodeCgi:(id)arg1;
- (id)getUserShortTermCodeTimer;
- (void)setGetUserShortTermCodeTimer:(id)arg1;
- (id)getUserShortTermCodeErrorTimer;
- (void)setGetUserShortTermCodeErrorTimer:(id)arg1;
- (long long)refresh_url_last_time_user;
- (void)setRefresh_url_last_time_user:(long long)arg1;
- (long long)fixed_refresh_url_last_time_user;
- (void)setFixed_refresh_url_last_time_user:(long long)arg1;
- (BOOL)refresh_url_has_processed_user;
- (void)setRefresh_url_has_processed_user:(BOOL)arg1;
- (id)shortTermQrcodeMchCgi;
- (void)setShortTermQrcodeMchCgi:(id)arg1;
- (id)getMchShortTermCodeTimer;
- (void)setGetMchShortTermCodeTimer:(id)arg1;
- (id)getMchShortTermCodeErrorTimer;
- (void)setGetMchShortTermCodeErrorTimer:(id)arg1;
- (long long)refresh_url_last_time_mch;
- (void)setRefresh_url_last_time_mch:(long long)arg1;
- (long long)fixed_refresh_url_last_time_mch;
- (void)setFixed_refresh_url_last_time_mch:(long long)arg1;
- (BOOL)refresh_url_has_processed_mch;
- (void)setRefresh_url_has_processed_mch:(BOOL)arg1;
- (void).cxx_destruct;
@end

