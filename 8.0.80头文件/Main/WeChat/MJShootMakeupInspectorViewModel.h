@interface MJShootMakeupInspectorViewModel : MJShootEffectMaterialViewModel
{
    NSArray * _makeupItems; // +0x8
    MJShootVisageInspectorItem * _selectedMakeupItem; // +0x10
    NSIndexPath * _selectedIndexPath; // +0x18
}
+ (id)defaultMakeupItems;
- (void)fetchMakeupDataIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchMakeupDataWithCompletion:(id /* block */)arg1;
- (void)refetchMakeupDataWithCompletion:(id /* block */)arg1;
- (void)restoreMakeupWithCompletion:(id /* block */)arg1;
- (void)refetchAndRestoreMakeupWithCompletion:(id /* block */)arg1;
- (void)restoreMakeupInnerWithCompletion:(id /* block */)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (void)updateMakeupWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetSelectionToNone;
- (id)makeupItems;
- (void)setMakeupItems:(id)arg1;
- (id)selectedMakeupItem;
- (void)setSelectedMakeupItem:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
