@interface MMFinderLiveFeedExtraInfoFetchLogic : NSObject <MMFinderLiveFeedExtraInfoFetcherDelegate>
{
    BOOL _started; // +0x8
    FinderLiveStreamGetAsyncLoadInfoConfig * _asyncLoadInfoConfig; // +0x10
    id /* block */ _refreshItemsBlock; // +0x18
    MMFinderLiveFeedExtraInfoFetcher * _fetcher; // +0x20
    MMTimer * _timer; // +0x28
}
- (id)initWithCommentScene:(int)arg1;
- (void)dealloc;
- (int)commentScene;
- (void)setAsyncLoadInfoConfig:(id)arg1;
- (BOOL)enable;
- (long long)timerInterval;
- (void)start;
- (void)stop;
- (void)triggeFetch;
- (void)internalFetch;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
- (void)onFeedExtraInfoFetchConfigUpdate;
- (void)onFeedAggregationCardUpdate:(id)arg1 card:(id)arg2;
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)arg1 previewInfo:(id)arg2;
- (id)asyncLoadInfoConfig;
- (id /* block */)refreshItemsBlock;
- (void)setRefreshItemsBlock:(id /* block */)arg1;
- (id)fetcher;
- (void)setFetcher:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

