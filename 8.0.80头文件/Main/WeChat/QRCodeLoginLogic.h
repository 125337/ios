@interface QRCodeLoginLogic : NSObject <CheckQRCodeLoginDelegate>
{
    CheckQRCodeLoginCGI * m_checkQRCodeLoginCGI; // +0x8
    id <QRCodeLoginLogicDelegate> _delegate; // +0x10
    WCCgiBlockHelper * _getLoginQRCodeCgiHelper; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)StartQRCodeLogin;
- (void)StopQRCodeLogin;
- (void)onGetLoginQRCodeWithResponse:(id)arg1;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginScaned:(id)arg1 nickName:(id)arg2 authUrl:(id)arg3;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginCancel;
- (id)OnCheckQRCodeLogicGetCurrentViewController;
- (id)m_checkQRCodeLoginCGI;
- (void)setM_checkQRCodeLoginCGI:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)getLoginQRCodeCgiHelper;
- (void)setGetLoginQRCodeCgiHelper:(id)arg1;
- (void).cxx_destruct;
@end
