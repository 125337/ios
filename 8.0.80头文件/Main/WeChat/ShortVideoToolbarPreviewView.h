@interface ShortVideoToolbarPreviewView : UIView
{
    BOOL _bOnEditting; // +0x8
    BOOL _fitsMediaToPreviewFrame; // +0x9
    BOOL _isPlaying; // +0xa
    id /* block */ _didClickRetakeBlock; // +0x10
    id /* block */ _didClickDoneBlock; // +0x18
    id /* block */ _didClickMuteBlock; // +0x20
    id /* block */ _didClickEditBlock; // +0x28
    id /* block */ _didClickEditVideoBlock; // +0x30
    unsigned long long _m_scene; // +0x38
    UIImage * _image; // +0x40
    NSString * _videoPath; // +0x48
    UIView * _backgrounView; // +0x50
    UIView * _previewView; // +0x58
    UIImageView * _imageView; // +0x60
    UIView * _playerView; // +0x68
    WCShortVideoToolbarResultPreviewBottomView * _botView; // +0x70
    UIImageView * _m_topBkgView; // +0x78
    AVPlayerItem * _playerItem; // +0x80
    AVPlayer * _player; // +0x88
    AVPlayerLayer * _playerLayer; // +0x90
    CGRect _previewFrame; // +0x98
}
- (id)initWithFrame:(CGRect)arg1 previewFrame:(CGRect)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setVideoPath:(id)arg1 withOrientation:(long long)arg2;
- (id)setImage:(id)arg1 Orientation:(long long)arg2 isFrontCamera:(BOOL)arg3;
- (void)pauseVideo;
- (void)continuePlayVideo;
- (void)setImage:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)setupPreviewView;
- (void)setupBottomView;
- (void)didClickRetake;
- (void)didClickDone;
- (void)didClickMute;
- (void)didClickEdit;
- (void)didClickEditVideo;
- (void)stopVideo;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id /* block */)didClickRetakeBlock;
- (void)setDidClickRetakeBlock:(id /* block */)arg1;
- (id /* block */)didClickDoneBlock;
- (void)setDidClickDoneBlock:(id /* block */)arg1;
- (id /* block */)didClickMuteBlock;
- (void)setDidClickMuteBlock:(id /* block */)arg1;
- (id /* block */)didClickEditBlock;
- (void)setDidClickEditBlock:(id /* block */)arg1;
- (id /* block */)didClickEditVideoBlock;
- (void)setDidClickEditVideoBlock:(id /* block */)arg1;
- (unsigned long long)m_scene;
- (void)setM_scene:(unsigned long long)arg1;
- (BOOL)bOnEditting;
- (void)setBOnEditting:(BOOL)arg1;
- (BOOL)fitsMediaToPreviewFrame;
- (void)setFitsMediaToPreviewFrame:(BOOL)arg1;
- (CGRect)previewFrame;
- (void)setPreviewFrame:(CGRect)arg1;
- (id)image;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)backgrounView;
- (void)setBackgrounView:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)botView;
- (void)setBotView:(id)arg1;
- (id)m_topBkgView;
- (void)setM_topBkgView:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (void).cxx_destruct;
@end
