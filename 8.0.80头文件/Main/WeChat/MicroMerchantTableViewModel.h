@interface MicroMerchantTableViewModel : NSObject
{
    BOOL _excludesPlaceholder; // +0x8
    BOOL _isLoadingFirstPageData; // +0x9
    BOOL _isUnfoldEnabled; // +0xa
    BOOL _isUnfolded; // +0xb
    WCDataItem * _placeholder; // +0x10
    MicroMerchantTableViewOptions * _options; // +0x18
    WCMicroMerchantFeedsGroup * _wcGroup; // +0x20
    CContact * _placeholderContact; // +0x28
    NSMutableDictionary * _preloadedImageSet; // +0x30
    WCTimeLineVideoPreloadMgr * _videoPreloadMgr; // +0x38
    NSArray * _initialWSFeedList; // +0x40
    NSArray * _allWsFeedIdsList; // +0x48
    long long _currentFecthFeedIndex; // +0x50
    long long _pageIndex; // +0x58
}
- (id)initWithGroupItem:(id)arg1 placeholder:(id)arg2 options:(id)arg3;
- (void)initDatas;
- (void)dealloc;
- (void)clearFeedListCache;
- (void)reloadDataFromServer:(id /* block */)arg1;
- (void)loadFirstPageDataFromServer:(BOOL)arg1 finishBlock:(id /* block */)arg2;
- (void)loadMoreBatchDataFromServer:(id /* block */)arg1;
- (BOOL)enableReport36016;
- (void)report36016:(unsigned long long)arg1 pageIndex:(long long)arg2 reqCount:(long long)arg3 rspCount:(long long)arg4;
- (BOOL)hasMoreData;
- (id)getDataItemInCache:(id)arg1;
- (id)dataItems;
- (void)onFoldAdItemRemoved:(id)arg1;
- (id)_wsFeedListFromMgr;
- (BOOL)isLastSection:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionFeedModel:(long long)arg1;
- (id)sectionFeedModelWithFeedID:(id)arg1;
- (unsigned long long)sectionIndexWithFeedID:(id)arg1;
- (void)preloadImageDatas:(id)arg1;
- (void)preloadVideoDatas:(id)arg1 lastAutoPlayID:(id)arg2;
- (void)stopPreloadVideoData:(id)arg1;
- (void)clearPreloadImage;
- (BOOL)canUnfoldTimeline;
- (BOOL)isCurrentTimelineUnfolded;
- (BOOL)unfoldCurrentTimeline;
- (id)unfoldButtonTitle;
- (id)alreadyUnfoldedTitle;
- (id)unfoldConfirmTitle;
- (id)Demo_unfoldStatusDictionary;
- (BOOL)Demo_isUnfolded;
- (void)setDemo_isUnfolded:(BOOL)arg1;
- (id)_hostContactOfWCDataItem:(id)arg1;
- (id)generateExtAdInfo:(long long)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (id)options;
- (BOOL)excludesPlaceholder;
- (void)setExcludesPlaceholder:(BOOL)arg1;
- (BOOL)isLoadingFirstPageData;
- (void)setIsLoadingFirstPageData:(BOOL)arg1;
- (id)wcGroup;
- (void)setWcGroup:(id)arg1;
- (id)placeholderContact;
- (void)setPlaceholderContact:(id)arg1;
- (id)preloadedImageSet;
- (void)setPreloadedImageSet:(id)arg1;
- (id)videoPreloadMgr;
- (void)setVideoPreloadMgr:(id)arg1;
- (BOOL)isUnfoldEnabled;
- (void)setIsUnfoldEnabled:(BOOL)arg1;
- (BOOL)isUnfolded;
- (void)setIsUnfolded:(BOOL)arg1;
- (id)initialWSFeedList;
- (void)setInitialWSFeedList:(id)arg1;
- (id)allWsFeedIdsList;
- (void)setAllWsFeedIdsList:(id)arg1;
- (long long)currentFecthFeedIndex;
- (void)setCurrentFecthFeedIndex:(long long)arg1;
- (long long)pageIndex;
- (void)setPageIndex:(long long)arg1;
- (void).cxx_destruct;
@end
