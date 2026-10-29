@interface WCFinderLiveHomePageBannerSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageAutoPlayProtocol, WCFinderLiveHomePageDataRefreshProtocol>
{
    id <WCFinderLiveHomePageBannerSectionViewDelegate> _delegate; // +0x8
    WCFinderLiveHomePageBannerSectionView * _liveCollectionView; // +0x10
}
+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)layoutSubviews;
- (void)updateWithVM:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)reloadData;
- (void)scrollToTop:(BOOL)arg1;
- (id)collectionView;
- (id)indexPathsForVisibleItems;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (id)delegate;
- (id)liveCollectionView;
- (void)setLiveCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

