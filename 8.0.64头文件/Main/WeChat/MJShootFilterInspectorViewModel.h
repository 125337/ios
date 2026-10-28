@interface MJShootFilterInspectorViewModel : MJShootEffectMaterialViewModel
{
    NSArray * _titleItems; // +0x8
    NSArray * _filterItems; // +0x10
    MJShootFilterItem * _selectedFilterItem; // +0x18
}
+ (id)defaultItems;
- (void)fetchFilterDataIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchFilterDataWithCompletion:(id /* block */)arg1;
- (id)selectedTitleIndexPath;
- (id)selectedFilterItemIndexPath;
- (void)resetSelectionToNone;
- (void)didSelectFilterItem:(id)arg1;
- (void)adjustingFilterOnItemValueChanged:(id)arg1;
- (void)refetchFilterDataWithCompletion:(id /* block */)arg1;
- (void)restoreFilterEffectWithCompletion:(id /* block */)arg1;
- (void)refetchAndRestoreFilterEffectWithCompletion:(id /* block */)arg1;
- (void)restoreFilterEffectInnerWithCompletion:(id /* block */)arg1;
- (void)loadMaterialWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cleanFilterData;
- (void)updateCamEffectWithFilterItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)titleItems;
- (void)setTitleItems:(id)arg1;
- (id)filterItems;
- (void)setFilterItems:(id)arg1;
- (id)selectedFilterItem;
- (void)setSelectedFilterItem:(id)arg1;
- (void).cxx_destruct;
@end
