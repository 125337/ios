@interface WCAdRedPacketCoverInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _scene; // +0x8
    NSString * _receiveUri; // +0x10
    NSString * _extInfo; // +0x18
    NSString * _coverUrl; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)receiveUri;
- (void)setReceiveUri:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (void).cxx_destruct;
@end
