@interface FavoritePlayerView : UIView <FavoritePlayerControlViewDelegate, FavPlayerViewProtocol>
{
    BOOL autoPlay; // +0x8
    BOOL hideIcon; // +0x9
    BOOL _isRawVideo; // +0xa
    BOOL _isAnimateShowing; // +0xb
    BOOL _bShouldResumeInterrupt; // +0xc
    BOOL _isRawVideoMode; // +0xd
    BOOL _bFirstPlay; // +0xe
    BOOL _bPlayToEnd; // +0xf
    BOOL _isShowRawPlaySucc; // +0x10
    id <FavSightViewDelegate> delegate; // +0x18
    NSString * _aggreateName; // +0x20
    double _initialTime; // +0x28
    FavoritesRecordDataField * _dataField; // +0x30
    FavoritePlayerControlView * _controlView; // +0x38
    WCPlayerView * _playerView; // +0x40
    WCPlayerPlayArgs * _playerInfo; // +0x48
    WCDownloadArgsWrap * _downloadArgsWrap; // +0x50
    WCPlayerView * _rawPlayerView; // +0x58
    WCPlayerPlayArgs * _rawPlayerInfo; // +0x60
    WCDownloadArgsWrap * _rawDownloadArgsWrap; // +0x68
    UIImageView * _thumbImageView; // +0x70
    unsigned long long _rawBtnClickTime; // +0x78
    unsigned long long _rawPlayStartTime; // +0x80
    CGSize _videoSize; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 dataField:(id)arg2;
- (void)dealloc;
- (id)controlView;
- (void)setFrame:(CGRect)arg1;
- (void)initView;
- (void)configPlayerView;
- (id)thumbImageView;
- (void)layoutSubviews;
- (id)generateDownloadArgsWrap;
- (id)generateDownloadArgsWrapWithMiddleData;
- (id)rawDownloadArgsWrap;
- (id)downloadArgsWrap;
- (id)generatePlayerView;
- (id)generateRawPlayerView;
- (id)generateRawPlayerInfo;
- (id)generateCompressPlayerInfo;
- (void)playVideo;
- (void)seekTo:(double)arg1;
- (void)stopPlayer;
- (void)stopPlayerDownload;
- (void)interruptVideo;
- (void)resumeVideoFromInterrupt;
- (void)pauseVideo;
- (unsigned long long)totalTime;
- (double)getCurrPlayedTimeInSec;
- (double)getTotalPlaybackTimeInSec;
- (id)getAnimateView;
- (id)getRawPlayStatusBtn;
- (void)resetViewPosition;
- (BOOL)isVideoPlaying;
- (BOOL)isVideoReadyToPlay;
- (BOOL)isPreventHiddenTool;
- (BOOL)isNeedDownload;
- (void)setLoadingState:(BOOL)arg1;
- (void)onWillAnimateShow;
- (void)setAnimateFrame:(CGRect)arg1;
- (void)onDidAnimateShow;
- (void)didFullScreenAnimationCompleted;
- (void)onWilAnimateClose;
- (void)setViewsAlphaOnMultiPageScroll:(double)arg1;
- (void)setStatusViewsHidden:(BOOL)arg1;
- (void)handleDownloadFail;
- (void)handleDownloadExpired;
- (void)exitVideoPlay;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)updatePlayerFrame;
- (double)getBottomRightMargin;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onStartPlayIconClick;
- (void)onCloseVideoPlay;
- (void)onSightProgressBarHidden;
- (void)onProgressBarEndSeek:(double)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onClickToPlayRawVideo;
- (void)onClickToCancelPlayRawVideo;
- (void)onRawVideoDownloadSuccess;
- (void)setToolViewHidden:(BOOL)arg1;
- (void)setViewsHiddenOnScroll:(BOOL)arg1;
- (void)setIconViewHidden:(BOOL)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)onSingleTap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (BOOL)hideIcon;
- (void)setHideIcon:(BOOL)arg1;
- (id)aggreateName;
- (void)setAggreateName:(id)arg1;
- (double)initialTime;
- (void)setInitialTime:(double)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)isRawVideo;
- (void)setIsRawVideo:(BOOL)arg1;
- (BOOL)isAnimateShowing;
- (void)setIsAnimateShowing:(BOOL)arg1;
- (id)dataField;
- (void)setDataField:(id)arg1;
- (void)setControlView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (void)setDownloadArgsWrap:(id)arg1;
- (id)rawPlayerView;
- (void)setRawPlayerView:(id)arg1;
- (id)rawPlayerInfo;
- (void)setRawPlayerInfo:(id)arg1;
- (void)setRawDownloadArgsWrap:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (BOOL)bShouldResumeInterrupt;
- (void)setBShouldResumeInterrupt:(BOOL)arg1;
- (BOOL)isRawVideoMode;
- (void)setIsRawVideoMode:(BOOL)arg1;
- (BOOL)bFirstPlay;
- (void)setBFirstPlay:(BOOL)arg1;
- (BOOL)bPlayToEnd;
- (void)setBPlayToEnd:(BOOL)arg1;
- (BOOL)isShowRawPlaySucc;
- (void)setIsShowRawPlaySucc:(BOOL)arg1;
- (unsigned long long)rawBtnClickTime;
- (void)setRawBtnClickTime:(unsigned long long)arg1;
- (unsigned long long)rawPlayStartTime;
- (void)setRawPlayStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

