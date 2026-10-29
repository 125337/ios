@interface WCFinderFollowTabDetailBaseViewModel : NSObject <WCFinderPostDataItemExt>
{
    BOOL _postFeedInsertMachineTab; // +0x8
    id <WCFinderFollowTabDetailVMDelegate> _delegate; // +0x10
    WCFinderFeedContentVM * _preVCData; // +0x18
    NSString * _noMoreDataTips; // +0x20
    NSString * _noDataTips; // +0x28
}
- (id)init;
- (BOOL)needFetchFirstPageData;
- (BOOL)hasFetchFirstPageData;
- (BOOL)hasMoreData;
- (unsigned long long)allDataCount;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMOfTid:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)updateUploadingDataItem:(id)arg1;
- (int)commentScene;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (BOOL)shouldShowUploadDataItem:(id)arg1;
- (BOOL)enableShowPostStateFeed;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)preVCData;
- (void)setPreVCData:(id)arg1;
- (BOOL)postFeedInsertMachineTab;
- (void)setPostFeedInsertMachineTab:(BOOL)arg1;
- (id)noMoreDataTips;
- (void)setNoMoreDataTips:(id)arg1;
- (id)noDataTips;
- (void)setNoDataTips:(id)arg1;
- (void).cxx_destruct;
@end

