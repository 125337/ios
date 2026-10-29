@interface TextStateFriendSquareViewController : MMUIViewController <TextStateCardListDataProvider, TextStateCardListDelegate, TextStateFriendSquareTransitionFriendSquare, MultipleTextStateCardViewDataSource, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TextStateMgrExt, WCTextStateDBExt, TextStatePublishViewControllerDelegate, TextStateHistoryLogicDelegate>
{
    BOOL _hasRedDot; // +0x68
    BOOL _enableCustomTransition; // +0x69
    BOOL _needUpdateHistoryInfo; // +0x6a
    long long _scene; // +0x70
    NSString * _sessionId; // +0x78
    NSString * _sceneSessionId; // +0x80
    UICollectionView * _collectionView; // +0x88
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x90
    UIView * _noFriendView; // +0x98
    NSMutableArray * _friendTopicList; // +0xa0
    NSMutableArray * _usernameList; // +0xa8
    NSMutableDictionary * _usernameToTextStateListDict; // +0xb0
    unsigned long long _enterTime; // +0xb8
    unsigned long long _beginIndex; // +0xc0
    NSString * _clusterPresentType; // +0xc8
    NSString * _ownTopicId; // +0xd0
    NSMutableSet * _unfoldTopicSet; // +0xd8
    unsigned long long _itemNumberPerRow; // +0xe0
    UITapGestureRecognizer * _tapGesture; // +0xe8
    _TtC6WeChat31TextStateFriendSquareTransition * _transition; // +0xf0
    TextStateMessageBoxInfo * _messageBoxInfo; // +0xf8
    TextStateCardListViewController * _cardListViewController; // +0x100
    _TtC6WeChat42TextStateSquareMixHeaderCollectionViewCell * _mixHeaderCell; // +0x108
}
- (void)fillHeaderCell:(id)arg1;
- (id)historyLogic;
- (double)mixHeaderHeight;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)registerExtension;
- (void)initData;
- (void)initView;
- (void)initGesture;
- (void)updateLayouts;
- (void)updateData;
- (void)dealValidTopicData;
- (unsigned long long)numberOfItemsPerRow;
- (BOOL)shouldFoldForSection:(long long)arg1;
- (void)doTapActionForSectionAtIndex:(long long)arg1;
- (void)jumpToCardListForUsername:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onTapPublishButton;
- (void)onTapRightBarButton;
- (void)doPublishWithScene:(unsigned int)arg1;
- (void)loadMessageBoxInfo;
- (long long)topInfoCellCount;
- (BOOL)isTopInfoCellForSection:(long long)arg1;
- (BOOL)hasRePublishCell;
- (void)onTapMessageBox;
- (BOOL)showMixHeaderSection;
- (BOOL)showMixHeaderCellInSection:(long long)arg1;
- (id)indexPathForUsername:(id)arg1;
- (unsigned int)sessionScene;
- (void)reportExposure;
- (void)reportExit;
- (void)reportUnfoldFriendTopic:(id)arg1;
- (void)reportTapAction:(long long)arg1 friendTopic:(id)arg2;
- (void)reportTapHeadImage:(id)arg1 friendTopic:(id)arg2;
- (void)reportWithAction:(long long)arg1 iconId:(id)arg2 iconDescription:(id)arg3 iconType:(unsigned int)arg4 username:(id)arg5 userCount:(unsigned long long)arg6 topicInfos:(id)arg7 isSameTopic:(BOOL)arg8 duration:(unsigned long long)arg9;
- (void)reportWithAction:(long long)arg1 iconId:(id)arg2 iconDescription:(id)arg3 iconType:(unsigned int)arg4 username:(id)arg5 userCount:(unsigned long long)arg6 topicInfos:(id)arg7 hasRedDot:(unsigned int)arg8 isSameTopic:(BOOL)arg9 duration:(unsigned long long)arg10;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)count;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onChangeToCardAtIndex:(unsigned long long)arg1;
- (id)headImageViewFor:(id)arg1;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (void)onTextStateFriendTopicConstruct;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDeletedWithId:(id)arg1;
- (void)registerYReportSdk;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (void)onTextStatePublished;
- (void)shouldReloadCardList;
- (void)shouldReloadCalendar;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (BOOL)hasRedDot;
- (void)setHasRedDot:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)sceneSessionId;
- (void)setSceneSessionId:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)noFriendView;
- (void)setNoFriendView:(id)arg1;
- (id)friendTopicList;
- (void)setFriendTopicList:(id)arg1;
- (id)usernameList;
- (void)setUsernameList:(id)arg1;
- (id)usernameToTextStateListDict;
- (void)setUsernameToTextStateListDict:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)beginIndex;
- (void)setBeginIndex:(unsigned long long)arg1;
- (id)clusterPresentType;
- (void)setClusterPresentType:(id)arg1;
- (id)ownTopicId;
- (void)setOwnTopicId:(id)arg1;
- (id)unfoldTopicSet;
- (void)setUnfoldTopicSet:(id)arg1;
- (unsigned long long)itemNumberPerRow;
- (void)setItemNumberPerRow:(unsigned long long)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (BOOL)enableCustomTransition;
- (void)setEnableCustomTransition:(BOOL)arg1;
- (id)messageBoxInfo;
- (void)setMessageBoxInfo:(id)arg1;
- (id)cardListViewController;
- (void)setCardListViewController:(id)arg1;
- (id)mixHeaderCell;
- (void)setMixHeaderCell:(id)arg1;
- (BOOL)needUpdateHistoryInfo;
- (void)setNeedUpdateHistoryInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end

