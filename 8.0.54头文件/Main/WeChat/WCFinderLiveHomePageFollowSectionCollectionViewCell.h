@interface WCFinderLiveHomePageFollowSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageDataRefreshProtocol>
{
    id <WCFinderLiveHomePageFollowSectionViewDelegate> _delegate; // +0x8
    WCFinderLiveHomePageFollowSectionView * _liveCollectionView; // +0x10
}
+ (id)cellIdentifier;
+ (double)cellHeight:(BOOL)arg1 styleInfo:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)reloadData;
- (void)scrollToTop:(BOOL)arg1;
- (id)delegate;
- (id)liveCollectionView;
- (void)setLiveCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

