@interface WCFinderLiveHomePageInteractionEntranceCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageDataRefreshProtocol>
{
    id <WCFinderLiveHomePageInteractionEntranceSectionViewDelegate> _delegate; // +0x8
    WCFinderLiveHomePageInteractionEntranceSectionView * _liveCollectionView; // +0x10
}
+ (double)cellHeightInWidth:(double)arg1;
+ (id)cellIdentifier;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)initializeIfNeeded:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithVM:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (id)indexPathsForVisibleItems;
- (id)delegate;
- (id)liveCollectionView;
- (void)setLiveCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
