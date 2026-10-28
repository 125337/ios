@interface WCFinderMemberShipPlaybackTabDetailViewModel : NSObject <WCFinderMemberShipPlaybackTabViewModelDelegate>
{
    id <WCFinderMemberShipPlaybackTabDetailViewModelDelegate> _delegate; // +0x8
    WCFinderMemberShipPlaybackTabViewModel * _playbackTabVM; // +0x10
    NSMutableDictionary * _contentVMDict; // +0x18
}
- (id)initWithPlaybackTabViewModel:(id)arg1;
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
- (void)setupCreatorCenterEntranceInfo:(id)arg1 exportId:(id)arg2;
- (id)contentVMDict;
- (void)finderMemberShipZonePlaybackTabViewNoMoreData;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewFetchListFail;
- (void)finderMemberShipZonePlaybackTabViewDeleteDataItemVM;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playbackTabVM;
- (void)setPlaybackTabVM:(id)arg1;
- (void)setContentVMDict:(id)arg1;
- (void).cxx_destruct;
@end
