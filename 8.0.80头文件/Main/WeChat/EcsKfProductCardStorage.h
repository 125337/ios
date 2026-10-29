@interface EcsKfProductCardStorage : NSObject
{
    NSString * _path; // +0x8
    WCTDatabase * _database; // +0x10
    WCTTable * _table; // +0x18
}
+ (id)getUserKfProductCardRootDir;
+ (id)getUserKfProductCardDBPath;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (BOOL)open;
- (void)close;
- (BOOL)putWithMsgSvrId:(long long)arg1 talker:(id)arg2 cachedXml:(id)arg3 updateTimeMs:(long long)arg4 msgCreateTime:(long long)arg5;
- (id)queryWithMsgSvrId:(long long)arg1 talker:(id)arg2;
- (id)queryByTalker:(id)arg1 limit:(unsigned long long)arg2;
- (BOOL)removeWithMsgSvrId:(long long)arg1 talker:(id)arg2;
- (BOOL)removeByTalker:(id)arg1;
- (BOOL)removeExpiredBefore:(long long)arg1;
- (void)trimToLimit:(unsigned long long)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end
