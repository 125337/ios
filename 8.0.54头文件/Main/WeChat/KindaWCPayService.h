@interface KindaWCPayService : NSObject <WCPayOfflineLogicDelegate, WCPayWalletLockSettingLogicDelegate, WCPayWalletLockVerifyLogicDelegate, WCPayJSApiVerifyDelegate, WCPayAddPayCardDelegate, WCPayLogicMgrExt, MMKWCPayService>
{
    WCPayAddPayCardLogic * mAddPayCardLogic; // +0x8
    WCPayOfflinePayMainLogic * mOfflinePayMainLogic; // +0x10
    WCPayJSApiVerifyPayPasswordControlLogic * mVerifyPayPasswordLogic; // +0x18
    MMVoidITransmitKvDataCallback * mQuitCallback; // +0x20
    MMITransmitKvData * mData; // +0x28
    MMVoidITransmitKvDataNoticeItemCallback * _bannerDataCallback; // +0x30
    MMVoidITransmitKvDataCallback * _getCardListCallback; // +0x38
}
- (id)getFiltedTruthName:(id)arg1;
- (void)getCardListAndUsrVerifiedInfoImpl:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (id)convertUserInfoData:(id)arg1;
- (id)genPayControlData;
- (void)initOfflinePayMainLogic:(id)arg1;
- (void)initJSApiVerifyPayPasswordControlLogic:(id)arg1;
- (void)initAddPayCardLogic:(id)arg1;
- (void)startUseCaseImpl:(id)arg1 data:(id)arg2 quitCallback:(id)arg3;
- (void)getBannerInfoImpl:(int)arg1 callback:(id)arg2;
- (BOOL)isNeedWalletLock;
- (BOOL)isSetWalletLock;
- (id)getFreezeBalanceMsg;
- (void)clearFreezeBalanceMsg;
- (BOOL)isBalanceMasked;
- (void)setBalanceMasked:(BOOL)arg1;
- (void)onOfflinePayLogicStop:(BOOL)arg1;
- (void)walletLockDidClose:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)patternLockDidSetup:(id)arg1;
- (void)callPaySecurityRefresh;
- (void)walletLockVerifySuccess:(id)arg1;
- (BOOL)walletLockVerifyLogicNeedBlock:(id)arg1;
- (void)onVerifyResult:(id)arg1;
- (id)getParam;
- (id)getCurrentURL;
- (id)getParams;
- (void)onAddPayCardResult:(BOOL)arg1;
- (id)bannerDataCallback;
- (void)setBannerDataCallback:(id)arg1;
- (id)getCardListCallback;
- (void)setGetCardListCallback:(id)arg1;
- (void).cxx_destruct;
@end

