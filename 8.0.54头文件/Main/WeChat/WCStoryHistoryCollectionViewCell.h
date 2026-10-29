@interface WCStoryHistoryCollectionViewCell : UICollectionViewCell <WCStoryDownloadImageCdnMgrExt>
{
    WCStoryDataUnit * _dataUnit; // +0x8
    UIImage * _thumbImage; // +0x10
    MMUIImageView * _thumbImageView; // +0x18
    WCStoryMediaItem * _mediaItem; // +0x20
    MMUILabel * _countLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)thumbImageView;
- (id)countLabel;
- (void)setupUI;
- (void)setDataUnit:(id)arg1;
- (void)tryLoadThumbImage;
- (void)onStoryThumbDownloadSuccess:(id)arg1;
- (void)onStoryThumbDownloadFail:(id)arg1;
- (id)dataUnit;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void)setCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

