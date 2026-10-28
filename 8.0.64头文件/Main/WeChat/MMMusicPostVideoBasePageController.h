@interface MMMusicPostVideoBasePageController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderNeayByStreamLayoutDelegate>
{
    UIView * _contentView; // +0x8
    MMUIActivityIndicatorView * _loadingView; // +0x10
    UICollectionView * _listView; // +0x18
    BOOL _canMultiSelect; // +0x20
    BOOL _isActive; // +0x21
    id <MMMusicPostVideoTabFinderBaseControllerDataSource> _dataSource; // +0x28
    id <MMMusicPostVideoBasePageDelegate> _delegate; // +0x30
    WCFinderContact * _contact; // +0x38
    double _minVideoDuration; // +0x40
}
- (id)init;
- (id)contentView;
- (void)layoutWithFrame:(CGRect)arg1;
- (void)onSwitchToThisPage:(BOOL)arg1;
- (void)setLoadingVisible:(BOOL)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateCanMultiSelect:(BOOL)arg1;
- (id)genDefaultCollectionView;
- (CGRect)cellFrameInVCIndexPath:(id)arg1;
- (CGPoint)cellOffsetWithIndexPath:(id)arg1;
- (id)cellThumbImage:(id)arg1;
- (id)genDefaultFlowLayout;
- (BOOL)isSelectedWithModel:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (unsigned long long)numberOfStreamLayoutSections;
- (unsigned long long)columnCountInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)columnMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)rowMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (UIEdgeInsets)edgeInsetdInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (BOOL)isNeedSetupHeaderView:(unsigned long long)arg1;
- (BOOL)isNeedSetupFooterView:(unsigned long long)arg1;
- (BOOL)isNeedSetupDecorationView:(unsigned long long)arg1;
- (double)streamLayoutFooterHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutHeaderHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutHerderTopOffset:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayout:(id)arg1 heightForItemAtIndex:(id)arg2 itemWidth:(double)arg3;
- (id)dataViewModel;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (double)minVideoDuration;
- (BOOL)canMultiSelect;
- (void)setCanMultiSelect:(BOOL)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
