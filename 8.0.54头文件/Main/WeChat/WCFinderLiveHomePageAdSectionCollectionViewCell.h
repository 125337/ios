@interface WCFinderLiveHomePageAdSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageDataRefreshProtocol>
{
    id <WCFinderLiveHomePageAdSectionViewDelegate> _delegate; // +0x8
    WCFinderLiveHomePageAdSectionView * _liveCollectionView; // +0x10
}
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)liveCollectionView;
- (void)setLiveCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

