@interface WAColdLaunchPreFetchCGILogic : NSObject
{
    WAContact * _contact; // +0x8
    WAThreadSafeMutableDictionary * _cache; // +0x10
    WAThreadSafeMutableDictionary * _fetchType2Observers; // +0x18
}
- (id)initWithContact:(id)arg1;
- (void)asyncDoPreFetchPrivateData;
- (void)processSinglePrefetch:(id)arg1;
- (void)processBatchPrefetch:(unsigned int)arg1;
- (void)sendColdStartFetchDataRequest:(id)arg1;
- (void)handleColdStartPreFetchDataResponse:(id)arg1;
- (void)onColdStartPreFetchRequestFailed:(id)arg1;
- (void)markFetchingWithFetchType:(unsigned int)arg1;
- (void)onGetRemoteDataRet:(BOOL)arg1 fetchType:(unsigned int)arg2 respData:(id)arg3;
- (void)clearCacheDataForFetchType:(unsigned int)arg1;
- (void)clearAllCacheData;
- (void)getColdLaunchPreFetchCGIDataWithFetchType:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)observeFetchType:(unsigned int)arg1 byCompletion:(id /* block */)arg2;
- (void)notifyDidFetchResult:(id)arg1 forFetchType:(unsigned int)arg2;
- (id)generateGetUserPrivacyAuthInfoFetchItem;
- (id)generateGetSettingAuthInfoFetchItem;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)fetchType2Observers;
- (void)setFetchType2Observers:(id)arg1;
- (void).cxx_destruct;
@end

