@interface WCAdPushDeleteAdInfo : NSObject <WCAdParserProtocol>
{
    NSString * _snsId; // +0x8
    long long _deleteLevel; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)isValid;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (long long)deleteLevel;
- (void)setDeleteLevel:(long long)arg1;
- (void).cxx_destruct;
@end

