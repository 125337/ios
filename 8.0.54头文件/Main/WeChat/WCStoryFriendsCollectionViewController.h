@interface WCStoryFriendsCollectionViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCStoryDismissInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate, IWCStoryTimelineDataVMExt>
{
    BOOL _isCleanUnreadStory; // +0x68
    id <WCStoryFriendsCollectionViewControllerDelegate> _delegate; // +0x70
    WCStoryReportUtil * _storyReportUtil; // +0x78
    UICollectionView * _collectionView; // +0x80
    UICollectionViewFlowLayout * _flowLayout; // +0x88
    WCStoryTimelineDataVM * _storyTimelineDataVM; // +0x90
    WCStoryTimelineDataUnit * _storyTimelineDataUnit; // +0x98
    NSMutableArray * _timestampUnreadCellModelArray; // +0xa0
    NSMutableArray * _timestampReadCellModelArray; // +0xa8
    NSMutableArray * _unreadCornerMessageCellModelArray; // +0xb0
    MMUIButton * _closeButton; // +0xb8
    MMUIView * _topView; // +0xc0
    MMUIView * _contentView; // +0xc8
    MMUIButton * _backgroundButton; // +0xd0
    UIPanGestureRecognizer * _panGesture; // +0xd8
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0xe0
    WCStoryFriendsCollectionDismissTransition * _dismissAnimateTransition; // +0xe8
    WCStoryDismissInteractiveTransition * _dimissInteractiveTransition; // +0xf0
    UILabel * _emptyTipsLabel; // +0xf8
    UIButton * _cleanButton; // +0x100
    unsigned long long _clickClearCount; // +0x108
    unsigned long long _clickRenewCount; // +0x110
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

