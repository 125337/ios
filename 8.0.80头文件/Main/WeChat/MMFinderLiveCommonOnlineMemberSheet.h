@interface MMFinderLiveCommonOnlineMemberSheet : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegate, MMFinderLiveOnlineStateCollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, MMLiveHalfScreenTitleBarViewDelegate>
{
    unsigned int _micAudienceLikeCount; // +0x8
    unsigned int _boardMemberCount; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveCommonOnlineMemberSheetOpenParams * _openParams; // +0x18
    id <MMLiveOnlineStateViewDelegate> _delegate; // +0x20
    NSMutableArray * _userList; // +0x28
    unsigned long long _titleHeatValue; // +0x30
    MMUIImageView * _backgroundView; // +0x38
    MMUIActivityIndicatorView * _onlineContentLoadingView; // +0x40
    UIScrollView * _tabScrollView; // +0x48
    NSMutableArray * _tabPositions; // +0x50
    NSMutableArray * _tabLabels; // +0x58
    UIView * _tabIndicatorView; // +0x60
    UICollectionView * _onlineUsersCollectionView; // +0x68
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x70
    RichTextView * _noUserLabel; // +0x78
    unsigned long long _currentSelectIndex; // +0x80
    WCPinBottomCollectionViewFlowLayout * _onlineUsersCollectionLayout; // +0x88
}
+ (id)showWithTaskId:(id)arg1 openParams:(id)arg2;
- (id)initWithTaskId:(id)arg1 openParams:(id)arg2;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)initTabPageView;
- (id)selectedColor;
- (id)normalColor;
- (void)onTapTab:(id)arg1;
- (void)setupViewsContents;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)fetchData;
- (void)rankOnlineStateItems:(id)arg1;
- (id)noUserLabel;
- (CGSize)getNoUserLabelSize;
- (id)createNoUserLabel;
- (id)onlineUsersCollectionView;
- (void)updateOnlineUsersRankWith:(id)arg1 onlineUserStateItems:(id)arg2;
- (id)onlineUsersCollectionLayout;
- (id)titleBar;
- (id)backgroundView;
- (id)onlineContentLoadingView;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)createSectionHeader:(CGSize)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)showRewardAmount;
- (BOOL)isPkRank;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)openParams;
- (void)setOpenParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (unsigned long long)titleHeatValue;
- (void)setTitleHeatValue:(unsigned long long)arg1;
- (unsigned int)micAudienceLikeCount;
- (void)setMicAudienceLikeCount:(unsigned int)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setOnlineContentLoadingView:(id)arg1;
- (id)tabScrollView;
- (void)setTabScrollView:(id)arg1;
- (id)tabPositions;
- (void)setTabPositions:(id)arg1;
- (id)tabLabels;
- (void)setTabLabels:(id)arg1;
- (id)tabIndicatorView;
- (void)setTabIndicatorView:(id)arg1;
- (void)setOnlineUsersCollectionView:(id)arg1;
- (void)setTitleBar:(id)arg1;
- (void)setNoUserLabel:(id)arg1;
- (unsigned int)boardMemberCount;
- (void)setBoardMemberCount:(unsigned int)arg1;
- (unsigned long long)currentSelectIndex;
- (void)setCurrentSelectIndex:(unsigned long long)arg1;
- (void)setOnlineUsersCollectionLayout:(id)arg1;
- (void).cxx_destruct;
@end
