@interface WCPayF2FReceiveModalViewData : NSObject
{
    unsigned int _qrcodeLevel; // +0x8
    NSString * _title; // +0x10
    NSString * _qrcodeUrl; // +0x18
    NSString * _headImageUrl; // +0x20
    NSString * _confirmBtn; // +0x28
    NSString * _tips; // +0x30
    NSString * _receiverInfo; // +0x38
}
- (id)initWithF2FMiniProgramConfirmRcvrResp:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)qrcodeUrl;
- (void)setQrcodeUrl:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (unsigned int)qrcodeLevel;
- (void)setQrcodeLevel:(unsigned int)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)receiverInfo;
- (void)setReceiverInfo:(id)arg1;
- (void).cxx_destruct;
@end
