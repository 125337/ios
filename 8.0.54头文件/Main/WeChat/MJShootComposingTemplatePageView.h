@interface MJShootComposingTemplatePageView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplateSinglePageViewModelDelegate>
{
    UICollectionView * _collectionView; // +0x8
    MJShootComposingTemplateSinglePageViewModel * _viewModel; // +0x10
    id <MJShootComposingTemplatePageViewDelegate> _delegate; // +0x18
    NSIndexPath * _selectedIndexPath; // +0x20
    NSString * _downloadingTemplateID; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)templateSinglePageViewModel:(id)arg1 didFetchTemplateItems:(id)arg2;
- (void)templateSinglePageViewModelDidFetchTemplateItemsFailed:(id)arg1;
- (void)setDownloadingProgress:(float)arg1 templateID:(id)arg2;
- (void)setDownloadingSucceed:(BOOL)arg1 templateID:(id)arg2;
- (void)reloadData;
- (id)calcSelectedIndexPath;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)downloadingTemplateID;
- (void)setDownloadingTemplateID:(id)arg1;
- (void).cxx_destruct;
@end

