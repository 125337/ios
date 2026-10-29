@interface MMFinderLiveNavLiveStreamModel : MMFinderLiveNavLiveStreamBaseModel
{
    FinderNavLiveStreamResponse * _resp; // +0x68
    WCFinderPrefetchCache * _prefetchCache; // +0x70
    FinderNavLiveStreamRequest * _request; // +0x78
}
- (BOOL)enterPullUsePrefetchCache;
- (BOOL)isValidToSaveToDataCache;
- (id)resp;
- (void)setResp:(id)arg1;
- (id)prefetchCache;
- (void)setPrefetchCache:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void).cxx_destruct;
@end

