@interface MMFinderLiveNewMusicLyricStylePanel : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _shouldSelectionCallDelegate; // +0x8
    BOOL _isCloseFromCommit; // +0x9
    id <MMFinderLiveNewMusicLyricStylePanelDelegate> _delegate; // +0x10
    MMFinderLiveKSKitLyricStyle * _originalStyle; // +0x18
    MMFinderLiveKSKitLyricStyle * _selectedStyle; // +0x20
    NSArray * _orderItems; // +0x28
    NSArray * _colorItems; // +0x30
    UILabel * _orderLabel; // +0x38
    UILabel * _colorLabel; // +0x40
    UICollectionView * _orderCollectionView; // +0x48
    UICollectionView * _colorCollectionView; // +0x50
}
+ (id)showWithDelegate:(id)arg1 originalStyle:(id)arg2;
- (id)initWithDelegate:(id)arg1 originalStyle:(id)arg2;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)pageSheetDidAppear;
- (void)layoutSubviews;
- (void)layoutUI;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (id)orderLabel;
- (id)colorLabel;
- (id)orderCollectionView;
- (id)colorCollectionView;
- (id)selectedStyle;
- (void)onTapConfirmBtn;
- (void)pageSheetDidDismiss;
- (double)getCellHeight:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)originalStyle;
- (void)setOriginalStyle:(id)arg1;
- (void)setSelectedStyle:(id)arg1;
- (BOOL)shouldSelectionCallDelegate;
- (void)setShouldSelectionCallDelegate:(BOOL)arg1;
- (BOOL)isCloseFromCommit;
- (void)setIsCloseFromCommit:(BOOL)arg1;
- (id)orderItems;
- (void)setOrderItems:(id)arg1;
- (id)colorItems;
- (void)setColorItems:(id)arg1;
- (void)setOrderLabel:(id)arg1;
- (void)setColorLabel:(id)arg1;
- (void)setOrderCollectionView:(id)arg1;
- (void)setColorCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
