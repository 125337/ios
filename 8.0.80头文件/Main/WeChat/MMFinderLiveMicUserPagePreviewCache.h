@interface MMFinderLiveMicUserPagePreviewCache : NSObject
{
    NSMutableDictionary * _cacheMap; // +0x8
}
- (id)init;
- (id)cacheDataForUsername:(id)arg1;
- (void)setCacheData:(id)arg1 forUsername:(id)arg2;
- (void)mergePreviewDataFromRespBuffer:(id)arg1;
- (void)mergeUserPagePreViewData:(id)arg1;
- (id)convertResponseToPreviewData:(id)arg1;
- (void)clearAll;
- (id)cacheMap;
- (void)setCacheMap:(id)arg1;
- (void).cxx_destruct;
@end
