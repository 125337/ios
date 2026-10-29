@interface MJShootFaceEffectInspector : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <MJShootFaceEffectInspectorDelegate> _delegate; // +0x8
    MJShootFaceEffectInspectorViewModel * _viewModel; // +0x10
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x18
    UICollectionView * _faceEffectCollectionView; // +0x20
    CAGradientLayer * _panelBackgroundGradientLayer; // +0x28
    MMUIButton * _dismissButton; // +0x30
    MMUILabel * _titleLabel; // +0x38
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)setupForShowing;
- (void)dismissButtonDidTouchUpInside:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)panelBackgroundGradientLayer;
- (id)faceEffectCollectionView;
- (id)dismissButton;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void)setFaceEffectCollectionView:(id)arg1;
- (void)setPanelBackgroundGradientLayer:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
