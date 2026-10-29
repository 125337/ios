@interface WCPayOverseaPayFunctionListRespObject : NSObject <PBCoding>
{
    NSArray * _m_functionList; // +0x8
    NSArray * _m_typeInfoList; // +0x10
}
+ (void)PBArrayAdd_m_functionList;
+ (void)PBArrayAdd_m_typeInfoList;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
+ (id)getSaveRootDir;
+ (id)getSavePathWithTpaCountry:(unsigned int)arg1;
+ (void)checkFileWithTpaCountry:(unsigned int)arg1;
+ (id)cacheObjectWithTpaCountry:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)saveToCacheWithTpaCountry:(unsigned int)arg1;
- (id)m_functionList;
- (void)setM_functionList:(id)arg1;
- (id)m_typeInfoList;
- (void)setM_typeInfoList:(id)arg1;
- (void).cxx_destruct;
@end

