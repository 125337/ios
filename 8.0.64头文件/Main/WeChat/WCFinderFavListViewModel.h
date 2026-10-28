@interface WCFinderFavListViewModel : NSObject <WCFinderFavFeedTopicListDelegate, WCFinderDataItemExt>
{
    BOOL _userFavChanged; // +0x8
    id <WCFinderFavListViewModelDelegate> _delegate; // +0x10
    long long _totalCount; // +0x18
    NSMutableArray * _pageViewModels; // +0x20
    unsigned long long _selectedTopicId; // +0x28
}
- (id)init;
- (id)allFeedPageViewModel;
- (void)setSelectedTopicId:(unsigned long long)arg1;
- (id)selectedTopic;
- (id)topicInfos;
- (id)displayPageViewModel;
- (id)pageViewModelForTopicId:(unsigned long long)arg1;
- (void)selectTopicInfo:(id)arg1;
- (void)updateTopics;
- (void)onFetchFavTagListUpdate:(id)arg1;
- (id)findTopicListVM:(id)arg1 fromExistsVMS:(id)arg2;
- (void)onFavTagPageFeedBecomeEmpty:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByExtention:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (id)pageViewModels;
- (void)setPageViewModels:(id)arg1;
- (unsigned long long)selectedTopicId;
- (BOOL)userFavChanged;
- (void)setUserFavChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
