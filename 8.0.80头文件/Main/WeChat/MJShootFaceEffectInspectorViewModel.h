@interface MJShootFaceEffectInspectorViewModel : MJShootEffectMaterialViewModel
{
    NSArray * _faceEffectItems; // +0x8
    MJShootVisageInspectorItem * _selectedFaceEffectItem; // +0x10
    NSIndexPath * _selectedIndexPath; // +0x18
}
+ (id)defaultFaceEffectItems;
- (void)fetchFaceEffectDataIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchFaceEffectDataWithCompletion:(id /* block */)arg1;
- (void)refetchFaceEffectDataWithCompletion:(id /* block */)arg1;
- (void)restoreFaceEffectWithCompletion:(id /* block */)arg1;
- (void)refetchAndRestoreFaceEffectWithCompletion:(id /* block */)arg1;
- (void)restoreFaceEffectInnerWithCompletion:(id /* block */)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (void)updateFaceEffectWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetSelectionToNone;
- (id)faceEffectItems;
- (void)setFaceEffectItems:(id)arg1;
- (id)selectedFaceEffectItem;
- (void)setSelectedFaceEffectItem:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
