@interface EmoticonSharedItem : NSObject <PBCoding, NSCopying>
{
    unsigned int _m_packType; // +0x8
    NSString * _m_productId; // +0x10
}
+ (void)PBArrayAdd_m_packType;
+ (void)PBArrayAdd_m_productId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (unsigned int)m_packType;
- (void)setM_packType:(unsigned int)arg1;
- (id)m_productId;
- (void)setM_productId:(id)arg1;
- (void).cxx_destruct;
@end

