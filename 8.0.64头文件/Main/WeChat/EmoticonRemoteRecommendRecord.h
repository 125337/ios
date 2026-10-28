@interface EmoticonRemoteRecommendRecord : NSObject <PBCoding>
{
    unsigned int _lastUpdateTime; // +0x8
    NSString * _query; // +0x10
    NSMutableArray * _wrapList; // +0x18
    NSString * _recSessionId; // +0x20
}
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_wrapList;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_recSessionId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)debugDescription;
- (BOOL)isExpired:(unsigned int)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)wrapList;
- (void)setWrapList:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (id)recSessionId;
- (void)setRecSessionId:(id)arg1;
- (void).cxx_destruct;
@end
