@interface TextStatePublishMediaView : UIView <WCPlayerConfigDelegate, TextStateBaseMediaView>
{
    UIImage * _image; // +0x8
    NSString * _videoPath; // +0x10
    UIImageView * _imageView; // +0x18
    WCPlayerView * _playerView; // +0x20
    WCPlayerPlayArgs * _playerInfo; // +0x28
    WCPlayerConfigControlView * _controlView; // +0x30
    WCPlayerPlayArgs * _livePlayerInfo; // +0x38
    CGSize _videoSize; // +0x40
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setVideoPath:(id)arg1;
- (id)getNormalVideoPlayInfo;
- (id)getLiveVideoPlayInfo;
- (void)setLivePhotoData:(id)arg1 imgageUrl:(id)arg2;
- (id)createPlayerConfig;
- (void)setPlayerInfo:(id)arg1;
- (void)setLivePlayerInfo:(id)arg1;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (void)startPlayLive;
- (void)stopPlayLive;
- (BOOL)isCurrentPlaying;
- (void)onGetVideoSize:(CGSize)arg1;
- (double)mediaAspectRatio;
- (id)image;
- (id)videoPath;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playerInfo;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)livePlayerInfo;
- (void).cxx_destruct;
@end

