@interface WCFinderProfileTagFeedViewModel : NSObject <WCFinderStickTopChangeExt, WCFinderProfilePullableFeedViewModel>
{
    id <WCFinderProfileTagFeedViewModelDelegate> _delegate; // +0x8
    id <WCFinderProfileTagFeedViewModelDataChange> _dataDelegate; // +0x10
    WCFinderTopicInfo * _topicInfo; // +0x18
    WCFinderFeedArray * _feedArray; // +0x20
    WCFinderProfileFeedFetcher * _dataFetcher; // +0x28
    WCFinderProfileFeedManager * _feedManager; // +0x30
    WCFinderStreamProfileHeadData * _headData; // +0x38
    long long _feedCount; // +0x40
    WCFinderProfileTagFeedViewModel * _refPageModel; // +0x48
}
+ (id)createDataFetcher:(id)arg1 topicId:(unsigned long long)arg2 username:(id)arg3;
- (id)initWithHeadData:(id)arg1 topicInfo:(id)arg2;
- (id)init;
- (id)loadingState;
- (id)pullingState;
- (unsigned long long)refreshTime;
- (id)createFeedListViewModel;
- (void)loadLocalCacheDataForNoTopic;
- (void)requestFirstPage:(id /* block */)arg1;
- (BOOL)requestNextPage;
- (BOOL)requestPrePage;
- (void)_afterRequestPrePage:(BOOL)arg1;
- (void)fetchJustWatchFeed:(id)arg1 complete:(id /* block */)arg2;
- (void)_continueFetchNextPageUntilFindTid:(id)arg1 retryCnt:(long long)arg2 complete:(id /* block */)arg3;
- (void)onFeedArrayChanged;
- (id)createContentVMFromDataItems:(id)arg1;
- (BOOL)hasFetchFirstPage;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderContactAudienceMuteSwitchChange:(id)arg1;
- (void)onFinderStickTopChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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
- (id)headData;
- (void)setHeadData:(id)arg1;
- (long long)feedCount;
- (void)setFeedCount:(long long)arg1;
- (id)refPageModel;
- (void)setRefPageModel:(id)arg1;
- (void).cxx_destruct;
@end
