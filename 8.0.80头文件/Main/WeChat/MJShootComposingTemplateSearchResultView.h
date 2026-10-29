@interface MJShootComposingTemplateSearchResultView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplateDownloadProtocol>
{
    id <MJShootComposingTemplateSearchResultViewDelegate> _delegate; // +0x8
    MJPublisherEffectReporter * _editingEffectReporter; // +0x10
    NSString * _reportTabName; // +0x18
    UICollectionView * _collectionView; // +0x20
    NSArray * _items; // +0x28
    NSString * _currentSearchWord; // +0x30
    NSIndexPath * _selectedIndexPath; // +0x38
    NSString * _selectedTemplateID; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)updateWithItems:(id)arg1 searchWord:(id)arg2;
- (void)setDownloadingProgress:(float)arg1 templateID:(id)arg2;
- (void)setDownloadingSucceed:(BOOL)arg1 templateID:(id)arg2;
- (void)reloadWithSelectedTemplateID:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)calcSelectedIndexPath;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)editingEffectReporter;
- (void)setEditingEffectReporter:(id)arg1;
- (id)reportTabName;
- (void)setReportTabName:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)currentSearchWord;
- (void)setCurrentSearchWord:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)selectedTemplateID;
- (void)setSelectedTemplateID:(id)arg1;
- (void).cxx_destruct;
@end
