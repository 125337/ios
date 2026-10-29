@interface WCPayOverseaGetTransferNameResponse : NSObject
{
    unsigned int _uiSetAmount; // +0x8
    int _iCurrencyType; // +0xc
    NSString * _nsReceiveUsrName; // +0x10
    NSString * _nsReceiveNickName; // +0x18
    NSString * _nsReceiveTruthName; // +0x20
    NSString * _nsFixAmountReceiveDesc; // +0x28
    unsigned long long _uiFixedAmountReceiveTotalMoney; // +0x30
    NSString * _nsCurrencyUnit; // +0x38
    NSString * _nsQRCodeId; // +0x40
    NSString * _nsNotice; // +0x48
    NSString * _nsNoticeUrl; // +0x50
    NSString * _recv_headimgurl; // +0x58
}
+ (id)GenFromDictionary:(id)arg1;
- (id)nsReceiveUsrName;
- (void)setNsReceiveUsrName:(id)arg1;
- (id)nsReceiveNickName;
- (void)setNsReceiveNickName:(id)arg1;
- (id)nsReceiveTruthName;
- (void)setNsReceiveTruthName:(id)arg1;
- (id)nsFixAmountReceiveDesc;
- (void)setNsFixAmountReceiveDesc:(id)arg1;
- (unsigned int)uiSetAmount;
- (void)setUiSetAmount:(unsigned int)arg1;
- (unsigned long long)uiFixedAmountReceiveTotalMoney;
- (void)setUiFixedAmountReceiveTotalMoney:(unsigned long long)arg1;
- (int)iCurrencyType;
- (void)setICurrencyType:(int)arg1;
- (id)nsCurrencyUnit;
- (void)setNsCurrencyUnit:(id)arg1;
- (id)nsQRCodeId;
- (void)setNsQRCodeId:(id)arg1;
- (id)nsNotice;
- (void)setNsNotice:(id)arg1;
- (id)nsNoticeUrl;
- (void)setNsNoticeUrl:(id)arg1;
- (id)recv_headimgurl;
- (void)setRecv_headimgurl:(id)arg1;
- (void).cxx_destruct;
@end

