@interface FavSightView : MMUIView <GroupNoticeDownloadExt, IFavCdnDownloadMgrExt, FavVideoCompressExt, FavSightFullScreenViewControllerDelegate, ICdnComMgrExt, GroupNoticeUploadExt, IRecordDownloadExt, FavFullScreenImageViewControllerDelegate, WCPlayerViewUIDelegate, FavPlayerViewProtocol>
{
    WCPlayerView * m_sightView; // +0x8
    WCPlayerConfigControlView * m_controlView; // +0x10
    WCPlayerPlayArgs * m_playerInfo; // +0x18
    FavSightFullScreenViewController * m_viewController; // +0x20
    FavSightInfo * m_sightInfo; // +0x28
    BOOL m_fileReady; // +0x30
    BOOL m_bFullScreen; // +0x31
    BOOL m_downloading; // +0x32
    BOOL _autoPlay; // +0x33
    BOOL _hideIcon; // +0x34
    BOOL _receiveUploadVideoFail; // +0x35
    id <FavSightViewDelegate> _delegate; // +0x38
}
- (id)initWithWidth:(double)arg1 favSightInfo:(id)arg2 fullScreen:(BOOL)arg3;
- (id)getHDThumbPath:(id)arg1;
- (id)tryGetImgFromVideoPath:(id)arg1 thumbImagePath:(id)arg2;
- (void)onClickSight;
- (void)dealloc;
- (void)onSingleTap;
- (void)setSightDelegate:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setAutoPlay:(BOOL)arg1;
- (void)setHideIcon:(BOOL)arg1;
- (BOOL)isVideoPlaying;
- (void)playVideo;
- (void)pauseVideo;
- (void)stopPlayer;
- (void)refreshThumb;
- (double)getSightHeight;
- (void)setVideoPath:(id)arg1;
- (void)onHide;
- (BOOL)isToolViewHidden;
- (void)setToolViewHidden:(BOOL)arg1;
- (void)setIconViewHidden:(BOOL)arg1;
- (void)showDownloadIcon;
- (void)setLoadingState:(BOOL)arg1;
- (void)fetchAllVideoData;
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
- (void)setDisPlayViewHidden:(BOOL)arg1;
- (void)checkData;
- (BOOL)isFileExistAndComplete:(id)arg1;
- (BOOL)tryFixUnplayableVideo;
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
- (void).cxx_destruct;
@end
