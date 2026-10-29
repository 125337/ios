@interface EmoticonRemoteRecentUse : NSObject <PBCoding>
{
    unsigned int _lastUsedTime; // +0x8
    NSString * _md5; // +0x10
    NSString * _query; // +0x18
    CEmoticonWrap * _refEmoticon; // +0x20
}
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_lastUsedTime;
+ (void)PBArrayAdd_refEmoticon;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)debugDescription;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)lastUsedTime;
- (void)setLastUsedTime:(unsigned int)arg1;
- (id)refEmoticon;
- (void)setRefEmoticon:(id)arg1;
- (void).cxx_destruct;
@end
