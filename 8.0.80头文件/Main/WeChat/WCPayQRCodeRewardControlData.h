@interface WCPayQRCodeRewardControlData : NSObject
{
    NSString * _scanUrl; // +0x8
    NSString * _sourceWebViewUrl; // +0x10
    long long _payChannel; // +0x18
    long long _setupViewControllerScene; // +0x20
    long long _payerSelectedAmount; // +0x28
    CContact * _receiverContact; // +0x30
    CgiGetRewardQrcodeResp * _getQRCodeResp; // +0x38
    CgiScanRewardQrcodeResp * _scanRewardQrcodeResp; // +0x40
    CgiRewardPlaceOrderResp * _placeOrderResp; // +0x48
}
- (id)scanUrl;
- (void)setScanUrl:(id)arg1;
- (id)sourceWebViewUrl;
- (void)setSourceWebViewUrl:(id)arg1;
- (long long)payChannel;
- (void)setPayChannel:(long long)arg1;
- (long long)setupViewControllerScene;
- (void)setSetupViewControllerScene:(long long)arg1;
- (long long)payerSelectedAmount;
- (void)setPayerSelectedAmount:(long long)arg1;
- (id)receiverContact;
- (void)setReceiverContact:(id)arg1;
- (id)getQRCodeResp;
- (void)setGetQRCodeResp:(id)arg1;
- (id)scanRewardQrcodeResp;
- (void)setScanRewardQrcodeResp:(id)arg1;
- (id)placeOrderResp;
- (void)setPlaceOrderResp:(id)arg1;
- (void).cxx_destruct;
@end
