@interface WCStoryVideoPlayerView : UIView <WCStoryVideoControlViewDelegate, FullScreenGestureDelegate>
{
    BOOL _bCanDragToClose; // +0x8
    BOOL _bStartPlayed; // +0x9
    WCStoryDataItem * _dataItem; // +0x10
    id <WCStoryVideoPlayerViewDelegate> _delegate; // +0x18
    WCStoryPreviewReportObj * _previewReportObj; // +0x20
    WCStoryMediaItem * _mediaItem; // +0x28
    WCPlayerPlayArgs * _playerInfo; // +0x30
    WCPlayerView * _playerView; // +0x38
    WCStoryPlayRecord * _playRecord; // +0x40
    WCStoryVideoControlView * _controlView; // +0x48
    WXFullScreenGestureRecognizer * _fullScreenGestureRecognizer; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 DataItem:(id)arg2;
- (void)dealloc;
- (void)initSubview;
- (void)setPreviewReportObj:(id)arg1;
- (id)playerInfo;
- (void)reloadPlayerInfo;
- (id)playerView;
- (id)controlView;
- (id)fullScreenGestureRecognizer;
- (void)setBCanDragToClose:(BOOL)arg1;
- (void)playVideo;
- (void)playVideoWithMute:(BOOL)arg1;
- (void)pauseVideo;
- (void)stopPlay;
- (void)stopAndCleanPlayer;
- (void)setPlayerToMuted:(BOOL)arg1;
- (void)setVideoFrame:(CGRect)arg1;
- (BOOL)isPlayerViewForMediaItem:(id)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onVideoPlayStarted;
- (void)didTakeVideoSnapshot:(id)arg1;
- (BOOL)bCanDragToClose;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)previewReportObj;
- (BOOL)bStartPlayed;
- (void)setBStartPlayed:(BOOL)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void)setPlayerInfo:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (id)playRecord;
- (void)setPlayRecord:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setFullScreenGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
