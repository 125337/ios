@interface EmoticonLensDynamicToolView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonCameraDynamiFlowLayoutDelegate>
{
    UIView * m_selectedMaterialBox; // +0x8
    NSMutableArray * m_emoticonLensList; // +0x10
    unsigned long long m_scenes; // +0x18
    id <EmoticonLensDynamicToolViewDelegate> _delegate; // +0x20
    NSString * _selectedEmoticonLensId; // +0x28
    unsigned long long _selectedEmoticonLensIndex; // +0x30
    UICollectionView * _dynamicCollectionView; // +0x38
    EmoticonCameraDynamiFlowLayout * _dynamicLayout; // +0x40
    NSMutableArray * _extraLensList; // +0x48
}
+ (double)getHeight;
- (id)initWithFrame:(CGRect)arg1 andScenes:(unsigned int)arg2;
- (void)reloadLensList;
- (void)setHidden:(BOOL)arg1;
- (id)visiableLens;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)p_selectItemAtIndexPath:(id)arg1;
- (void)p_selectItemWithEmoticonLensItem:(id)arg1;
- (void)setSelectedEmoticonLensIndex:(unsigned long long)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)dynamicCollectionView;
- (id)dynamicLayout;
- (void)selectEmoticonLensWithId:(id)arg1;
- (void)scrollToEmoticonLensWithId:(id)arg1;
- (void)selectEmoticonLensAtIndex:(unsigned long long)arg1;
- (void)appendEmoticonLens:(id)arg1;
- (BOOL)isLastIndex:(id)arg1;
- (void)trySelectLensWithLensId:(id)arg1 shouldCallDelegate:(BOOL)arg2;
- (void)reloadDataAndExposure;
- (void)motionTmplSelectedItemAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedEmoticonLensId;
- (void)setSelectedEmoticonLensId:(id)arg1;
- (unsigned long long)selectedEmoticonLensIndex;
- (void)setDynamicCollectionView:(id)arg1;
- (void)setDynamicLayout:(id)arg1;
- (id)extraLensList;
- (void)setExtraLensList:(id)arg1;
- (void).cxx_destruct;
@end
