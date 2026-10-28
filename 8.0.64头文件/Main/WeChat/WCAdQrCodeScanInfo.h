@interface WCAdQrCodeScanInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _needUpdateQrUrl; // +0x8
    NSString * _qrUrl; // +0x10
    NSString * _qrExtInfo; // +0x18
    unsigned long long _qrResultType; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isValidForWeWork;
- (id)qrUrl;
- (void)setQrUrl:(id)arg1;
- (id)qrExtInfo;
- (void)setQrExtInfo:(id)arg1;
- (BOOL)needUpdateQrUrl;
- (void)setNeedUpdateQrUrl:(BOOL)arg1;
- (unsigned long long)qrResultType;
- (void)setQrResultType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
