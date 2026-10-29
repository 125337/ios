@interface CBTAsstShortcutBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <CBTAsstShortcutBarDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
    NSArray * _items; // +0x18
}
+ (double)preferredHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithShortcutItems:(id)arg1;
- (void)reloadForFontChange;
- (void)hideShortcutBar;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
