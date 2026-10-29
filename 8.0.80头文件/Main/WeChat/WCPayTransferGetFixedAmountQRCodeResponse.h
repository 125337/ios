@interface WCPayTransferGetFixedAmountQRCodeResponse : NSObject
{
    NSString * m_nsFixedAmountQRCode; // +0x8
    unsigned int _qrcode_level; // +0x10
    NSString * _desc; // +0x18
}
- (id)m_nsFixedAmountQRCode;
- (void)setM_nsFixedAmountQRCode:(id)arg1;
- (unsigned int)qrcode_level;
- (void)setQrcode_level:(unsigned int)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
