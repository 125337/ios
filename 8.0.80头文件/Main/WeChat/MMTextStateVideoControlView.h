@interface MMTextStateVideoControlView : WCPlayerControlView <MMTextStateMediaDownloadImageCdnMgrExt>
{
    UIView * _toolPanView; // +0x8
    UIImageView * _thumbImageView; // +0x10
    id <MMTextStateVideoControlViewDelegate> _delegate; // +0x18
    MMTextStateMediaItem * _mediaItem; // +0x20
    UIImage * _thumbImage; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 MediaItem:(id)arg2;
- (void)initSubview;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onPlayerCreated;
- (id)thumbImageView;
- (void)tryLoadThumbImage;
- (void)hiddenThumbImageView;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (id)toolPanView;
- (void)setToolPanView:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (void).cxx_destruct;
@end
