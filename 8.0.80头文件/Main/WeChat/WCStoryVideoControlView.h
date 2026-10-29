@interface WCStoryVideoControlView : WCPlayerControlView <WCStoryDownloadImageCdnMgrExt>
{
    UIView * _toolPanView; // +0x8
    UIImageView * _thumbImageView; // +0x10
    id <WCStoryVideoControlViewDelegate> _delegate; // +0x18
    WCStoryMediaItem * _mediaItem; // +0x20
    UIImage * _thumbImage; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 MediaItem:(id)arg2;
- (void)initSubview;
- (id)thumbImageView;
- (id)toolPanView;
- (void)tryLoadThumbImage;
- (void)hiddenThumbImageView;
- (void)onVideoPlay;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onReceiveAllVideoData:(id)arg1;
- (void)onStoryThumbDownloadSuccess:(id)arg1;
- (void)onStoryThumbDownloadFail:(id)arg1;
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
