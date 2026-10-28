@interface WCStoryFriendsCollectionViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCStoryDismissInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate, IWCStoryTimelineDataVMExt>
{
    BOOL _isCleanUnreadStory; // +0x70
    id <WCStoryFriendsCollectionViewControllerDelegate> _delegate; // +0x78
    WCStoryReportUtil * _storyReportUtil; // +0x80
    UICollectionView * _collectionView; // +0x88
    UICollectionViewFlowLayout * _flowLayout; // +0x90
    WCStoryTimelineDataVM * _storyTimelineDataVM; // +0x98
    WCStoryTimelineDataUnit * _storyTimelineDataUnit; // +0xa0
    NSMutableArray * _timestampUnreadCellModelArray; // +0xa8
    NSMutableArray * _timestampReadCellModelArray; // +0xb0
    NSMutableArray * _unreadCornerMessageCellModelArray; // +0xb8
    MMUIButton * _closeButton; // +0xc0
    MMUIView * _topView; // +0xc8
    MMUIView * _contentView; // +0xd0
    MMUIButton * _backgroundButton; // +0xd8
    UIPanGestureRecognizer * _panGesture; // +0xe0
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0xe8
    WCStoryFriendsCollectionDismissTransition * _dismissAnimateTransition; // +0xf0
    WCStoryDismissInteractiveTransition * _dimissInteractiveTransition; // +0xf8
    UILabel * _emptyTipsLabel; // +0x100
    UIButton * _cleanButton; // +0x108
    unsigned long long _clickClearCount; // +0x110
    unsigned long long _clickRenewCount; // +0x118
}
- (void)viewDidLoad;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)reportExposeData;
- (id)userNameStrFromDataUnits:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)storyTimelineDataVM;
- (id)storyTimelineDataUnit;
- (id)timestampUnreadCellModelArray;
- (id)timestampReadCellModelArray;
- (id)flowLayout;
- (id)collectionView;
- (id)createCleanButton;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleCollectionViewPanGesture:(id)arg1;
- (id)closeButton;
- (id)emptyTipsLabel;
- (id)topView;
- (id)contentView;
- (id)backgroundButton;
- (void)setupData;
- (void)setupUI;
- (void)setupCollectionViewWithGradientEffect;
- (CGSize)cellSize;
- (void)onClickClose;
- (void)onClickClean;
- (void)cleanUnreadStory;
- (void)reportCleanExposeData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)shouldShowMessageSection:(unsigned long long)arg1;
- (BOOL)shouldTimelineUnReadSection:(unsigned long long)arg1;
- (void)didSelectUnreadCornerMessageActionWithIndex:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)addPopBackInteractivePopGesture;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)storyTimelineDataItemsHasUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)storyReportUtil;
- (void)setStoryReportUtil:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setStoryTimelineDataVM:(id)arg1;
- (void)setStoryTimelineDataUnit:(id)arg1;
- (void)setTimestampUnreadCellModelArray:(id)arg1;
- (void)setTimestampReadCellModelArray:(id)arg1;
- (id)unreadCornerMessageCellModelArray;
- (void)setUnreadCornerMessageCellModelArray:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (id)dismissAnimateTransition;
- (void)setDismissAnimateTransition:(id)arg1;
- (id)dimissInteractiveTransition;
- (void)setDimissInteractiveTransition:(id)arg1;
- (void)setEmptyTipsLabel:(id)arg1;
- (id)cleanButton;
- (void)setCleanButton:(id)arg1;
- (BOOL)isCleanUnreadStory;
- (void)setIsCleanUnreadStory:(BOOL)arg1;
- (unsigned long long)clickClearCount;
- (void)setClickClearCount:(unsigned long long)arg1;
- (unsigned long long)clickRenewCount;
- (void)setClickRenewCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
