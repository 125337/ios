@interface WCEmoticonItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString * _emoticonMd5; // +0x8
    NSString * _emoticonSearchKey; // +0x10
}
+ (void)PBArrayAdd_emoticonMd5;
+ (void)PBArrayAdd_emoticonSearchKey;
+ (void)initialize;
+ (id)genItemListFromEditImageAttr:(id)arg1;
+ (id)genListXmlFromEditImageAttr:(id)arg1;
+ (id)genItemListFromListXmlNode:(XmlReaderNode_t *)arg1;
+ (id)genListXmlFromItemList:(id)arg1;
+ (id)fromXmlNode:(XmlReaderNode_t *)arg1;
+ (id)_getNameFromXmlNode:(XmlReaderNode_t *)arg1;
+ (id)_getChildStringForKey:(const char *)arg1 fromXmlNode:(XmlReaderNode_t *)arg2;
+ (id)_getStringFromCharSeq:(const char *)arg1;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)toXml;
- (id)emoticonMd5;
- (void)setEmoticonMd5:(id)arg1;
- (id)emoticonSearchKey;
- (void)setEmoticonSearchKey:(id)arg1;
- (void).cxx_destruct;
@end
