@interface WCFinderLivePersonalCenterAccountServiceViewController : MMCPUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate>
{
    UICollectionView * _collectionView; // +0x70
    WCFinderPersonalCenterLayout * _flowLayout; // +0x78
    FinderLiveCreatorService * _subService; // +0x80
    NSArray * _sectionInfos; // +0x88
}
- (id)initWithSubService:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)getViewController;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView;
- (id)flowLayout;
- (void)creatorFunctionSectionCellDidSelect:(id)arg1 hasRedDot:(BOOL *)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (id)subService;
- (void)setSubService:(id)arg1;
- (id)sectionInfos;
- (void)setSectionInfos:(id)arg1;
- (void).cxx_destruct;
@end
