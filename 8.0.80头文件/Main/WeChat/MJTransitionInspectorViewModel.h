@interface MJTransitionInspectorViewModel : MJSegmentInspectorViewModel
{
    NSString * _selectedTransitionID; // +0x8
    NSArray * _items; // +0x10
    id /* block */ _updateSelectionHandler; // +0x18
    OMCTransitionSegment * _transitionSegment; // +0x20
    NSString * _originalTransitionID; // +0x28
    struct _overlappingTransitionDuration; // +0x30
    struct _nonOverlappingTransitionDuration; // +0x48
}
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;
- (id)itemsWithDefaultItem;
- (void)dealloc;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (void)notifyDidCancel;
- (void)setTransitionToOriginal;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)loadItemsWithCompletion:(id /* block */)arg1;
- (void)handleMaterialPackRequestFailedWithCategories:(id)arg1 error:(id)arg2;
- (id)itemsWithMaterialCategories:(id)arg1;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (void)loadMaterial:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)cellItemAtIndexPath:(id)arg1;
- (id)selectedTransitionID;
- (void)setSelectedTransitionID:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (struct)overlappingTransitionDuration;
- (void)setOverlappingTransitionDuration:(struct)arg1;
- (struct)nonOverlappingTransitionDuration;
- (void)setNonOverlappingTransitionDuration:(struct)arg1;
- (id /* block */)updateSelectionHandler;
- (void)setUpdateSelectionHandler:(id /* block */)arg1;
- (id)transitionSegment;
- (void)setTransitionSegment:(id)arg1;
- (id)originalTransitionID;
- (void)setOriginalTransitionID:(id)arg1;
- (void).cxx_destruct;
@end
