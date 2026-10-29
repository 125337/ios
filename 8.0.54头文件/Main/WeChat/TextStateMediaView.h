@interface TextStateMediaView : UIView <WCPlayerConfigDelegate, MMTextStateVideoControlViewDelegate, MMTextStateMediaDownloadImageCdnMgrExt, TextStateBaseMediaView>
{
    BOOL _muted; // +0x8
    BOOL _forceMuted; // +0x9
    BOOL _isPlayLiveByLongPress; // +0xa
    BOOL _isPlayLiveUseFeedBack; // +0xb
    id <TextStateBaseMediaViewDelegate> _textStateDelegate; // +0x10
    MMTextStateMediaItem * _mediaItem; // +0x18
    double _transitionProgress; // +0x20
    UIImage * _defaultImage; // +0x28
    TextStateIcon * _iconForDefaultImage; // +0x30
    UIImage * _image; // +0x38
    UIImageView * _imageView; // +0x40
    MMWebImageView * _bigIconImageView; // +0x48
    UIView * _shadowView; // +0x50
    WCPlayerView * _playerView; // +0x58
    MMTextStateVideoControlView * _controlView; // +0x60
    double _imageCurrentTime; // +0x68
    CADisplayLink * _imageDisplayLink; // +0x70
    double _timestamp; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setDefaultImage:(id)arg1;
- (void)setIconForDefaultImage:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateBigIcon;
- (void)setMediaItem:(id)arg1;
- (void)setMediaItem:(id)arg1 shouldAutoPlay:(BOOL)arg2;
- (void)dealWCPlayer:(BOOL)arg1 shouldAutoPlay:(BOOL)arg2;
- (void)setTransitionProgress:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setForceMuted:(BOOL)arg1;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)resetPlayMedia;
- (double)mediaAspectRatio;
- (BOOL)longPressEvent:(BOOL)arg1;
- (BOOL)isCurrentPlaying;
- (void)setIsLivePlayUseFeedBack:(BOOL)arg1;
- (void)stopLive;
- (void)tick:(id)arg1;
- (void)startDisplayLink;
- (void)stopDisplayLink;
- (void)onVideoProgressChange:(double)arg1;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (void)onTextStateMediaImageDownloadSuccess:(id)arg1;
- (void)onTextStateMediaImageDownloadFail:(id)arg1;
- (BOOL)isMuted;
- (BOOL)isForceMuted;
- (id)textStateDelegate;
- (void)setTextStateDelegate:(id)arg1;
- (id)mediaItem;
- (double)transitionProgress;
- (id)defaultImage;
- (id)iconForDefaultImage;
- (id)image;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)bigIconImageView;
- (void)setBigIconImageView:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (double)imageCurrentTime;
- (void)setImageCurrentTime:(double)arg1;
- (id)imageDisplayLink;
- (void)setImageDisplayLink:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (BOOL)isPlayLiveByLongPress;
- (void)setIsPlayLiveByLongPress:(BOOL)arg1;
- (BOOL)isPlayLiveUseFeedBack;
- (void)setIsPlayLiveUseFeedBack:(BOOL)arg1;
- (void).cxx_destruct;
@end

