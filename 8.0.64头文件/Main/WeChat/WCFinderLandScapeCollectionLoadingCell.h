@interface WCFinderLandScapeCollectionLoadingCell : UICollectionViewCell
{
    WCFinderAnimationLoadingView * _loadingView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)startLoading;
- (void)stopLoading;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
