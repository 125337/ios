@interface TextStateMediaBackgroundView : UIImageView <MMTextStateMediaDownloadImageCdnMgrExt>
{
    MMTextStateMediaItem * _mediaItem; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setMediaItem:(id)arg1;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (id)mediaItem;
- (void).cxx_destruct;
@end

