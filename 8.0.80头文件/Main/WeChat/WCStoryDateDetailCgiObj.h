@interface WCStoryDateDetailCgiObj : WCStoryBaseCGIObj
{
    int _timeZone; // +0x8
    id /* block */ _dataBlock; // +0x10
    id /* block */ _dbSyncBlock; // +0x18
    NSString * _dateString; // +0x20
}
- (id)init;
- (id)initWithDateString:(id)arg1 timeZone:(int)arg2;
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
- (id)dateString;
- (void)setDateString:(id)arg1;
- (void).cxx_destruct;
@end
