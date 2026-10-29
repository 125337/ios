@interface CBTDramaHistoryViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ICBTDramaItemDataControllerExt>
{
    BOOL _hasAppear; // +0x70
    id <CBTDramaHistoryDelegate> _delegate; // +0x78
    UIView * _backgroundView; // +0x80
    MMUIButton * _backBtn; // +0x88
    MMUIButton * _settingBtn; // +0x90
    UICollectionView * _collectionView; // +0x98
    NSArray * _cardData; // +0xa0
    UILabel * _titleLabel; // +0xa8
    UILabel * _descriptionLabel; // +0xb0
    NSMutableArray * _dramaData; // +0xb8
    long long _currentCardIndex; // +0xc0
    CBTDramaItemDataController * _dramaItemDataController; // +0xc8
}
- (id)initWithData:(long long)arg1 dramaData:(id)arg2 dramaItemDataController:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)initNavigationItems;
- (void)layoutBackBtn;
- (void)close;
- (void)updateTitleAndDescriptionForCardIndex:(long long)arg1;
- (void)scrollToCardAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setupUI;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)checkAndLoadMoreDataIfNeeded;
- (void)updateCardTransform;
- (void)onDramaItemDataDidLoadMore:(id)arg1 shouldReload:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)settingBtn;
- (void)setSettingBtn:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)dramaData;
- (void)setDramaData:(id)arg1;
- (long long)currentCardIndex;
- (void)setCurrentCardIndex:(long long)arg1;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg1;
- (id)dramaItemDataController;
- (void)setDramaItemDataController:(id)arg1;
- (void).cxx_destruct;
@end
