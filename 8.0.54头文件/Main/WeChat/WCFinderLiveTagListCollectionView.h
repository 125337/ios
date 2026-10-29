@interface WCFinderLiveTagListCollectionView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <WCFinderLiveTagListCollectionViewDelegate> _delegate; // +0x8
    NSArray * _items; // +0x10
    WCFinderLiveTagListItem * _initialSelectItem; // +0x18
    WCFinderLiveTagListCollectionViewConfig * _config; // +0x20
    UICollectionView * _tagCollectionView; // +0x28
    long long _lastSelectItemId; // +0x30
}
+ (CGSize)cellHeightConfig:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)setItems:(id)arg1;
- (void)setConfig:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (id)initialSelectItem;
- (void)setInitialSelectItem:(id)arg1;
- (id)config;
- (id)tagCollectionView;
- (void)setTagCollectionView:(id)arg1;
- (long long)lastSelectItemId;
- (void)setLastSelectItemId:(long long)arg1;
- (void).cxx_destruct;
@end

