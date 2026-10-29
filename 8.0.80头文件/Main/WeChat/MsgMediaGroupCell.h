@interface MsgMediaGroupCell : CommonMessageCellView <MsgImgFullScreenTransitionObject, MsgMediaGroupViewDelegate, IMessageNodeStatusExt>
{
    BOOL _isAnimating; // +0xb8
    BOOL _lastUploadingState; // +0xb9
    MsgMediaGroupView * _flowContentView; // +0xc0
    MsgMediaGroupExpandButton * _expandButton; // +0xc8
    NSMutableArray * _uploadStatusObservingKeys; // +0xd0
    NSMutableArray * _fakeCellViews; // +0xd8
    NSMutableArray * _fakeCards; // +0xe0
    NSMutableArray * _fakeCardOriginFrames; // +0xe8
    NSMutableSet * _slidedVideos; // +0xf0
    NSMutableSet * _slidedLivePhotos; // +0xf8
    NSMutableSet * _slidedPics; // +0x100
}
- (void)onFullscreenBrowserExitAnimationStart;
- (void)onFullscreenBrowserExitAnimationEnd;
- (BOOL)isComponentHidden;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)arg1;
- (double)animationDuration;
- (void)performExpandAnimation:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareFoldAnimation;
- (void)performFoldAnimation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)setViewModel:(id)arg1;
- (void)layoutContentView;
- (void)onAppear;
- (void)onDisappear;
- (void)prepareForReuse;
- (BOOL)canAddFoldButton;
- (void)appendCardNodes:(id)arg1;
- (void)removeCardNodes:(id)arg1;
- (void)setCurrentIndex:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)isMediaPlaying;
- (BOOL)canAutoPlayMedia;
- (BOOL)tryAutoPlayMedia;
- (void)pauseMedia;
- (CGRect)activeCardFrameInView:(id)arg1;
- (void)updateCustomLayout;
- (void)onExtChatBackgroundChanged:(id)arg1;
- (void)addExpandButtonIfNeeded;
- (void)onExpandClicked:(id)arg1;
- (void)refreshExpandButtonDisplay;
- (BOOL)isAnyNodeUploading;
- (void)refreshExpandButtonUploading;
- (void)updateUploadStatusObservers;
- (void)onMessageUpdateStatus;
- (id)displayViewForImageBrowser;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isTouchInView:(id)arg1;
- (void)onTouchUpInside;
- (CGRect)showRectForMenuController;
- (BOOL)canShowForwardMenuItem;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)filteredMenuItems:(id)arg1;
- (id)generateOperationMenu;
- (void)onShowOperationMenu;
- (void)onMenuExpand:(id)arg1;
- (void)onExpand;
- (void)onMenuFav:(id)arg1;
- (void)onMenuSave:(id)arg1;
- (void)onMenuDelete:(id)arg1;
- (void)onMenuRevoke:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onSelectAll:(id)arg1;
- (BOOL)MsgMediaGroupViewGestureShouldBegin:(id)arg1;
- (void)MsgMediaGroupViewDidStartGesture:(id)arg1;
- (void)MsgMediaGroupView:(id)arg1 indexChangedFrom:(long long)arg2 to:(long long)arg3;
- (void)MsgMediaGroupViewWillAutoPlayActiveCard:(id)arg1;
- (id)slidedVideos;
- (id)slidedLivePhotos;
- (id)slidedPics;
- (void)calcSlidedMsgs;
- (id)dynamicStatInfo;
- (id)statInfo;
- (void)report:(id)arg1 event:(id)arg2;
- (id)flowContentView;
- (void)setFlowContentView:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)uploadStatusObservingKeys;
- (void)setUploadStatusObservingKeys:(id)arg1;
- (BOOL)lastUploadingState;
- (void)setLastUploadingState:(BOOL)arg1;
- (id)fakeCellViews;
- (void)setFakeCellViews:(id)arg1;
- (id)fakeCards;
- (void)setFakeCards:(id)arg1;
- (id)fakeCardOriginFrames;
- (void)setFakeCardOriginFrames:(id)arg1;
- (void)setSlidedVideos:(id)arg1;
- (void)setSlidedLivePhotos:(id)arg1;
- (void)setSlidedPics:(id)arg1;
- (void).cxx_destruct;
@end
