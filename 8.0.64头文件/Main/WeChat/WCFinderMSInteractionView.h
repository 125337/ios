@interface WCFinderMSInteractionView : UIView <UICollectionViewDataSource>
{
    double _layoutWidth; // +0x8
    UICollectionViewFlowLayout * _collectionLayout; // +0x10
    UICollectionView * _collectionView; // +0x18
    NSMutableArray * _interactionData; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithInteractionData:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)interactionData;
- (void)setInteractionData:(id)arg1;
- (void).cxx_destruct;
@end
