@interface WCPayOverseaFacingReceiveTransferCancelArgument : NSObject
{
    int _iCurrency; // +0x8
    unsigned int _uiIsSetAmount; // +0xc
    NSString * _nsRecvUsername; // +0x10
    NSString * _nsQRCodeId; // +0x18
    unsigned long long _uiTotalAmount; // +0x20
}
- (id)urlArgumentData;
- (id)nsRecvUsername;
- (void)setNsRecvUsername:(id)arg1;
- (id)nsQRCodeId;
- (void)setNsQRCodeId:(id)arg1;
- (int)iCurrency;
- (void)setICurrency:(int)arg1;
- (unsigned int)uiIsSetAmount;
- (void)setUiIsSetAmount:(unsigned int)arg1;
- (unsigned long long)uiTotalAmount;
- (void)setUiTotalAmount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
