@interface ExtraDeviceLoginMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    unsigned int _uiFromScene; // +0x8
    unsigned int _extDevice; // +0xc
    NSString * _loginUrl; // +0x10
}
- (id)init;
- (void)dealloc;
- (unsigned int)getExtDeviceType;
- (void)handleExtraDeviceLoginUrl:(id)arg1 uiFromScene:(unsigned int)arg2;
- (void)showExtraDeviceLoginViewControllerWithExtInfo:(id)arg1;
- (void)sendExtraDeviceLoginRequset;
- (void)onGetExtDeviceLoginResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)sendDeviceControlCGIWithIsLock:(BOOL)arg1 onlineInfo:(id)arg2;
- (unsigned int)sendDeviceControlCGIWithIsLock:(BOOL)arg1 deviceType:(unsigned int)arg2 uuid:(id)arg3;
- (void)onGetExtDeviceControlReponse:(id)arg1 eventID:(unsigned int)arg2;
- (unsigned int)uiFromScene;
- (void)setUiFromScene:(unsigned int)arg1;
- (id)loginUrl;
- (void)setLoginUrl:(id)arg1;
- (unsigned int)extDevice;
- (void)setExtDevice:(unsigned int)arg1;
- (void).cxx_destruct;
@end

