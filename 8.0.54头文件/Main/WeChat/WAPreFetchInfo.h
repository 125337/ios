@interface WAPreFetchInfo : MMObject <PBCoding>
{
    unsigned int _scene; // +0x8
    unsigned int _lastModifyTime; // +0xc
    NSString * _userName; // +0x10
    NSString * _path; // +0x18
    NSString * _query; // +0x20
    NSString * _fetchData; // +0x28
    unsigned long long _lastModifyTimeMs; // +0x30
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_fetchData;
+ (void)PBArrayAdd_lastModifyTime;
+ (void)PBArrayAdd_lastModifyTimeMs;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)fetchData;
- (void)setFetchData:(id)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (unsigned long long)lastModifyTimeMs;
- (void)setLastModifyTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

