@interface WCAdCustomerServiceInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _customerServiceUrl; // +0x8
    WCAdCustomerServiceConfirmInfo * _confirmInfo; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)customerServiceUrl;
- (void)setCustomerServiceUrl:(id)arg1;
- (id)confirmInfo;
- (void)setConfirmInfo:(id)arg1;
- (void).cxx_destruct;
@end

