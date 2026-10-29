@interface MMFinderLiveReadStatMgr : NSObject
{
    NSMutableDictionary * _records; // +0x8
}
- (id)init;
- (void)addReadRecord:(unsigned long long)arg1 commentScene:(int)arg2;
- (BOOL)checkReadRecord:(unsigned long long)arg1;
- (BOOL)checkReadRecord:(unsigned long long)arg1 commentScene:(int)arg2;
- (BOOL)checkReadRecord:(unsigned long long)arg1 commentScenes:(id)arg2;
- (id)records;
- (void)setRecords:(id)arg1;
- (void).cxx_destruct;
@end

