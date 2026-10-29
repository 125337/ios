@interface WCFinderLiveHomePageBaseSectionView : UIView <WCFinderLiveHomePageSectionViewModelDelegate>
{
    UICollectionView * _collectionview; // +0x8
    WCFinderLiveHomePageSectionViewModel * _vm; // +0x10
    FinderLiveSquareStyleInfo * _styleInfo; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 styleInfo:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)getVisibleFeedVM;
- (void)updateWithVM:(id)arg1;
- (void)reloadData;
- (void)scrollToTop:(BOOL)arg1;
- (id)generateCollectionView;
- (void)layoutSubViews_onFrameChanged;
- (id)collectionview;
- (void)bindExposeEventCallback:(id)arg1 feedVM:(id)arg2 indexPath:(id)arg3;
- (void)reportFeedExpose:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)reportFeedExposeEnd:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)bindNewExposeReport:(id)arg1 feedVM:(id)arg2 indexPath:(id)arg3;
- (id)getContainerSectionVisibleItemIndex;
- (void)onContainerSectionVMDisAppear;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)setCollectionview:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end
