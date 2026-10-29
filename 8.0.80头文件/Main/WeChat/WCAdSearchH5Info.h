@interface WCAdSearchH5Info : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _searchQuery; // +0x8
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;
- (void).cxx_destruct;
@end
