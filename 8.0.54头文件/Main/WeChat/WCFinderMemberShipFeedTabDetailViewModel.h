@interface WCFinderMemberShipFeedTabDetailViewModel : NSObject <WCFinderMemberShipFeedTabViewModelDelegate>
{
    id <WCFinderMemberShipFeedTabDetailViewModelDelegate> _delegate; // +0x8
    WCFinderMemberShipFeedTabViewModel * _feedTabVM; // +0x10
    NSMutableDictionary * _contentVMDict; // +0x18
}
- (id)initWithFeedTabViewModel:(id)arg1;
- (BOOL)hasFetchFirstPageData;
- (BOOL)hasMoreData;
- (unsigned long long)allDataCount;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMOfTid:(id)arg1;
- (id)getContentVMWithfeedTabContentVM:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (unsigned long long)feedViewerScene;
- (BOOL)isAuthor;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(BOOL)arg2;
- (void)setupCreatorCenterEntranceInfo:(id)arg1 exportId:(id)arg2;
- (id)contentVMDict;
- (void)finderMemberShipZoneFeedTabViewNoMoreData;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewFetchListFail;
- (void)finderMemberShipZoneFeedTabViewDeleteDataItemVM;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedTabVM;
- (void)setFeedTabVM:(id)arg1;
- (void)setContentVMDict:(id)arg1;
- (void).cxx_destruct;
@end

