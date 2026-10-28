@interface MMFinderLiveConnectMicUserRewarderSheet : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegate, MMFinderLiveOnlineStateCollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, MMLiveHalfScreenTitleBarViewDelegate>
{
    unsigned int _boardType; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMLiveOnlineStateViewDelegate> _delegate; // +0x18
    NSMutableArray * _userList; // +0x20
    NSString * _micId; // +0x28
    NSString * _boardKey; // +0x30
    unsigned long long _titleHeatValue; // +0x38
    MMUIActivityIndicatorView * _onlineContentLoadingView; // +0x40
    UICollectionView * _onlineUsersCollectionView; // +0x48
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x50
    RichTextView * _noUserLabel; // +0x58
}
+ (id)showWithTaskId:(id)arg1 micId:(id)arg2 boardKey:(id)arg3 boardType:(unsigned int)arg4 titleHeatValue:(unsigned long long)arg5;
- (id)initWithTaskId:(id)arg1 micId:(id)arg2 boardKey:(id)arg3 boardType:(unsigned int)arg4 titleHeatValue:(unsigned long long)arg5;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)setupViewsContents;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)fetchData;
- (void)rankOnlineStateItems:(id)arg1;
- (id)noUserLabel;
- (id)createNoUserLabel;
- (id)onlineUsersCollectionView;
- (id)titleBar;
- (id)onlineContentLoadingView;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)createSectionHeader:(CGSize)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)liveTask;
- (id)audienceLogReporter;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (id)micId;
- (void)setMicId:(id)arg1;
- (id)boardKey;
- (void)setBoardKey:(id)arg1;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (unsigned long long)titleHeatValue;
- (void)setTitleHeatValue:(unsigned long long)arg1;
- (void)setOnlineContentLoadingView:(id)arg1;
- (void)setOnlineUsersCollectionView:(id)arg1;
- (void)setTitleBar:(id)arg1;
- (void)setNoUserLabel:(id)arg1;
- (void).cxx_destruct;
@end
