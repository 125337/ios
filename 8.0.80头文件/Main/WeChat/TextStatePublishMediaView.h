@interface TextStatePublishMediaView : UIView <WCPlayerConfigDelegate, TextStateBaseMediaView>
{
    BOOL _useCustomBlurEffect; // +0x8
    UIImage * _image; // +0x10
    NSString * _videoPath; // +0x18
    UIImageView * _imageView; // +0x20
    WCPlayerView * _playerView; // +0x28
    WCPlayerPlayArgs * _playerInfo; // +0x30
    WCPlayerConfigControlView * _controlView; // +0x38
    WCPlayerPlayArgs * _livePlayerInfo; // +0x40
    NSString * _liveImageUrl; // +0x48
    CGSize _videoSize; // +0x50
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setVideoPath:(id)arg1;
- (void)setVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)getNormalVideoPlayInfo;
- (id)getLiveVideoPlayInfo;
- (void)setLivePhotoVideoURL:(id)arg1 imageURL:(id)arg2 needPlay:(BOOL)arg3;
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
- (void)onPlayerCreated;
- (void)refreshView;
- (id)image;
- (id)videoPath;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)useCustomBlurEffect;
- (void)setUseCustomBlurEffect:(BOOL)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playerInfo;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)livePlayerInfo;
- (id)liveImageUrl;
- (void)setLiveImageUrl:(id)arg1;
- (void).cxx_destruct;
@end
