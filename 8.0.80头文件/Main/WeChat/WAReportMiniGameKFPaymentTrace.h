@interface WAReportMiniGameKFPaymentTrace : WAReportBaseItem
{
    unsigned int _step; // +0x8
    unsigned int _miniGameSessionScene; // +0xc
    unsigned int _messageType; // +0x10
    unsigned int _appMessageInnerType; // +0x14
    unsigned int _blockScene; // +0x18
    NSString * _traceId; // +0x20
    NSString * _miniGameAppId; // +0x28
    NSString * _miniGameUsername; // +0x30
    NSString * _messageUrl; // +0x38
    NSString * _messageTitle; // +0x40
    NSString * _clickUrl; // +0x48
    NSString * _paymentAppId; // +0x50
    NSString * _prepayId; // +0x58
    NSString * _paymentUrl; // +0x60
    NSString * _payResult; // +0x68
    NSString * _totalFeeString; // +0x70
    NSString * _miniGameName; // +0x78
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (id)safeReportString:(id)arg1;
- (unsigned int)step;
- (void)setStep:(unsigned int)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)miniGameAppId;
- (void)setMiniGameAppId:(id)arg1;
- (id)miniGameUsername;
- (void)setMiniGameUsername:(id)arg1;
- (unsigned int)miniGameSessionScene;
- (void)setMiniGameSessionScene:(unsigned int)arg1;
- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg1;
- (unsigned int)appMessageInnerType;
- (void)setAppMessageInnerType:(unsigned int)arg1;
- (id)messageUrl;
- (void)setMessageUrl:(id)arg1;
- (id)messageTitle;
- (void)setMessageTitle:(id)arg1;
- (id)clickUrl;
- (void)setClickUrl:(id)arg1;
- (id)paymentAppId;
- (void)setPaymentAppId:(id)arg1;
- (id)prepayId;
- (void)setPrepayId:(id)arg1;
- (id)paymentUrl;
- (void)setPaymentUrl:(id)arg1;
- (id)payResult;
- (void)setPayResult:(id)arg1;
- (id)totalFeeString;
- (void)setTotalFeeString:(id)arg1;
- (unsigned int)blockScene;
- (void)setBlockScene:(unsigned int)arg1;
- (id)miniGameName;
- (void)setMiniGameName:(id)arg1;
- (void).cxx_destruct;
@end
