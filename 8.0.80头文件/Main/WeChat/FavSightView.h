@interface FavSightView : MMUIView <GroupNoticeDownloadExt, IFavCdnDownloadMgrExt, FavVideoCompressExt, FavSightFullScreenViewControllerDelegate, ICdnComMgrExt, GroupNoticeUploadExt, IRecordDownloadExt, FavFullScreenImageViewControllerDelegate, WCPlayerViewUIDelegate, FavPlayerViewProtocol>
{
    WCPlayerConfigControlView * m_controlView; // +0x8
    FavSightFullScreenViewController * m_viewController; // +0x10
    FavSightInfo * m_sightInfo; // +0x18
    BOOL m_fileReady; // +0x20
    BOOL m_bFullScreen; // +0x21
    BOOL m_downloading; // +0x22
    BOOL m_hasRetriedPlayError; // +0x23
    BOOL m_shouldAutoStartCompatibleStreamingRetry; // +0x24
    unsigned long long m_streamingRecoveryGeneration; // +0x28
    unsigned long long m_streamingRecoveryState; // +0x30
    BOOL _autoPlay; // +0x38
    BOOL _hideIcon; // +0x39
    BOOL _receiveUploadVideoFail; // +0x3a
    BOOL _duringShowAnimation; // +0x3b
    BOOL _isCapturingThumbImage; // +0x3c
    id <FavSightViewDelegate> _delegate; // +0x40
    WCPlayerView * _playerView; // +0x48
    UIImage * _thumbImage; // +0x50
}
- (id)initWithWidth:(double)arg1 favSightInfo:(id)arg2 fullScreen:(BOOL)arg3;
- (id)initWithSize:(CGSize)arg1 favSightInfo:(id)arg2 fullScreen:(BOOL)arg3;
- (id)thumbImage;
- (id)generatePlayerView;
- (id)generateRawPlayerView;
- (id)getHDThumbPath:(id)arg1;
- (id)tryGetImgFromVideoPath:(id)arg1 thumbImagePath:(id)arg2;
- (void)onClickSight;
- (void)dealloc;
- (void)onSingleTap;
- (void)switchToPlayRawVideo;
- (void)cancelRawVideoPlay;
- (void)rebuildPlayerForRaw:(BOOL)arg1 thumbImage:(id)arg2 startPlayer:(BOOL)arg3;
- (void)switchToPlayVideo:(BOOL)arg1 thumbImage:(id)arg2;
- (void)installCompatibleStreamingPlayerWithPlayArgs:(id)arg1 thumbImage:(id)arg2 generation:(unsigned long long)arg3;
- (void)cancelPendingStreamingRecovery;
- (BOOL)isCurrentFavoriteStreamingPlayback;
- (void)retryStreamingWithCompatibleFileType;
- (void)onPlayerError:(int)arg1;
- (BOOL)isRawVideoDownloading;
- (void)setSightDelegate:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setAutoPlay:(BOOL)arg1;
- (void)setHideIcon:(BOOL)arg1;
- (BOOL)isVideoPlaying;
- (void)playVideo;
- (void)pauseVideo;
- (void)stopPlayer;
- (void)refreshThumb;
- (double)getSightHeightWithWidth:(double)arg1 favSightInfo:(id)arg2 fullScreen:(BOOL)arg3;
- (void)setVideoPath:(id)arg1;
- (void)onHide;
- (BOOL)isToolViewHidden;
- (void)setToolViewHidden:(BOOL)arg1;
- (void)setIconViewHidden:(BOOL)arg1;
- (void)showDownloadIcon;
- (void)setLoadingState:(BOOL)arg1;
- (void)requestAllVideoData;
- (void)setDownloadState;
- (BOOL)isNeedDownload;
- (void)setAnimateFrame:(CGRect)arg1;
- (void)onWillAnimateShow;
- (void)onWilAnimateClose;
- (void)onDidAnimateShow;
- (void)didFullScreenAnimationCompleted;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (BOOL)shouldPreventDragDownCloseGesture;
- (CGRect)gestureContainerFrame;
- (void)setDisPlayViewHidden:(BOOL)arg1;
- (void)checkData;
- (BOOL)isFileExistAndComplete:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void)onJumpToUrl:(id)arg1;
- (void)onExitFullScreen;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onUploadGroupNoticeData:(id)arg1 success:(BOOL)arg2;
- (CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (void)playerViewDidZoom:(id)arg1;
- (BOOL)autoPlay;
- (BOOL)hideIcon;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)receiveUploadVideoFail;
- (void)setReceiveUploadVideoFail:(BOOL)arg1;
- (BOOL)duringShowAnimation;
- (void)setDuringShowAnimation:(BOOL)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (BOOL)isCapturingThumbImage;
- (void)setIsCapturingThumbImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
