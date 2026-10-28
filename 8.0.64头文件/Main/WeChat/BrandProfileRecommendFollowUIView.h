@interface BrandProfileRecommendFollowUIView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _TtC6WeChat36BrandProfileRecommendFollowViewModel * _viewModel; // +0x8
    UILabel * _titleLabel; // +0x10
    MMUIButton * _moreButton; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewFlowLayout * _collectionViewFlowLayout; // +0x28
    UIView * _arrowBackgroundView; // +0x30
    UIView * _arrowView; // +0x38
    CAShapeLayer * _arrowLayer; // +0x40
    SightIconView * _loadingView; // +0x48
    UILabel * _errorLabel; // +0x50
}
- (id)initWithViewModel:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)onDatasUpdate;
- (void)onClickMoreButton;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)titleLabel;
- (id)moreButton;
- (id)collectionView;
- (id)collectionViewFlowLayout;
- (id)arrowView;
- (id)arrowBackgroundView;
- (id)loadingView;
- (id)errorLabel;
- (id)generateArrowLayer:(double)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewFlowLayout:(id)arg1;
- (void)setArrowBackgroundView:(id)arg1;
- (void)setArrowView:(id)arg1;
- (id)arrowLayer;
- (void)setArrowLayer:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void).cxx_destruct;
@end
