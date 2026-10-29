@interface WCFinderProfileTagFeedViewModel : NSObject <WCFinderStickTopChangeExt, WCFinderProfileFeedShareViewModel, WCFinderFeedArrayDelegate, WCFinderProfilePullableFeedViewModel>
{
    BOOL _hasLoadCache; // +0x8
    id <WCFinderProfileTagFeedViewModelDataChange> _dataDelegate; // +0x10
    WCFinderTopicInfo * _topicInfo; // +0x18
    WCFinderFeedArray * _feedArray; // +0x20
    WCFinderProfileFeedFetcher * _dataFetcher; // +0x28
    WCFinderProfileFeedManager * _feedManager; // +0x30
    long long _sortType; // +0x38
    WCFinderStreamProfileHeadData * _headData; // +0x40
    long long _feedCount; // +0x48
    WCFinderProfileTagFeedViewModel * _refPageModel; // +0x50
}
+ (id)createDataFetcher:(id)arg1 topicId:(unsigned long long)arg2 username:(id)arg3;
+ (id)createDataFetcher:(id)arg1 topicId:(unsigned long long)arg2 sortType:(long long)arg3 username:(id)arg4;
- (id)initWithHeadData:(id)arg1 topicInfo:(id)arg2;
- (id)initWithHeadData:(id)arg1 topicInfo:(id)arg2 sortType:(long long)arg3;
- (id)init;
- (id)loadingState;
- (id)pullingState;
- (unsigned long long)refreshTime;
- (id)createFeedListViewModel;
- (void)loadLocalCacheDataForNoTopic;
- (void)fillDataItemFromHomeCGI:(id)arg1;
- (void)requestFirstPage:(id /* block */)arg1;
- (BOOL)requestNextPage:(id /* block */)arg1;
- (BOOL)requestPrePage:(id /* block */)arg1;
- (void)_afterRequestPrePage:(BOOL)arg1;
- (void)fetchJustWatchFeed:(id)arg1 complete:(id /* block */)arg2;
- (void)_continueFetchNextPageUntilFindTid:(id)arg1 retryCnt:(long long)arg2 complete:(id /* block */)arg3;
- (BOOL)feedArray:(id)arg1 ignoreContentVM:(id)arg2;
- (void)onFeedArray:(id)arg1 insertContentVMS:(id)arg2 removeContentVMS:(id)arg3;
- (void)onFeedArrayChanged;
- (id)createContentVMFromDataItems:(id)arg1;
- (BOOL)hasFetchFirstPage;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderContactAudienceMuteSwitchChange:(id)arg1;
- (void)onFinderStickTopChanged:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)dataFetcher;
- (void)setDataFetcher:(id)arg1;
- (id)feedManager;
- (void)setFeedManager:(id)arg1;
- (long long)sortType;
- (void)setSortType:(long long)arg1;
- (id)headData;
- (void)setHeadData:(id)arg1;
- (long long)feedCount;
- (void)setFeedCount:(long long)arg1;
- (id)refPageModel;
- (void)setRefPageModel:(id)arg1;
- (BOOL)hasLoadCache;
- (void)setHasLoadCache:(BOOL)arg1;
- (void).cxx_destruct;
@end
