@interface WCPayOverseaReadActivityList : NSObject <PBCoding>
{
    unsigned int _m_tpaCountry; // +0x8
    NSMutableSet * _m_set; // +0x10
}
+ (void)PBArrayAdd_m_set;
+ (void)initialize;
+ (id)cacheObjectWithTpaCountry:(unsigned int)arg1;
+ (id)cacheObjectWithTpaCountryV2:(unsigned int)arg1;
+ (id)getSaveRootDir;
+ (id)getSavePathWithTpaCountry:(unsigned int)arg1;
+ (id)getSavePathWithTpaCountryV2:(unsigned int)arg1;
+ (void)checkFileWithTpaCountry:(unsigned int)arg1;
+ (void)checkFileWithTpaCountryV2:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)addReadActivityId:(id)arg1;
- (BOOL)hasReadActivityId:(id)arg1;
- (void)saveToCache;
- (void)saveToCacheV2;
- (id)m_set;
- (void)setM_set:(id)arg1;
- (unsigned int)m_tpaCountry;
- (void)setM_tpaCountry:(unsigned int)arg1;
- (void).cxx_destruct;
@end

