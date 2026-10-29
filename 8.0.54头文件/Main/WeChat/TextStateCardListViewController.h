@interface TextStateCardListViewController : MMUIViewController <TextStateFriendSquareTransitionCardList, TextStateBaseCardContentViewDelegate, TextStateCardListCollectionGestureDelegate, MultipleTextStateCardViewDelegate, UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCStatusViewDelegate>
{
    BOOL _showFooter; // +0x68
    BOOL _showPublishEntryWhenNoValidTextState; // +0x69
    BOOL _enableDoubleTapFavorite; // +0x6a
    BOOL _popupCommentPageAtBeginning; // +0x6b
    BOOL _popupFavoritePageAtBeginning; // +0x6c
    BOOL _isShowingFooterView; // +0x6d
    BOOL _needShowGuide; // +0x6e
    BOOL _needShowDoubleTapFavoriteGuide; // +0x6f
    BOOL _dismissing; // +0x70
    BOOL _isPlayingMusicWhenAppear; // +0x71
    BOOL _enableSlidingWindow; // +0x72
    id <TextStateCardListDataProvider> _dataProvider; // +0x78
    id <TextStateCardListDelegate> _delegate; // +0x80
    NSString * _sceneSessionId; // +0x88
    NSString * _sessionId; // +0x90
    NSString * _footnote; // +0x98
    _TtC6WeChat31TextStateFriendSquareTransition * _transition; // +0xa0
    unsigned long long _refCommentID; // +0xa8
    MMUIButton * _closeButton; // +0xb0
    TextStateCardListCollectionView * _collectionView; // +0xb8
    UICollectionViewFlowLayout * _collectionViewLayout; // +0xc0
    TextStateCardListFooterView * _footerView; // +0xc8
    UITapGestureRecognizer * _tapGesture; // +0xd0
    NSString * _cardListId; // +0xd8
    NSIndexPath * _indexPath; // +0xe0
    MultipleTextStateCardView * _currentCardView; // +0xe8
    NSIndexPath * _currentIndexPath; // +0xf0
    id /* block */ _changeItemCompletion; // +0xf8
    TextStateMusicPlayerCoordinator * _musicPlayerCoordinator; // +0x100
    TextStateModel * _browsingTextState; // +0x108
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0x110
    UIPanGestureRecognizer * _panGesture; // +0x118
    MultipleTextStateCardView * _presentFakeCardView; // +0x120
    UIView * _dismissFakeCardView; // +0x128
    UIViewPropertyAnimator * _internalDismissCancelAnimator; // +0x130
    double _internalDismissProgress; // +0x138
    TextStateCardListSlidingWindowRefreshTask * _delayTask; // +0x140
    MultipleTextStateCardCollectionCell * _lastCell; // +0x148
    TextStatePrivacyMgr * _shareScopeMgr; // +0x150
    CGPoint _dismissFakeCardStartPoint; // +0x158
    CGPoint _internalDismissStartPoint; // +0x168
}
+ (id)generateSnapshotViewForView:(id)arg1;
+ (double)cardBottomPaddingForNeedShowGuide:(BOOL)arg1 isSingle:(BOOL)arg2;
+ (double)targetItemAlphaForProgress:(double)arg1;
- (void)refreshSlidingWindowWithTask:(id)arg1;
- (void)updateCurrentIndexPathAndCompleteTask:(id)arg1;
- (id)adjustIndexPathFromTask:(id)arg1;
- (void)initTransitionGesture;
- (void)handleTransitionGesture:(id)arg1;
- (void)handleInternalDismissChange:(id)arg1;
- (void)handleInternalDismissFinish:(id)arg1;
- (BOOL)shouldBeginPanGesture;
- (void)startToDismiss;
- (void)endToDismissWithIsCancelled:(BOOL)arg1;
- (void)prepareInternalDismiss;
- (void)cancelInternalDismiss;
- (id)generateFakeCardViewAtIndex:(unsigned long long)arg1;
- (void)prepareForPresentation;
- (void)onFinishPresentation;
- (void)prepareForDismissal;
- (void)onFinishDismissal;
- (double)beginDismissProgress;
- (id)headImageView;
- (id)cardView;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (void)initView;
- (void)initGesture;
- (void)initData;
- (void)initReport;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractiveDismiss;
- (void)setFootnote:(id)arg1;
- (void)setShowPublishEntryWhenNoValidTextState:(BOOL)arg1;
- (void)setCurrentCardView:(id)arg1 currentIndexPath:(id)arg2;
- (void)updateCurrentCardView;
- (void)updateCurrentCardViewWithContentOffset:(CGPoint)arg1;
- (void)changeToItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollToBottomItemAnimated:(BOOL)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)reloadCurrentItem;
- (void)reloadData;
- (void)clearBrowsingTextState;
- (void)configureMultipleCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)cardBottomPaddingForMultipleCardView:(id)arg1;
- (void)onTap:(id)arg1;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (unsigned long long)beginIndex;
- (id)currentCardContentView;
- (id)currentCardMediaView;
- (void)refreshCardListId;
- (void)checkCardExceed;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)shareScopeMgr;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onMultipleTextStateCard:(id)arg1 willDisplayCard:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onMultipleTextStateCard:(id)arg1 didMoveFromCard:(id)arg2 toCard:(id)arg3;
- (void)onTapPositionButton:(id)arg1;
- (void)onTapFavoriteButton:(id)arg1 isSelected:(BOOL)arg2;
- (void)onTapCommentButton:(id)arg1;
- (void)showCommentListWith:(id)arg1 refCommentId:(unsigned long long)arg2 cardContentView:(id)arg3;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)doSourceAction:(id)arg1;
- (void)doHeadImageAction:(id)arg1;
- (void)onTapTopic:(id)arg1 cardContentView:(id)arg2;
- (void)onTapRedEnvelopeButton:(id)arg1;
- (void)onLongPress:(id)arg1 isDown:(BOOL)arg2;
- (BOOL)collectionView:(id)arg1 shouldBeginPanGesture:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sceneSessionId;
- (void)setSceneSessionId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)showFooter;
- (void)setShowFooter:(BOOL)arg1;
- (id)footnote;
- (BOOL)showPublishEntryWhenNoValidTextState;
- (BOOL)enableDoubleTapFavorite;
- (void)setEnableDoubleTapFavorite:(BOOL)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (BOOL)popupCommentPageAtBeginning;
- (void)setPopupCommentPageAtBeginning:(BOOL)arg1;
- (BOOL)popupFavoritePageAtBeginning;
- (void)setPopupFavoritePageAtBeginning:(BOOL)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (BOOL)isShowingFooterView;
- (void)setIsShowingFooterView:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)cardListId;
- (void)setCardListId:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (BOOL)needShowGuide;
- (void)setNeedShowGuide:(BOOL)arg1;
- (BOOL)needShowDoubleTapFavoriteGuide;
- (void)setNeedShowDoubleTapFavoriteGuide:(BOOL)arg1;
- (id)currentCardView;
- (void)setCurrentCardView:(id)arg1;
- (id)currentIndexPath;
- (void)setCurrentIndexPath:(id)arg1;
- (id /* block */)changeItemCompletion;
- (void)setChangeItemCompletion:(id /* block */)arg1;
- (id)musicPlayerCoordinator;
- (void)setMusicPlayerCoordinator:(id)arg1;
- (id)browsingTextState;
- (void)setBrowsingTextState:(id)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)presentFakeCardView;
- (void)setPresentFakeCardView:(id)arg1;
- (id)dismissFakeCardView;
- (void)setDismissFakeCardView:(id)arg1;
- (CGPoint)dismissFakeCardStartPoint;
- (void)setDismissFakeCardStartPoint:(CGPoint)arg1;
- (BOOL)isDismissing;
- (void)setDismissing:(BOOL)arg1;
- (id)internalDismissCancelAnimator;
- (void)setInternalDismissCancelAnimator:(id)arg1;
- (CGPoint)internalDismissStartPoint;
- (void)setInternalDismissStartPoint:(CGPoint)arg1;
- (double)internalDismissProgress;
- (void)setInternalDismissProgress:(double)arg1;
- (BOOL)isPlayingMusicWhenAppear;
- (void)setIsPlayingMusicWhenAppear:(BOOL)arg1;
- (BOOL)enableSlidingWindow;
- (void)setEnableSlidingWindow:(BOOL)arg1;
- (id)delayTask;
- (void)setDelayTask:(id)arg1;
- (id)lastCell;
- (void)setLastCell:(id)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (void).cxx_destruct;
@end

