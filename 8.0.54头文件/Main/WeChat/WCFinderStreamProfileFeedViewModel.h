@interface WCFinderStreamProfileFeedViewModel : WCFinderStreamProfilePageModel <WCFinderProfileFeedManagerDelegate, WCFinderProfileTagFeedViewModelDataChange>
{
    BOOL _hasTags; // +0x8
    BOOL _hasCollections; // +0x9
    BOOL _isPullingFeedModel; // +0xa
    BOOL _hiddenTags; // +0xb
    BOOL _displayTopicExpanded; // +0xc
    id <WCFinderStreamProfileFeedViewModelDelegate> _delegate; // +0x10
    unsigned long long _refreshTime; // +0x18
    NSString * _username; // +0x20
    WCFinderJustWatchCollectionFeedItem * _justWatchCollectionFeedItem; // +0x28
    WCFinderTagListViewLayout * _tagListLayout; // +0x30
    WCFinderProfileCollectionListLayout * _collectionListLayout; // +0x38
    NSMutableArray * _topicVMS; // +0x40
    WCFinderProfileTagFeedViewModel * _justWatchPageVM; // +0x48
    long long _selectedTopicId; // +0x50
    NSArray * _collectionInfos; // +0x58
    NSData * _collectionLastBuffer; // +0x60
}
+ (int)tabId;
+ (BOOL)pageIsRequired;
+ (id)overviewSectionTypes;
+ (BOOL)allowLimitMode;
+ (id)findIndexFromContentVMS:(id)arg1 oldTid:(id)arg2 oldIdx:(long long *)arg3 newTid:(id)arg4 newIdx:(long long *)arg5;
- (void)doLoadCache;
- (BOOL)shouldDisplayTab;
- (id)pullableFeedModel;
- (void)requestPageData;
- (void)_updateCollectionOverviewSection:(unsigned long long)arg1 infoList:(id)arg2;
- (void)_updateMoreFeedOverviewSection;
- (id)init;
- (void)updateCollectionList:(id)arg1;
- (id)genCollectionDetailListViewModel;
- (BOOL)forbidCollectionList;
- (BOOL)shouldShowCollectionListView;
- (BOOL)shouldShowCollectionListShortcut;
- (BOOL)shouldShowCollectionNextEpisodeShortcut;
- (void)updateCollectionAndTagShowState;
- (id)firstCollectionInfo;
- (void)requestFirstPageData;
- (void)_handleJustWatchAfterResp:(id)arg1;
- (BOOL)isAuthorPerspective;
- (void)cleanProfileShowJustWatch;
- (id)displayName;
- (id)viewPageClassName;
- (void)setSelectedTopicId:(long long)arg1;
- (id)selectedTopicInfo;
- (void)setSelectedTopicInfo:(id)arg1;
- (id)displayingTopicFeedVM;
- (id)topicFeedVMForTopicId:(unsigned long long)arg1;
- (id)allFeedViewModel;
- (void)updateTopicList:(id)arg1 collectionInfos:(id)arg2;
- (void)_updateTopicInfoList:(id)arg1;
- (void)updateLayoutItem;
- (id)ensureTopicPageVM:(id)arg1 fromArray:(id)arg2;
- (id)displayTopics;
- (void)refreshTopics;
- (void)onTopicFeedVMDataCountDecreaseLesThan3:(id)arg1;
- (void)retryFirstPageData;
- (void)tryPrefetchJustWatchFeedInfo;
- (void)fetchJustWatchFeed:(id /* block */)arg1;
- (void)ensurePullableJustWatchData:(id)arg1 watchAction:(id)arg2;
- (void)onFeedManager:(id)arg1 onPostingFeedSuccess:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)refreshTime;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)hasTags;
- (void)setHasTags:(BOOL)arg1;
- (BOOL)hasCollections;
- (void)setHasCollections:(BOOL)arg1;
- (id)justWatchCollectionFeedItem;
- (void)setJustWatchCollectionFeedItem:(id)arg1;
- (BOOL)isPullingFeedModel;
- (void)setIsPullingFeedModel:(BOOL)arg1;
- (id)tagListLayout;
- (void)setTagListLayout:(id)arg1;
- (id)collectionListLayout;
- (void)setCollectionListLayout:(id)arg1;
- (id)topicVMS;
- (void)setTopicVMS:(id)arg1;
- (id)justWatchPageVM;
- (void)setJustWatchPageVM:(id)arg1;
- (long long)selectedTopicId;
- (BOOL)hiddenTags;
- (void)setHiddenTags:(BOOL)arg1;
- (BOOL)displayTopicExpanded;
- (void)setDisplayTopicExpanded:(BOOL)arg1;
- (id)collectionInfos;
- (void)setCollectionInfos:(id)arg1;
- (id)collectionLastBuffer;
- (void)setCollectionLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

