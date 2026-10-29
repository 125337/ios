@interface MJStyleEditViewController : UIViewController <MJStyleEditViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <MJStyleEditViewControllerDelegate> _delegate; // +0x8
    MJStyleEditViewModel * _viewModel; // +0x10
    MJStyleEditView * _stickerEditView; // +0x18
    MJStyleEditView * _styleEditView; // +0x20
    UICollectionView * _tabCollectionView; // +0x28
    MMUIView * _seperatorLineView; // +0x30
    MJStyleEditToolBar * _toolBar; // +0x38
    MMUIButton * _applyToAllButton; // +0x40
    NSMutableDictionary * _selectedIdxDict; // +0x48
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)fetchDatas;
- (void)styleEditView:(id)arg1 dataType:(unsigned long long)arg2 didLoadedStyleAtIndex:(long long)arg3 materialID:(id)arg4 error:(id)arg5;
- (long long)selectedIndexWithStyleEditView:(id)arg1 dataType:(unsigned long long)arg2;
- (void)styleEditView:(id)arg1 needReloadData:(unsigned long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reloadDataWithEditDataType:(unsigned long long)arg1;
- (void)updateCellSelection;
- (id)tabCollectionView;
- (id)stickerEditView;
- (id)styleEditView;
- (id)seperatorLineView;
- (id)toolBar;
- (id)selectedIdxDict;
- (id)selectedStickerID;
- (id)selectedFontName;
- (id)selectedColorID;
- (id)selectedAnimID;
- (id)genBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setStickerEditView:(id)arg1;
- (void)setStyleEditView:(id)arg1;
- (void)setTabCollectionView:(id)arg1;
- (void)setSeperatorLineView:(id)arg1;
- (void)setToolBar:(id)arg1;
- (id)applyToAllButton;
- (void)setApplyToAllButton:(id)arg1;
- (void)setSelectedIdxDict:(id)arg1;
- (void).cxx_destruct;
@end
