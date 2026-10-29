@interface WCMomentsBizInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _encodedExcerptUrl; // +0x8
}
+ (void)PBArrayAdd_encodedExcerptUrl;
+ (void)initialize;
+ (id)fromXMLParentNode:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)openUrl;
- (BOOL)canShowOriginalArticleSource;
- (id)toXML;
- (id)encodedExcerptUrl;
- (void)setEncodedExcerptUrl:(id)arg1;
- (void).cxx_destruct;
@end

