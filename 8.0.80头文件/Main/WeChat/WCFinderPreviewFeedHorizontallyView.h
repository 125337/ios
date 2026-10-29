@interface WCFinderPreviewFeedHorizontallyView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCGeneralMonitorDelegate>
{
    BOOL _scrollEnabled; // +0x8
    id <WCFinderPreviewFeedHorizontallyViewDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    long long _maxCardNumInScreen; // +0x20
    NSArray * _dataSource; // +0x28
}
+ (double)feedCardHeightWithScreenWid:(double)arg1 maxCardNumInScreen:(long long)arg2;
+ (double)feedCardWidthWithScreenWid:(double)arg1 maxCardNumInScreen:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1 maxCardNumInScreen:(long long)arg2 scrollEnabled:(BOOL)arg3;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)initCollectionView;
- (void)updateWithDataSource:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (long long)maxCardNumInScreen;
- (void)setMaxCardNumInScreen:(long long)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)scrollEnabled;
- (void)setScrollEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
