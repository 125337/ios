@interface GameVideoAlbumController : GameCenterNativeVc <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, GameDataChangedObserver, GameVideoGalleryViewControllerDelagate, GameVideoEditViewControllerDelegate, GameRecommendVideoListViewDelegate, GWHaowanAlbumBadNetViewDelegate>
{
    MMAlbumForGameHaowan * _haowanAlum; // +0x68
    NSMutableArray * _sectionInfos; // +0x70
    NSArray * _albumInfos; // +0x78
    NSMutableSet * _reportExposureCells; // +0x80
    unsigned long long _currentAssetIndex; // +0x88
    BOOL _ignoreVideoPreview; // +0x90
    id <GameVideoAlbumControllerDelegate> _delegate; // +0x98
    unsigned long long _galleryType; // +0xa0
    UIView * _emptyView; // +0xa8
    UICollectionView * _collectionView; // +0xb0
    UIView * _bottomBar; // +0xb8
    MMUIButton * _skipBtn; // +0xc0
    UIView * _bottomBarBlurView; // +0xc8
    UIView * _navBarBlurView; // +0xd0
    NSArray * _recommendVideoList; // +0xd8
    GameRecommendVideoListView * _recommendListView; // +0xe0
    GWHaowanAlbumBadNetView * _badNetView; // +0xe8
}
- (id)initWithAlbumInfos:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (id)badNetView;
- (void)onClose;
- (double)bottomBarHeight;
- (void)setupViews;
- (void)OnSkipBtnClick:(id)arg1;
- (void)setupCollectionView;
- (void)setupBottomView;
- (void)setupEmptyView;
- (void)setupDataModel;
- (void)loadingTimeoutToShowBadNetView;
- (void)haowanAlbumBadNetReloadAction;
- (void)didRecommendVideoSelectAsset:(id)arg1 isPublish:(BOOL)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)navigateToGalleryWithIndex:(long long)arg1;
- (void)navigateToGameEditWithIndex:(long long)arg1 andData:(id)arg2;
- (void)didGameDataChanged:(id)arg1;
- (id)calculateSectionTitle:(id)arg1;
- (void)gameVideoGallery:(id)arg1 didPerformActionWithIndex:(long long)arg2 andData:(id)arg3;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)showNewUserTipsIfNeed;
- (void)showNewUserTipsBannerIfNeed;
- (void)hideNewUserTipsBanner:(id)arg1;
- (void)showNewUserTipsDialogIfNeed;
- (id)setupNewUserTipsBanner;
- (void)trackEventExplosured;
- (void)trackEventExit;
- (void)trackEventEmptyData;
- (void)trackEventShowGuideTips;
- (void)trackEventExplosuredForVideo:(id)arg1 appId:(id)arg2 index:(int)arg3;
- (void)trackEventClickForVideo:(id)arg1 appId:(id)arg2 index:(int)arg3;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (id)buildTrackEventProps:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)galleryType;
- (void)setGalleryType:(unsigned long long)arg1;
- (BOOL)ignoreVideoPreview;
- (void)setIgnoreVideoPreview:(BOOL)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)skipBtn;
- (void)setSkipBtn:(id)arg1;
- (id)bottomBarBlurView;
- (void)setBottomBarBlurView:(id)arg1;
- (id)navBarBlurView;
- (void)setNavBarBlurView:(id)arg1;
- (id)recommendVideoList;
- (void)setRecommendVideoList:(id)arg1;
- (id)recommendListView;
- (void)setRecommendListView:(id)arg1;
- (void)setBadNetView:(id)arg1;
- (void).cxx_destruct;
@end

