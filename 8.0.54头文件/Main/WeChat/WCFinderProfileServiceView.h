@interface WCFinderProfileServiceView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <WCFinderProfileServiceViewDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
    UIColor * _privateThemeColor; // +0x18
    NSArray * _jumpInfos; // +0x20
    long long _columnCount; // +0x28
    CGSize _lastTestSize; // +0x30
    CGSize _lastSizeThatFitSize; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithJumpInfos:(id)arg1;
- (id)themeColor;
- (void)setThemeColor:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (id)privateThemeColor;
- (void)setPrivateThemeColor:(id)arg1;
- (id)jumpInfos;
- (void)setJumpInfos:(id)arg1;
- (long long)columnCount;
- (void)setColumnCount:(long long)arg1;
- (CGSize)lastTestSize;
- (void)setLastTestSize:(CGSize)arg1;
- (CGSize)lastSizeThatFitSize;
- (void)setLastSizeThatFitSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

