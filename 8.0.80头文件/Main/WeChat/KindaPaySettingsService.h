@interface KindaPaySettingsService : NSObject <WCPayOpenTouchIDAuthLogicDelegate, MMKPaySettingsService>
{
    DelaySwitchSettingLogic * _delaySetting; // +0x8
    MMVoidITransmitKvDataCallback * _bioPayResultCallback; // +0x10
    WCPayUserInfo * _payUserInfo; // +0x18
}
- (long long)getTransferDelayType;
- (void)setTransferDelayType:(long long)arg1;
- (void)commitTransferDelayTypeChange;
- (int)getTransferPhoneGrantFlag;
- (void)setTransferPhoneGrantFlag:(int)arg1;
- (BOOL)getReddotStatus:(id)arg1;
- (void)markReddotConsumed:(id)arg1;
- (long long)getHbRefundWayType;
- (void)setHbRefundWayType:(long long)arg1;
- (void)commitHbRefundWayTypeChange;
- (id)supportedBioPayTypes;
- (BOOL)isBioPayTypeEnabled:(long long)arg1;
- (void)handlePushBioPaySettingPageImpl:(id)arg1;
- (void)setBioPayTypeEnabledImpl:(long long)arg1 enabled:(BOOL)arg2 data:(id)arg3 resultCallback:(id)arg4;
- (void)logGeneralUserAction:(int)arg1;
- (id)payUserInfo;
- (id)delaySetting;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)onWCPayOpenTouchIDAuthLogicOpenFailed:(id)arg1;
- (void)onWCPayCloseTouchIDFailed;
- (void)onWCPayCloseTouchIDSuccess;
- (id)getUnexpiredXMLReddot:(id)arg1;
- (void)markXMLReddotConsumed:(id)arg1;
- (void)setDelaySetting:(id)arg1;
- (id)bioPayResultCallback;
- (void)setBioPayResultCallback:(id)arg1;
- (void)setPayUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
