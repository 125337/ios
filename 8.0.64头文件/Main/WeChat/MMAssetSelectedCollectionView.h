@interface MMAssetSelectedCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionViewFlowLayout * m_collectionLayout; // +0x8
    UICollectionView * m_collectionView; // +0x10
    UIView * m_snapedView; // +0x18
    NSIndexPath * m_oldIndexPath; // +0x20
    MMAssetInfo * m_selectedInfo; // +0x28
    NSMutableSet * m_disableInfo; // +0x30
    UIColor * m_borderColor; // +0x38
    NSMutableArray * _previewInfos; // +0x40
    id <MMImagePickerControlCenter> _controlCenter; // +0x48
    id <MMAssetSelectedCollectionViewDelegate> _delegate; // +0x50
}
- (id)init;
- (id)initWithBorderColor:(id)arg1;
- (void)updateWidth:(double)arg1 showCount:(unsigned long long)arg2;
- (void)changeToAssetInfo:(id)arg1;
- (void)changeToAssetInfo:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (void)insertItemAtLast;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)toggleSelectAssetInfo:(id)arg1;
- (unsigned long long)indexForAssetInfoIgnoreDisables:(id)arg1;
- (void)reloadView;
- (id)indexPathForAssetInfo:(id)arg1;
- (id)selectedInfo;
- (BOOL)isDisableForAssetInfo:(id)arg1;
- (void)configCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)handlelongGesture:(id)arg1;
- (id)previewInfos;
- (void)setPreviewInfos:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
