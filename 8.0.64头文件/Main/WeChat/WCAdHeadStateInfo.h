@interface WCAdHeadStateInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _unreadStateImageUrl; // +0x8
    NSString * _readStateImageUrl; // +0x10
    NSString * _unreadStateDarkImageUrl; // +0x18
    NSString * _readStateDarkImageUrl; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)unreadStateImageUrl;
- (void)setUnreadStateImageUrl:(id)arg1;
- (id)readStateImageUrl;
- (void)setReadStateImageUrl:(id)arg1;
- (id)unreadStateDarkImageUrl;
- (void)setUnreadStateDarkImageUrl:(id)arg1;
- (id)readStateDarkImageUrl;
- (void)setReadStateDarkImageUrl:(id)arg1;
- (void).cxx_destruct;
@end
