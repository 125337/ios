@interface WCPayOverseaFacingTransferOrderArgument : NSObject
{
    int _iCurrency; // +0x8
    unsigned int _uiIsSetAmount; // +0xc
    unsigned long long _uiAmount; // +0x10
    NSString * _nsRecvUsername; // +0x18
    NSString * _nsRecvNickname; // +0x20
    NSString * _nsReason; // +0x28
    NSString * _nsRecvDesc; // +0x30
    NSString * _nsQRCodeId; // +0x38
}
- (id)urlArgumentData;
- (unsigned long long)uiAmount;
- (void)setUiAmount:(unsigned long long)arg1;
- (id)nsRecvUsername;
- (void)setNsRecvUsername:(id)arg1;
- (id)nsRecvNickname;
- (void)setNsRecvNickname:(id)arg1;
- (id)nsReason;
- (void)setNsReason:(id)arg1;
- (id)nsRecvDesc;
- (void)setNsRecvDesc:(id)arg1;
- (int)iCurrency;
- (void)setICurrency:(int)arg1;
- (id)nsQRCodeId;
- (void)setNsQRCodeId:(id)arg1;
- (unsigned int)uiIsSetAmount;
- (void)setUiIsSetAmount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
