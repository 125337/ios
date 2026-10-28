@interface WCAdFinderLivePlayerView : MMUIView <MMLiveCDNPlayerViewDelegate, WCCanvasPageViewAnimationProtocol>
{
    BOOL _bTimelineScene; // +0x8
    BOOL _intentToPlay; // +0x9
    BOOL _playerPlayBeginFlag; // +0xa
    BOOL _liveJoinedFlag; // +0xb
    BOOL _shutdownFlag; // +0xc
    int _displayType; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdFinderLiveStreamInfo * _adLiveStreamInfo; // +0x20
    MMFinderLiveSnsAdStreamInfo * _currentFinderLiveStreamInfo; // +0x28
    MMUIView * _bgView; // +0x30
    WCAdURLImageView * _thumbView; // +0x38
    MMLiveCDNPlayerView * _streamPlayer; // +0x40
    SightIconView * _playIconView; // +0x48
    WCAdURLImageView * _brandWallpaperView; // +0x50
    WCAdURLImageView * _brandFrontImageView; // +0x58
    MMTimer * _checkJoinLiveTimer; // +0x60
    MMFinderLiveFeedPreviewLogic * _finderLivePreviewLogic; // +0x68
    CGSize _videoSize; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 bTimelineScene:(BOOL)arg3;
- (void)dealloc;
- (void)addNotifications;
- (void)onWillEnterForeground;
- (void)initView;
- (id)bgView;
- (id)thumbView;
- (id)streamPlayer;
- (id)playIconView;
- (id)brandWallpaperView;
- (id)brandFrontImageView;
- (id)createImageView:(id)arg1;
- (id)fetchThumbUrl;
- (void)initData;
- (void)play;
- (void)pause;
- (void)shutdown;
- (void)realStartPlayer:(id)arg1;
- (void)startCheckJoinLiveTimer;
- (void)stopCheckJoinLiveTimer;
- (void)checkJoinLive;
- (id)fetchLocalFinderLiveStreamInfo;
- (void)checkAndRefreshFinderLiveStreamInfo;
- (void)requestFinderLiveStreamInfoFromServer;
- (void)onFinderLiveStreamInfoResponse:(id)arg1;
- (void)cleanOnLiveEnd;
- (BOOL)isFinderLiving:(id)arg1;
- (BOOL)isLiveStatusAndLiveStreamSame;
- (void)checkAndNotifyLiveStatusChanged:(id)arg1;
- (void)showPlayIconWithLoadingType;
- (void)showPlayIconWithPlayType;
- (void)hidePlayIcon;
- (void)updateStreamPlayerFrame;
- (id)fetchFinderLiveStreamReportInfo;
- (BOOL)isBrandWallpaperDisplayType;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayChangeSize:(CGSize)arg1;
- (void)onCanvasPageViewAnimationSetContentHidden:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (id)adLiveStreamInfo;
- (void)setAdLiveStreamInfo:(id)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (id)currentFinderLiveStreamInfo;
- (void)setCurrentFinderLiveStreamInfo:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setThumbView:(id)arg1;
- (void)setStreamPlayer:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setBrandWallpaperView:(id)arg1;
- (void)setBrandFrontImageView:(id)arg1;
- (BOOL)intentToPlay;
- (void)setIntentToPlay:(BOOL)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)playerPlayBeginFlag;
- (void)setPlayerPlayBeginFlag:(BOOL)arg1;
- (BOOL)liveJoinedFlag;
- (void)setLiveJoinedFlag:(BOOL)arg1;
- (id)checkJoinLiveTimer;
- (void)setCheckJoinLiveTimer:(id)arg1;
- (id)finderLivePreviewLogic;
- (void)setFinderLivePreviewLogic:(id)arg1;
- (BOOL)shutdownFlag;
- (void)setShutdownFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
