@interface MMLiveKtvThemesSelectionPageSheet : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    NSArray * _themes; // +0x10
    MMLiveKtvThemeItem * _selectedTheme; // +0x18
    UIButton * _confirmButton; // +0x20
    UICollectionView * _collectionView; // +0x28
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x30
}
- (id)initWithTaskId:(id)arg1 themes:(id)arg2 selectedTheme:(id)arg3;
- (void)layoutSubviews;
- (void)onConfirmed;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)initializeComponents;
- (CGSize)cellSize;
- (double)collectionHeight;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)themes;
- (void)setThemes:(id)arg1;
- (id)selectedTheme;
- (void)setSelectedTheme:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (void).cxx_destruct;
@end

