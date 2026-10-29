@interface WCStoryAlbumCollectionViewCell : UICollectionViewCell <WCImageViewDelegate>
{
    WCMediaItem * _mediaItem; // +0x8
    UIView * _thumbnailView; // +0x10
    WCMomentsPageContext * _pageContext; // +0x18
    SightFileMaskView * _playIconView; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)playIconView;
- (void)setMediaItem:(id)arg1;
- (id)mediaItem;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void).cxx_destruct;
@end
