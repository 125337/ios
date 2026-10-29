@interface WCMusicSearchCgi : WCBaseCgi
{
    int _batchCount; // +0x8
    long long _minBatchSize; // +0x10
    NSMutableArray * _batchMusicList; // +0x18
    id /* block */ _resultBlock; // +0x20
}
- (id)initWithScene:(unsigned long long)arg1 searchKey:(id)arg2 requestBuffer:(id)arg3 minBatchSize:(long long)arg4 resultBlock:(id /* block */)arg5;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)batchMusicList;
- (int)batchCount;
- (void)setBatchCount:(int)arg1;
- (long long)minBatchSize;
- (void)setMinBatchSize:(long long)arg1;
- (void)setBatchMusicList:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

