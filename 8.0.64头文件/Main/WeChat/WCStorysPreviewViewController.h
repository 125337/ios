@interface WCStorysPreviewViewController : WCDragToCloseViewController <UIViewControllerTransitioningDelegate, WCStoryPreivewPageCollectionControllerDelegate, WCStoryPreviewPageViewDelegate, WCFacadeExt, WCStoryFacadeExt>
{
    WCStoryPreivewPageCollectionController * m_collectionController; // +0x70
    WCStoryPageControl * pageControl; // +0x78
    MMUIButton * m_closeBtn; // +0x80
    BOOL _disableResumeMusic; // +0x88
    BOOL _hidePageControl; // +0x89
    BOOL _canDeleteMyOwnStory; // +0x8a
    BOOL _scrollEnabled; // +0x8b
    id <WCStorysPreviewViewControllerDelegate> _delegate; // +0x90
    WCStoryPreviewReportObj * _previewReportObj; // +0x98
    unsigned long long _statusChangePreviewType; // +0xa0
    MMUIButton * _moreActionBtn; // +0xa8
    CGRect _originFrame; // +0xb0
}
- (id)init;
- (void)dealloc;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)willDisappear;
- (void)didDisshow;
- (void)willDisshow;
- (void)didAppear;
- (BOOL)useTransparentNavibar;
- (void)setScrollEnabled:(BOOL)arg1;
- (unsigned long long)dataItemCount;
- (void)playInMute:(BOOL)arg1;
- (void)pause;
- (void)jumpToFirstUnreadCommentPage;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)markUserStoryHasRead:(id)arg1 lastIndexPath:(id)arg2;
- (void)reportExitPreview;
- (void)reloadWithDataItems:(id)arg1;
- (void)reloadWithDataUnit:(id)arg1;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)voiceOverElementEnable:(BOOL)arg1;
- (void)tryToShowCommentList;
- (void)initCollectionController;
- (void)initCollectionView;
- (void)initTopButton;
- (void)reloadPageControl;
- (void)markCommentRead:(unsigned long long)arg1;
- (void)dragUPGestureReceived:(id)arg1;
- (void)pageAction;
- (void)hideSelf;
- (void)clickMoreAction;
- (void)onGetStoryUnReadComment:(id)arg1;
- (void)onGetStoryComentDelete:(id)arg1;
- (void)onDataItemAllCommentMakeRead:(id)arg1;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
- (void)onStoryDeleteSuccessWithDataTid:(id)arg1;
- (id)updateItemOfDataUnitWithTid:(id)arg1;
- (void)onReverseDataItemPrivateWithTid:(id)arg1 isInvisible:(BOOL)arg2;
- (void)onLongPressToHidePageView:(id)arg1;
- (void)reportChangeFeaturedOrHiddenStatusWithTid:(id)arg1 videoType:(unsigned long long)arg2;
- (id)getPreloadMediaItems;
- (void)onStoryPageCollectionControllerChangePage:(id)arg1 pageView:(id)arg2 lastIndexPath:(id)arg3;
- (void)onLongPressToDeletePageView:(id)arg1;
- (void)onClickPageView:(id)arg1 toHideUIElement:(BOOL)arg2;
- (void)onCommentListView:(id)arg1 show:(BOOL)arg2;
- (CGRect)originFrame;
- (void)setOriginFrame:(CGRect)arg1;
- (BOOL)disableResumeMusic;
- (void)setDisableResumeMusic:(BOOL)arg1;
- (BOOL)hidePageControl;
- (void)setHidePageControl:(BOOL)arg1;
- (BOOL)canDeleteMyOwnStory;
- (void)setCanDeleteMyOwnStory:(BOOL)arg1;
- (BOOL)scrollEnabled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)previewReportObj;
- (void)setPreviewReportObj:(id)arg1;
- (unsigned long long)statusChangePreviewType;
- (void)setStatusChangePreviewType:(unsigned long long)arg1;
- (id)moreActionBtn;
- (void)setMoreActionBtn:(id)arg1;
- (void).cxx_destruct;
@end
