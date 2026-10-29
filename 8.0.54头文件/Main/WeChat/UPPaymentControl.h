@interface UPPaymentControl : NSObject <UPWebPayDelegate>
{
    UPPreTableCell * _codecUtil; // +0x8
    BOOL _configHandled; // +0x10
    BOOL _alertShowed; // +0x11
    id _delegate; // +0x18
    NSString * _downloadURL; // +0x20
    id /* block */ _nextBlock; // +0x28
}
+ (id)defaultControl;
- (id)init;
- (id)initPrivate;
- (void)dealloc;
- (BOOL)startPay:(id)arg1 fromScheme:(id)arg2 mode:(id)arg3 viewController:(id)arg4;
- (void)handlePaymentResult:(id)arg1 completeBlock:(id /* block */)arg2;
- (BOOL)isPaymentAppInstalled;
- (id)AdsSDlNGlCPeVcMb;
- (void)FjLwqpwsSxGFVXEu;
- (void)GSCtxGmJSizWGHNC:(id)arg1;
- (void)HmIKStbidWtmSuRy:(id)arg1;
- (BOOL)XHjpSncjkQDgjBif:(id)arg1;
- (void)dUTJFHkhlePSYsBI:(id)arg1;
- (void)cDXING3SZSdsyerh:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWebPayResult:(id)arg1;
- (BOOL)onSDKPay:(id)arg1;
- (void)onPayCancel:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadURL;
- (void)setDownloadURL:(id)arg1;
- (BOOL)configHandled;
- (void)setConfigHandled:(BOOL)arg1;
- (id /* block */)nextBlock;
- (void)setNextBlock:(id /* block */)arg1;
- (BOOL)alertShowed;
- (void)setAlertShowed:(BOOL)arg1;
@end

