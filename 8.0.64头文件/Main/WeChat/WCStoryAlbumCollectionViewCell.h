@interface WCStoryAlbumCollectionViewCell : UICollectionViewCell <WCImageViewDelegate>
{
    WCMediaItem * _mediaItem; // +0x8
    WCMomentsPageContext * _pageContext; // +0x10
    SightFileMaskView * _playIconView; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)playIconView;
- (void)setMediaItem:(id)arg1;
- (id)mediaItem;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void).cxx_destruct;
@end
