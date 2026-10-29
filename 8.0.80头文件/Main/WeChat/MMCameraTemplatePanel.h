@interface MMCameraTemplatePanel : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, MMCameraEffectPanelViewModelDelegate, UICollectionViewDelegateFlowLayout>
{
    id <MMCameraTemplatePanelPanelDelegate> _delegate; // +0x8
    unsigned long long _currentSelectedIndex; // +0x10
    UICollectionView * _collectionView; // +0x18
    CAGradientLayer * _maskLayer; // +0x20
    MMCameraEffectPanelViewModel * _viewModel; // +0x28
}
+ (double)viewH;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupData;
- (void)fetchDataWithUsername:(id)arg1 params:(id)arg2;
- (void)fetchDataWithShortURL:(id)arg1;
- (void)setupView;
- (void)reloadData;
- (double)getCollectInset;
- (id)currentSelectedTemplateItem;
- (id)templateItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)cameraEffectPanelViewModelDidFetchTemplateComplete:(id)arg1;
- (void)cameraEffectPanelViewModelDidFetchTemplateFail:(id)arg1;
- (unsigned long long)cameraEffectPanelViewModelGetScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentSelectedIndex;
- (void)setCurrentSelectedIndex:(unsigned long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
