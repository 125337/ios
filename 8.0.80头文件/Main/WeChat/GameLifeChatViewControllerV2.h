@interface GameLifeChatViewControllerV2 : GCReportBaseVc <GameLifeTabChildViewControllerProtocol, GameChatRoomExt, ILocationMgrExt, GCChatRoomImageZoomAnimationDelegate, IGroupServerUpdateExt, GCGroupNoticeViewDelegate, GCClvManagerProtocol, GCBaseGroupCellModelDelegate, GameCenterBannerManagerDelegate, GCMyGroupCellExpandBtnViewDelegate, GCCollectionWaterfallLayoutProtocol>
{
    BOOL _isInTab; // +0x70
    BOOL _useAsChildVc; // +0x71
    BOOL _needAddExpandSection; // +0x72
    BOOL _isMyGroupSectionExpand; // +0x73
    BOOL _isRecommendSectionEmpty; // +0x74
    BOOL _showEntrance; // +0x75
    BOOL _showInviteTipWhenViewDidAppear; // +0x76
    BOOL _gcIsVisible; // +0x77
    BOOL _hasServerResponse; // +0x78
    unsigned int _sourceScene; // +0x7c
    GCBaseScrollView * _containerScrollView; // +0x80
    GCCollectionView * _wholeCollectionView; // +0x88
    GCCollectionViewManager * _collectionViewManager; // +0x90
    GameChatNoticeAndMessageView * _noticeAndMessageView; // +0x98
    GCCollectionViewSectionModel * _noticeAndMessageSectionModel; // +0xa0
    NSMutableDictionary * _groupCellDict; // +0xa8
    NSMutableArray * _allMyGroupItemArray; // +0xb0
    GCGroupSectionModel * _myGroupSectionModel; // +0xb8
    GCCollectionViewSectionModel * _bottomBtnSectionModel; // +0xc0
    GCCollectionViewSectionModel * _spaceBelowMyGroupSection; // +0xc8
    GCGroupSectionModel * _recommendSectionModel; // +0xd0
    GCBaseCellModel * _emptyCellViewModel; // +0xd8
    GCGroupServer * _groupServer; // +0xe0
    CLLocation * _groupRecommendLocation; // +0xe8
    UIView * _shadowView; // +0xf0
    GetFirstEnterInfoResponse * _firstEnterResponse; // +0xf8
    NSMutableSet * _didExitSet; // +0x100
    GetCanJoinChatroomResponse * _canJoinGroupRespone; // +0x108
    NSMutableArray * _recommeGroupCellArray; // +0x110
    GetMyChatroomResponse * _myChatRoomResponse; // +0x118
    GetCanJoinChatroomResponse * _canJoinChatRoomResponse; // +0x120
    GCViewHolderCellModel * _findMoreCellModel; // +0x128
    GCViewHolderCellModel * _groupRankCellModel; // +0x130
    GCViewHolderCellModel * _myGroupCellExpandModel; // +0x138
    UIButton * _createBtn; // +0x140
    GetMyChatroomResponse * _needSaveResponse; // +0x148
    MyChatroomNotice * _myChatRoomNotice; // +0x150
    GCBaseCellModel * _noticeCellModel; // +0x158
    GCMyGroupCellExpandBtnView * _floatingExpandBtnView; // +0x160
    long long _myGroupCollapseCount; // +0x168
}
- (id)init;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)checkShowInviteView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)enableGroupPause;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)getRecommendGroup;
- (void)showGameChatInviteTipView:(id)arg1;
- (void)onConfirmBtnClicked;
- (void)handleAuthoriztionStatus:(int)arg1 requestNotDetermined:(BOOL)arg2;
- (void)statusBarOrientationChange:(id)arg1;
- (id)bannerContainerView;
- (id)anotherPartScrollView;
- (void)viewNeedsLayout;
- (double)viewHeight;
- (double)visiableHeight;
- (BOOL)isNoAutoExpand;
- (void)bannerStateDidChanged;
- (void)onOpenChatRoomConfig:(id)arg1 cellModel:(id)arg2;
- (CGRect)getImgFrameWithIdentifier:(id)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onMyChatRoomStatusUpdate:(id)arg1;
- (void)readGroupCache;
- (void)updateLocationAndReloadIfNeed;
- (void)retriveLocationIfAvailableWithComplectionBlock:(id /* block */)arg1;
- (id)descAttributeFromResponse:(id)arg1;
- (void)doUpdateChatRoomResponse:(id)arg1 isFromServer:(BOOL)arg2;
- (void)doUpdateCanJoinGroupRespone:(id)arg1;
- (void)reCreateReceommendSection;
- (id)getTopFixedSectionArrary;
- (id)btnModelWithJumpDetail:(id)arg1 posId:(unsigned long long)arg2;
- (void)onNoticeCloseBtnClick:(id)arg1;
- (void)onNoticeLinkClick:(id)arg1 contentBlock:(id)arg2;
- (id)getTipCellModel:(id)arg1;
- (void)removeTipCellModel;
- (void)loadMyGroupSectionDisplayedItems;
- (BOOL)hasExpandBtnRedDot;
- (void)resetCollectionViewManager;
- (id)getNormalBottomBtnSectionModel;
- (id)getThinBottomBtnSectionModel;
- (void)didJoinNewRoom:(id)arg1;
- (void)didAccountCancellationStateChange;
- (void)onCreateGroupBtnClick;
- (void)onRoomStatusUpdate:(id)arg1 isFromServer:(BOOL)arg2;
- (id)groupCellModelArrayFrom:(id)arg1;
- (id)groupCellModelFromChatRoomInfo:(id)arg1;
- (void)updateGroupCellModel:(id)arg1 withMyChatRoomInfo:(id)arg2;
- (id)chatVcBackgroudColor;
- (void)onGameLifeTabBarPoped:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onViewPopHandle;
- (void)unRegisterExtension;
- (void)initContentView;
- (void)viewWillLayoutSubviews;
- (id)getNewSpaceSectionModel:(id)arg1 height:(double)arg2;
- (void)initTopNoticeAndMessageSection;
- (void)initMyGroupSectionModel;
- (id)randomImageUrl;
- (void)initRecommendGroup;
- (float)getTabBarHeight;
- (id)navigationBarBackgroundColor;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldUseCustomLayoutForItemAtIndexPath:(id)arg1;
- (CGSize)collectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (double)collectionViewLayout:(id)arg1 heightForSupplementaryViewAtIndexPath:(id)arg2;
- (BOOL)shouldAddSpaceForNormalItemAtIndexPath:(id)arg1;
- (id)supplementaryViewKindAtIndexPath:(id)arg1;
- (void)myGroupCellExpandBtn:(id)arg1 didClickWithChange:(BOOL)arg2;
- (void)showOrHideFloatingExpandBtnIfNeed;
- (BOOL)shouldShowExpandBtn;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (BOOL)isInTab;
- (void)setIsInTab:(BOOL)arg1;
- (BOOL)useAsChildVc;
- (void)setUseAsChildVc:(BOOL)arg1;
- (id)containerScrollView;
- (void)setContainerScrollView:(id)arg1;
- (id)wholeCollectionView;
- (void)setWholeCollectionView:(id)arg1;
- (id)collectionViewManager;
- (void)setCollectionViewManager:(id)arg1;
- (id)noticeAndMessageView;
- (void)setNoticeAndMessageView:(id)arg1;
- (id)noticeAndMessageSectionModel;
- (void)setNoticeAndMessageSectionModel:(id)arg1;
- (id)groupCellDict;
- (void)setGroupCellDict:(id)arg1;
- (BOOL)needAddExpandSection;
- (void)setNeedAddExpandSection:(BOOL)arg1;
- (BOOL)isMyGroupSectionExpand;
- (void)setIsMyGroupSectionExpand:(BOOL)arg1;
- (id)allMyGroupItemArray;
- (void)setAllMyGroupItemArray:(id)arg1;
- (id)myGroupSectionModel;
- (void)setMyGroupSectionModel:(id)arg1;
- (id)bottomBtnSectionModel;
- (void)setBottomBtnSectionModel:(id)arg1;
- (id)spaceBelowMyGroupSection;
- (void)setSpaceBelowMyGroupSection:(id)arg1;
- (id)recommendSectionModel;
- (void)setRecommendSectionModel:(id)arg1;
- (id)emptyCellViewModel;
- (void)setEmptyCellViewModel:(id)arg1;
- (BOOL)isRecommendSectionEmpty;
- (void)setIsRecommendSectionEmpty:(BOOL)arg1;
- (id)groupServer;
- (void)setGroupServer:(id)arg1;
- (BOOL)showEntrance;
- (void)setShowEntrance:(BOOL)arg1;
- (id)groupRecommendLocation;
- (void)setGroupRecommendLocation:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (BOOL)showInviteTipWhenViewDidAppear;
- (void)setShowInviteTipWhenViewDidAppear:(BOOL)arg1;
- (BOOL)gcIsVisible;
- (void)setGcIsVisible:(BOOL)arg1;
- (id)firstEnterResponse;
- (void)setFirstEnterResponse:(id)arg1;
- (id)didExitSet;
- (void)setDidExitSet:(id)arg1;
- (id)canJoinGroupRespone;
- (void)setCanJoinGroupRespone:(id)arg1;
- (id)recommeGroupCellArray;
- (void)setRecommeGroupCellArray:(id)arg1;
- (id)myChatRoomResponse;
- (void)setMyChatRoomResponse:(id)arg1;
- (BOOL)hasServerResponse;
- (void)setHasServerResponse:(BOOL)arg1;
- (id)canJoinChatRoomResponse;
- (void)setCanJoinChatRoomResponse:(id)arg1;
- (id)findMoreCellModel;
- (void)setFindMoreCellModel:(id)arg1;
- (id)groupRankCellModel;
- (void)setGroupRankCellModel:(id)arg1;
- (id)myGroupCellExpandModel;
- (void)setMyGroupCellExpandModel:(id)arg1;
- (id)createBtn;
- (void)setCreateBtn:(id)arg1;
- (id)needSaveResponse;
- (void)setNeedSaveResponse:(id)arg1;
- (id)myChatRoomNotice;
- (void)setMyChatRoomNotice:(id)arg1;
- (id)noticeCellModel;
- (void)setNoticeCellModel:(id)arg1;
- (id)floatingExpandBtnView;
- (void)setFloatingExpandBtnView:(id)arg1;
- (long long)myGroupCollapseCount;
- (void)setMyGroupCollapseCount:(long long)arg1;
- (void).cxx_destruct;
@end
