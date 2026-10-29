@interface GameLifeChatViewControllerV2 : GCReportBaseVc <GameLifeTabChildViewControllerProtocol, GameChatRoomExt, ILocationMgrExt, GCChatRoomImageZoomAnimationDelegate, IGroupServerUpdateExt, GCGroupNoticeViewDelegate, GCClvManagerProtocol, GCBaseGroupCellModelDelegate, GameCenterBannerManagerDelegate, GCMyGroupCellExpandBtnViewDelegate, GCCollectionWaterfallLayoutProtocol>
{
    BOOL _isInTab; // +0x68
    BOOL _useAsChildVc; // +0x69
    BOOL _needAddExpandSection; // +0x6a
    BOOL _isMyGroupSectionExpand; // +0x6b
    BOOL _isRecommendSectionEmpty; // +0x6c
    BOOL _showEntrance; // +0x6d
    BOOL _showInviteTipWhenViewDidAppear; // +0x6e
    BOOL _gcIsVisible; // +0x6f
    BOOL _hasServerResponse; // +0x70
    unsigned int _sourceScene; // +0x74
    GCBaseScrollView * _containerScrollView; // +0x78
    GCCollectionView * _wholeCollectionView; // +0x80
    GCCollectionViewManager * _collectionViewManager; // +0x88
    GameChatNoticeAndMessageView * _noticeAndMessageView; // +0x90
    GCCollectionViewSectionModel * _noticeAndMessageSectionModel; // +0x98
    NSMutableDictionary * _groupCellDict; // +0xa0
    NSMutableArray * _allMyGroupItemArray; // +0xa8
    GCGroupSectionModel * _myGroupSectionModel; // +0xb0
    GCCollectionViewSectionModel * _bottomBtnSectionModel; // +0xb8
    GCCollectionViewSectionModel * _spaceBelowMyGroupSection; // +0xc0
    GCGroupSectionModel * _recommendSectionModel; // +0xc8
    GCBaseCellModel * _emptyCellViewModel; // +0xd0
    GCGroupServer * _groupServer; // +0xd8
    CLLocation * _groupRecommendLocation; // +0xe0
    UIView * _shadowView; // +0xe8
    GetFirstEnterInfoResponse * _firstEnterResponse; // +0xf0
    NSMutableSet * _didExitSet; // +0xf8
    GetCanJoinChatroomResponse * _canJoinGroupRespone; // +0x100
    NSMutableArray * _recommeGroupCellArray; // +0x108
    GetMyChatroomResponse * _myChatRoomResponse; // +0x110
    GetCanJoinChatroomResponse * _canJoinChatRoomResponse; // +0x118
    GCViewHolderCellModel * _findMoreCellModel; // +0x120
    GCViewHolderCellModel * _groupRankCellModel; // +0x128
    GCViewHolderCellModel * _myGroupCellExpandModel; // +0x130
    UIButton * _createBtn; // +0x138
    GetMyChatroomResponse * _needSaveResponse; // +0x140
    MyChatroomNotice * _myChatRoomNotice; // +0x148
    GCBaseCellModel * _noticeCellModel; // +0x150
    GCMyGroupCellExpandBtnView * _floatingExpandBtnView; // +0x158
    long long _myGroupCollapseCount; // +0x160
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

