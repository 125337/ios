@interface WCAdMiniShopInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _preloadFlag; // +0x8
    unsigned int _version; // +0xc
    NSString * _username; // +0x10
    NSString * _path; // +0x18
    NSString * _requestId; // +0x20
    NSString * _ecsJumpInfoBase64Str; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (BOOL)preloadFlag;
- (void)setPreloadFlag:(BOOL)arg1;
- (id)ecsJumpInfoBase64Str;
- (void)setEcsJumpInfoBase64Str:(id)arg1;
- (void).cxx_destruct;
@end
