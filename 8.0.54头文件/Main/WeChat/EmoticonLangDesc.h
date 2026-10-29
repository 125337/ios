@interface EmoticonLangDesc : MMObject <PBCoding>
{
    NSString * _m_languageCode; // +0x8
    NSString * _m_desc; // +0x10
}
+ (void)PBArrayAdd_m_languageCode;
+ (void)PBArrayAdd_m_desc;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)m_languageCode;
- (void)setM_languageCode:(id)arg1;
- (id)m_desc;
- (void)setM_desc:(id)arg1;
- (void).cxx_destruct;
@end

