@interface WCFinderGameAchievementPanelViewSheet : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    AchievementInfo * _achievementInfo; // +0x68
    UICollectionView * _collectionView; // +0x70
    UIView * _containerView; // +0x78
    MMUIButton * _closeButton; // +0x80
    UIPageControl * _pageCtrl; // +0x88
}
- (id)initWithAchievementInfo:(id)arg1;
- (void)viewDidLoad;
- (void)makeHalfCorner:(id)arg1;
- (void)setSelectedInfo:(id)arg1;
- (void)showOnView:(id)arg1;
- (void)onTapClose:(id)arg1;
- (void)onClickClose;
- (void)onPan:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)achievementInfo;
- (void)setAchievementInfo:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)pageCtrl;
- (void)setPageCtrl:(id)arg1;
- (void).cxx_destruct;
@end

