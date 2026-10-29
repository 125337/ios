@interface WCPayFaceHBQRCodeView : UIView
{
    UIImageView * _imageQRCodeView; // +0x8
    UIImageView * _imageQRCodeEmptyView; // +0x10
    NSString * m_nsQRCode; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 qrWidth:(double)arg2;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2;
- (void)updateQRCode;
- (void)setQRCode:(id)arg1;
- (void).cxx_destruct;
@end
