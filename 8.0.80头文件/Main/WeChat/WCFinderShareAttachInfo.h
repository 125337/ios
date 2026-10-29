@interface WCFinderShareAttachInfo : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString * _objectId; // +0x8
    NSString * _objectNonceId; // +0x10
}
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_objectNonceId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)fromXML:(XmlReaderNode_t *)arg1;
- (void)fromBrandXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)toXMLV2;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (void).cxx_destruct;
@end
