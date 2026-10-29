@interface MJTimelineCanvasEditView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <MJTimelineCanvasEditViewDelegate> _delegate; // +0x8
    MJTimelineCanvasEditViewModel * _viewModel; // +0x10
    UICollectionView * _canvasCollectionView; // +0x18
    MMUIButton * _contentScaleModeButton; // +0x20
}
- (id)initWithViewModel:(id)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)contentScaleModeButtonDidTouchUpInside:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateCellSelection;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)canvasCollectionView;
- (void)setCanvasCollectionView:(id)arg1;
- (id)contentScaleModeButton;
- (void)setContentScaleModeButton:(id)arg1;
- (void).cxx_destruct;
@end

