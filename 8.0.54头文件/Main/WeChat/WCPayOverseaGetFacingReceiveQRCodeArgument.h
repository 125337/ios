@interface WCPayOverseaGetFacingReceiveQRCodeArgument : NSObject
{
    unsigned int _uiIsSetAmount; // +0x8
    unsigned int _uiWalletType; // +0xc
    unsigned long long _uiAmount; // +0x10
    NSString * _nsDesc; // +0x18
}
- (id)urlArgumentData;
- (unsigned int)uiIsSetAmount;
- (void)setUiIsSetAmount:(unsigned int)arg1;
- (unsigned long long)uiAmount;
- (void)setUiAmount:(unsigned long long)arg1;
- (id)nsDesc;
- (void)setNsDesc:(id)arg1;
- (unsigned int)uiWalletType;
- (void)setUiWalletType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

