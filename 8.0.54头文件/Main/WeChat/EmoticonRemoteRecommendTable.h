@interface EmoticonRemoteRecommendTable : NSObject
{
    MemoryMappedKV * _recordStorage; // +0x8
    MemoryMappedKV * _recentUseStorage; // +0x10
    EmoticonRemoteRecommendRecord * _headRecord; // +0x18
}
+ (void)clearAll;
- (id)requestRecommendForQuery:(id)arg1;
- (BOOL)updateRecommend:(id)arg1 forQuery:(id)arg2;
- (id)recordStorage;
- (void)clearNoReferencedRecords:(id)arg1;
- (id)getAllRecordKeys;
- (unsigned long long)recordFileSize;
- (id)recentUseStorage;
- (void)updateRecentUseMd5:(id)arg1 lastUsedTime:(unsigned int)arg2 refEmoticon:(id)arg3;
- (id)getRecentUseRecordForQuery:(id)arg1;
- (id)getAllRecentUseQueries;
- (unsigned long long)recentUseFileSize;
- (void)clearNoReferencedRecentUse:(id)arg1;
- (void)setRecordStorage:(id)arg1;
- (void)setRecentUseStorage:(id)arg1;
- (id)headRecord;
- (void)setHeadRecord:(id)arg1;
- (void).cxx_destruct;
@end

