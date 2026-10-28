@interface UPPaymentControl : NSObject <UPWebPayDelegate>
{
    UPPreTableCell * _codecUtil; // +0x8
    BOOL _configHandled; // +0x10
    id _delegate; // +0x18
    NSString * _downloadURL; // +0x20
    id /* block */ _nextBlock; // +0x28
    UPWebController * _wcdWebVC; // +0x30
    id /* block */ _completionBlock; // +0x38
    NSTimer * _directAppTimer; // +0x40
    UPNetworkOperation * _directAppMerchantOperation; // +0x48
    UPNetworkOperation * _directAppDefaultOperation; // +0x50
}
+ (id)defaultControl;
- (id)init;
- (id)initPrivate;
- (void)dealloc;
- (BOOL)startPay:(id)arg1 fromScheme:(id)arg2 mode:(id)arg3 viewController:(id)arg4;
- (void)handleBankAppResult:(id)arg1 wcdWebVC:(id)arg2;
- (BOOL)isHandleBankPayResult;
- (void)handlePaymentResult:(id)arg1 completeBlock:(id /* block */)arg2;
- (BOOL)isPaymentAppInstalled:(id)arg1 withMerchantInfo:(id)arg2;
- (void)getDirectApps:(id)arg1 withMerchantInfo:(id)arg2 succBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)getAppScanLocalConfig;
- (void)getAppScanRemoteConfig:(id)arg1 wihtMerchantInfo:(id)arg2;
- (void)regetAppScanRemoteConfigWithMode:(id)arg1;
- (void)handleScanConfigResult:(id)arg1 withMode:(id)arg2;
- (void)clearPreGetDirectApp;
- (void)getDirctAppTimeOut:(id)arg1;
- (id)getDirectAppsFrom:(id)arg1;
- (id)getDirectAppLocalConfig;
- (void)getDirectAppRemoteConfig:(id)arg1 wihtMerchantInfo:(id)arg2 succBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)regetDirectAppRemoteConfigWithMode:(id)arg1 succBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)getDirectAppInnerErrorWithFailBlock:(id /* block */)arg1;
- (void)handleDirectAppConfigResult:(id)arg1 withMode:(id)arg2 succBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)sendCallingAppWithSchema:(id)arg1 universalLink:(id)arg2;
- (id)AdsSDlNGlCPeVcMb;
- (void)FjLwqpwsSxGFVXEu;
- (void)GSCtxGmJSizWGHNC:(id)arg1;
- (void)startAppWithUniversalLink:(id)arg1 schema:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)XHjpSncjkQDgjBif:(id)arg1;
- (void)dUTJFHkhlePSYsBI:(id)arg1;
- (void)eSDNMt35ls8eCNDu:(id)arg1;
- (void)aTedLrReT78ScDN1:(id)arg1;
- (void)cDXING3SZSdsyerh:(id)arg1;
- (void)onWebPayResult:(id)arg1;
- (BOOL)onSDKPay:(id)arg1;
- (void)onPayCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadURL;
- (void)setDownloadURL:(id)arg1;
- (BOOL)configHandled;
- (void)setConfigHandled:(BOOL)arg1;
- (id /* block */)nextBlock;
- (void)setNextBlock:(id /* block */)arg1;
- (id)wcdWebVC;
- (void)setWcdWebVC:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)directAppTimer;
- (void)setDirectAppTimer:(id)arg1;
- (id)directAppMerchantOperation;
- (void)setDirectAppMerchantOperation:(id)arg1;
- (id)directAppDefaultOperation;
- (void)setDirectAppDefaultOperation:(id)arg1;
- (void).cxx_destruct;
@end
