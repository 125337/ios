@interface WCAccountQRCodeLoginControlLogic : WCAccountBaseControlLogic <QRCodeLoginLogicDelegate, MMKernelExt, WCAccountLoginByQRCodeViewControllerDelegate, WCAccountManualAuthControlLogicDelegate>
{
    QRCodeLoginLogic * m_qrcodeLoginLogic; // +0x30
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x38
    WCPlayLiveWithoutLoginControlLogic * _m_playLiveWthioutLoginLoigc; // +0x40
}
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)getQRCodeViewController;
- (void)onQRCodeLoginUserName:(id)arg1 Pwd:(id)arg2 nickName:(id)arg3 headImgURL:(id)arg4;
- (void)startGetQRCode;
- (id)getQRCodeLoginLogic;
- (void)sendGetQRCodeRequest;
- (id)m_playLiveWthioutLoginLoigc;
- (void)OnQRCodeLoginUUIDExipred;
- (void)OnQRCodeLoginFail;
- (void)OnQRCodeLoginReciveImage:(id)arg1 expiredTime:(unsigned int)arg2 loginURL:(id)arg3;
- (void)OnQRCodeLoginScaned:(id)arg1 nickName:(id)arg2 authUrl:(id)arg3;
- (void)OnQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImgURL:(id)arg4;
- (void)OnQRCodeLoginExpired;
- (void)OnQRCodeLoginCancel;
- (id)OnQRCodeLogicGetCurrentViewController;
- (void)startLogic;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)onRefreshBtnClicked;
- (void)onCancel;
- (void)onCancelLogin;
- (void)onPlayLiveWithoutLogin;
- (void)onMainControllStart;
- (void)onLaunchOpenFirstView;
- (void)setM_playLiveWthioutLoginLoigc:(id)arg1;
- (void).cxx_destruct;
@end

