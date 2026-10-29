@interface WCStoryMultiContactPreviewCell : UICollectionViewCell <WCStoryPreivewPageCollectionControllerDelegate, WCStoryPreviewPageViewDelegate, WCStoryFacadeExt>
{
    id <WCStoryMultiContactPreviewCellDelegate> _delegate; // +0x8
    WCStoryDataUnit * _dataUnit; // +0x10
    WCStoryPreivewPageCollectionController * _controller; // +0x18
    WCStoryPageControl * _pageControl; // +0x20
    MMLoadingView * _loadingView; // +0x28
}
- (id)controller;
- (id)pageControl;
- (id)initWithFrame:(CGRect)arg1;
- (id)loadingView;
- (void)reloadView;
- (void)markCommentRead:(unsigned long long)arg1;
- (void)tryShowCommentsList;
- (void)onStoryPageCollectionControllerChangePage:(id)arg1 pageView:(id)arg2 lastIndexPath:(id)arg3;
- (void)onCommentListView:(id)arg1 show:(BOOL)arg2;
- (void)onLongPressToDeletePageView:(id)arg1;
- (void)onLongPressToHidePageView:(id)arg1;
- (void)onClickPageView:(id)arg1 toHideUIElement:(BOOL)arg2;
- (void)onStoryVideoPlayStarted;
- (id)updateItemOfDataUnitWithTid:(id)arg1;
- (void)reverseDataItemPrivateWithTid:(id)arg1 isInvisible:(BOOL)arg2;
- (void)onDataItemAllCommentMakeRead:(id)arg1;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataUnit;
- (void)setDataUnit:(id)arg1;
- (void)setController:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

