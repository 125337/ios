@interface WCFinderLifeHomePageViewModel : NSObject <WCFinderLifeHomeFeedFlowViewDatas>
{
    BOOL _continueFlag; // +0x8
    int _commentScene; // +0xc
    id <WCFinderLifeHomePageViewModelDelegate> _delegate; // +0x10
    WCFinderHomeLifeFilter * _filter; // +0x18
    unsigned long long _refreshTime; // +0x20
    NSString * _reportTagInfo; // +0x28
    NSData * _lastBuff; // +0x30
    NSMutableArray * _sections; // +0x38
    NSMutableSet * _tidSet; // +0x40
    unsigned long long _loadingState; // +0x48
    WCFinderCachedLocation * _cachedLocation; // +0x50
    unsigned long long _prefetchRemainCount; // +0x58
}
+ (void)requestFirstPageCommentScene:(int)arg1 location:(id)arg2 complete:(id /* block */)arg3;
- (id)initWithCommentScene:(int)arg1 location:(id)arg2 filter:(id)arg3;
- (long long)feedSectionCount;
- (long long)feedItemCountForSection:(long long)arg1;
- (id)contentVMAtSection:(long long)arg1 index:(long long)arg2;
- (id)indexPathWidthTid:(id)arg1;
- (id)dividerForSection:(long long)arg1;
- (id)reportTagInfo;
- (void)reset;
- (void)requestFirstPage;
- (void)loadingFromTop;
- (void)setLoadingState:(unsigned long long)arg1;
- (void)requestNextPage;
- (void)requestDataWithPullType:(unsigned long long)arg1 firstScreen:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)requestDataWithActionFlag:(int)arg1 completion:(id /* block */)arg2;
- (BOOL)deleteContentVM:(id)arg1;
- (void)fetchAsyncInfo:(id)arg1 location:(id)arg2;
- (void)appendDataItems:(id)arg1 layout:(id)arg2;
- (vector<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *> *>, std::allocator<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *> *>>>)groupDataItem:(id)arg1 byLayout:(id)arg2;
- (id)formatSubTags:(id)arg1;
- (void)onPostDataItem:(id)arg1;
- (void)onPostDataItemFailed:(id)arg1;
- (void)onPostDataItemSuccess:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)filter;
- (void)setFilter:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (void)setReportTagInfo:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)tidSet;
- (void)setTidSet:(id)arg1;
- (unsigned long long)loadingState;
- (id)cachedLocation;
- (void)setCachedLocation:(id)arg1;
- (unsigned long long)prefetchRemainCount;
- (void)setPrefetchRemainCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

