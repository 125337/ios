@interface WCFinderFavListDetailViewModel : NSObject
{
    BOOL _stopFetchData; // +0x8
    BOOL _queryContinueFlag; // +0x9
    unsigned long long _refreshTime; // +0x10
    id <WCFinderFavListDetailViewModelDelegate> _delegate; // +0x18
    NSMutableArray * _allSearchDataItems; // +0x20
    WCFinderTopicInfo * _topicInfo; // +0x28
    NSData * _lastBuffer; // +0x30
}
+ (id)initWithLastBuffer:(id)arg1 topicInfo:(id)arg2 queryContinueFlag:(BOOL)arg3 dataSources:(id)arg4 commentScene:(int)arg5;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)onQueryNextPageDataItems;
- (BOOL)isNoMoreData;
- (long long)contentIndexOfTid:(id)arg1;
- (long long)numberOfSection;
- (void)delContentVM:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)allSearchDataItems;
- (void)setAllSearchDataItems:(id)arg1;
- (BOOL)stopFetchData;
- (void)setStopFetchData:(BOOL)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
