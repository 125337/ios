@interface WCStoryHistoryPageCgiObj : WCStoryBaseCGIObj
{
    int _timeZone; // +0x8
    id /* block */ _dataBlock; // +0x10
    id /* block */ _dbSyncBlock; // +0x18
    unsigned long long _maxID; // +0x20
}
- (id)init;
- (id)initWithTimeZone:(int)arg1 maxID:(unsigned long long)arg2;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)storyDataItemFromServerResponse:(id)arg1;
- (id /* block */)dataBlock;
- (void)setDataBlock:(id /* block */)arg1;
- (id /* block */)dbSyncBlock;
- (void)setDbSyncBlock:(id /* block */)arg1;
- (int)timeZone;
- (void)setTimeZone:(int)arg1;
- (unsigned long long)maxID;
- (void)setMaxID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

