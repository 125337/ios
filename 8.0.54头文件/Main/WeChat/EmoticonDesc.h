@interface EmoticonDesc : MMObject <PBCoding>
{
    NSString * _m_md5; // +0x8
    NSMutableArray * _m_LangList; // +0x10
}
+ (void)PBArrayAdd_m_md5;
+ (void)PBArrayAdd_m_LangList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)hasTheSameMd5WithDesc:(id)arg1;
- (id)m_md5;
- (void)setM_md5:(id)arg1;
- (id)m_LangList;
- (void)setM_LangList:(id)arg1;
- (void).cxx_destruct;
@end

