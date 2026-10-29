@interface WCPayOverseaTypeInfoObject : NSObject <PBCoding>
{
    unsigned int _m_typeId; // +0x8
    NSString * _m_typeName; // +0x10
}
+ (void)PBArrayAdd_m_typeName;
+ (void)PBArrayAdd_m_typeId;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (id)m_typeName;
- (void)setM_typeName:(id)arg1;
- (unsigned int)m_typeId;
- (void)setM_typeId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
