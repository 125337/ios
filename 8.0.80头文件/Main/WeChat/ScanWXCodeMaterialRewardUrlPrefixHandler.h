@interface ScanWXCodeMaterialRewardUrlPrefixHandler : ScanWXCodeUrlPrefixHandler <WCPayQRCodeRewardPayControlLogicDelegate, WCPayScanMaterialRewardCodeCgiDelegate, MMWebViewDelegate>
{
    WCPayQRCodeRewardPayControlLogic * _qrcodeRewardPayerLogic; // +0x8
    WCPayScanMaterialRewardCodeCgi * _scanMaterialRewardCgi; // +0x10
}
- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)arg1;
- (void)onGetMaterialRewardCodeScanResp:(id)arg1;
- (void)errorAlertViewClick;
- (id)matchingPrefixArray;
- (void)onQRCodeRewardPayLogicStop;
- (void)webViewReturn:(id)arg1;
- (char)QRCodeType;
- (id)qrcodeRewardPayerLogic;
- (void)setQrcodeRewardPayerLogic:(id)arg1;
- (id)scanMaterialRewardCgi;
- (void)setScanMaterialRewardCgi:(id)arg1;
- (void).cxx_destruct;
@end
