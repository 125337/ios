@interface TextStatePublishRecentUseIconView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <TextStatePublishRecentUseIconViewDelegate> _delegate; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UICollectionView * _collectionView; // +0x18
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x20
    CAGradientLayer * _gradientMaskLayer; // +0x28
    UILongPressGestureRecognizer * _itemLongPressGesture; // +0x30
    NSMutableArray * _privateRecentUseIconList; // +0x38
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubview;
- (void)initGradientLayer;
- (void)updateGradientLayer;
- (void)initLayout;
- (void)layoutSubviews;
- (void)initGesture;
- (void)setRecentUseIconList:(id)arg1;
- (id)recentUseIconList;
- (void)setBounces:(BOOL)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (id)itemLongPressGesture;
- (void)setItemLongPressGesture:(id)arg1;
- (id)privateRecentUseIconList;
- (void)setPrivateRecentUseIconList:(id)arg1;
- (void).cxx_destruct;
@end

