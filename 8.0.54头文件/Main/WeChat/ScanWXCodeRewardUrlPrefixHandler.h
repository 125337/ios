@interface ScanWXCodeRewardUrlPrefixHandler : ScanWXCodeUrlPrefixHandler <WCPayQRCodeRewardPayControlLogicDelegate>
{
    WCPayQRCodeRewardPayControlLogic * _qrcodeRewardPayerLogic; // +0x8
}
- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)arg1;
- (id)matchingPrefixArray;
- (void)onQRCodeRewardPayLogicStop;
- (char)QRCodeType;
- (id)qrcodeRewardPayerLogic;
- (void)setQrcodeRewardPayerLogic:(id)arg1;
- (void).cxx_destruct;
@end

