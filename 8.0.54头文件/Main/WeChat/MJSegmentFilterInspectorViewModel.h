@interface MJSegmentFilterInspectorViewModel : MJSegmentInspectorViewModel <MJMaterialLoadingStatusViewModel>
{
    NSArray * _titleItems; // +0x40
    NSArray * _filterItems; // +0x48
    MJFilterAdjustmentValueItem * _originalItem; // +0x50
    NSIndexPath * _selectedTitleIndexPath; // +0x58
    NSIndexPath * _selectedFilterIndexPath; // +0x60
}
- (id)downloadStatus;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (float)mj_loadingProgressWithID:(id)arg1;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(id /* block */)arg2;
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;
- (void)setupData;
- (id)titleItems;
- (id)filterItems;
- (void)fetchItems:(id /* block */)arg1;
- (void)loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (long long)numberOfSections:(BOOL)arg1;
- (long long)numberOfItemsInSection:(long long)arg1 isTitle:(BOOL)arg2;
- (id)cellItemAtIndexPath:(id)arg1 isTitle:(BOOL)arg2;
- (BOOL)isFilterAdjusted;
- (id)filterID;
- (void)setFilterID:(id)arg1;
- (float)filterIntensity;
- (void)setFilterIntensity:(float)arg1;
- (BOOL)isFilterEnabled;
- (void)setIsFilterEnabled:(BOOL)arg1;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (void)notifyDidCancel;
- (void)setValuesToOriginal;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)setTitleItems:(id)arg1;
- (void)setFilterItems:(id)arg1;
- (id)originalItem;
- (void)setOriginalItem:(id)arg1;
- (id)selectedTitleIndexPath;
- (void)setSelectedTitleIndexPath:(id)arg1;
- (id)selectedFilterIndexPath;
- (void)setSelectedFilterIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

