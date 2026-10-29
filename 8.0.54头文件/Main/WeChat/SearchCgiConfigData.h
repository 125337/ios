@interface SearchCgiConfigData : NSObject <PBCoding>
{
    unsigned int _baseTime; // +0x8
    unsigned int _expiredTime; // +0xc
    unsigned int _clientVersion; // +0x10
    unsigned int _h5Version; // +0x14
    NSMutableDictionary * dicWSConfig; // +0x18
    NSString * _searchID; // +0x20
    NSString * _lang; // +0x28
    NSMutableDictionary * _dicData; // +0x30
}
+ (void)PBArrayAdd_searchID;
+ (void)PBArrayAdd_baseTime;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_h5Version;
+ (void)PBArrayAdd_lang;
+ (void)PBArrayAdd_dicData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)updateWSConfig;
- (void)reset;
- (void)setCurrentContext;
- (BOOL)checkValid;
- (BOOL)checkLangValid;
- (id)dicWSConfig;
- (void)setDicWSConfig:(id)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (unsigned int)baseTime;
- (void)setBaseTime:(unsigned int)arg1;
- (unsigned int)expiredTime;
- (void)setExpiredTime:(unsigned int)arg1;
- (unsigned int)clientVersion;
- (void)setClientVersion:(unsigned int)arg1;
- (unsigned int)h5Version;
- (void)setH5Version:(unsigned int)arg1;
- (id)lang;
- (void)setLang:(id)arg1;
- (id)dicData;
- (void)setDicData:(id)arg1;
- (void).cxx_destruct;
@end

