@interface MJDecorPackageViewModel : NSObject
{
    MJTimelineViewModel * _timelineVM; // +0x8
    MJPlaybackViewModel * _playbackVM; // +0x10
    NSString * _selectedPackageID; // +0x18
    NSArray * _items; // +0x20
}
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;
- (void)dealloc;
- (void)bindViews;
- (void)unbindViews;
- (void)loadItemsWithCompletion:(id /* block */)arg1;
- (id)itemsWithMaterialCategories:(id)arg1;
- (id)defaultItems;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (void)asyncLoadDecorPackageItem:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)indexPathForItemWithIdentifier:(id)arg1;
- (id)timelineVM;
- (id)playbackVM;
- (id)selectedPackageID;
- (void)setSelectedPackageID:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
