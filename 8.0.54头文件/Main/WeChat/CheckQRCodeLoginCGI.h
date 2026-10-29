@interface CheckQRCodeLoginCGI : NSObject <MessageObserverDelegate, MMWebViewDelegate>
{
    unsigned int _m_checkTime; // +0x8
    id <CheckQRCodeLoginDelegate> _delegate; // +0x10
    NSString * _m_uuid; // +0x18
    NSData * _m_notifyKey; // +0x20
    MMTimer * _m_timer; // +0x28
    WCCgiBlockHelper * _checkLoginQRCodeCgiHelper; // +0x30
    MMWebViewController * _authUrlWebView; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)StartCheckQRCodeWithTime:(unsigned int)arg1 uuid:(id)arg2 notifyKey:(id)arg3;
- (void)StopCheckQRCode;
- (void)internalStopCheckQRCode;
- (void)clearData;
- (BOOL)isDataValid;
- (void)resetCheckTimer;
- (void)stopCheckTimer;
- (void)stopRequest;
- (void)handleNotifyData:(id)arg1;
- (void)handleNotifyStatus:(unsigned int)arg1 userName:(id)arg2 nickName:(id)arg3 pwd:(id)arg4 headImageURL:(id)arg5 authUrl:(id)arg6;
- (void)sendCheckQRCodeRequest;
- (void)handleOpenAuthUrl:(id)arg1;
- (void)changeCheckQrcodeStatePaused:(BOOL)arg1;
- (void)handleResponse:(id)arg1;
- (void)checkLoginQRCodeFailed;
- (void)checkLoginQRCodeCancel;
- (void)webViewDidReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)m_checkTime;
- (void)setM_checkTime:(unsigned int)arg1;
- (id)m_uuid;
- (void)setM_uuid:(id)arg1;
- (id)m_notifyKey;
- (void)setM_notifyKey:(id)arg1;
- (id)m_timer;
- (void)setM_timer:(id)arg1;
- (id)checkLoginQRCodeCgiHelper;
- (void)setCheckLoginQRCodeCgiHelper:(id)arg1;
- (id)authUrlWebView;
- (void)setAuthUrlWebView:(id)arg1;
- (void).cxx_destruct;
@end

