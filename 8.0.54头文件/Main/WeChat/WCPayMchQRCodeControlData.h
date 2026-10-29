@interface WCPayMchQRCodeControlData : NSObject
{
    int _mchCodeMoneyScene; // +0x8
    CgiGetQrcodeUrlMchResp * _qrCodeUrlResp; // +0x10
    CgiSaveQrcodeMchResp * _saveQrCodeResp; // +0x18
    CgiGetShortTermQrcodeMchResp * _fixedQrCodeResp; // +0x20
    VoiceOperateSwitchMchResponse * _voiceOperateResp; // +0x28
    NSMutableArray * _arrFacingReceiveMoneyPayer; // +0x30
}
- (id)qrCodeUrlResp;
- (void)setQrCodeUrlResp:(id)arg1;
- (id)saveQrCodeResp;
- (void)setSaveQrCodeResp:(id)arg1;
- (id)fixedQrCodeResp;
- (void)setFixedQrCodeResp:(id)arg1;
- (id)voiceOperateResp;
- (void)setVoiceOperateResp:(id)arg1;
- (int)mchCodeMoneyScene;
- (void)setMchCodeMoneyScene:(int)arg1;
- (id)arrFacingReceiveMoneyPayer;
- (void)setArrFacingReceiveMoneyPayer:(id)arg1;
- (void).cxx_destruct;
@end

