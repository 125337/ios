@interface MJShootAlbumEntryView : UIView
{
    id <MJShootAlbumEntryViewDelegate> _delegate; // +0x8
    UIImageView * _thumbnailView; // +0x10
    unsigned long long _sizeMode; // +0x18
}
- (id)initWithSizeMode:(unsigned long long)arg1;
- (void)commonInit;
- (void)addAssetsButtonTouchupInside:(id)arg1;
- (void)fetchLatestAssetThumbnail;
- (id)placeholderImage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (unsigned long long)sizeMode;
- (void).cxx_destruct;
@end

