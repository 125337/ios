@interface WCFinderPremovieAdClientHelper : NSObject <WCPlayerEventExt, WCFinderPremovieAdPassButtonDelegate, WCPlayerControlProtocol, WCFinderProgressBarDelegate>
{
    BOOL _isReadyToShow; // +0x8
    BOOL _shouldCloseAfterFeedback; // +0x9
    BOOL _isManualPaused; // +0xa
    BOOL _pauseAdVideoIfBecomeActive; // +0xb
    BOOL _hasReportCloseToAMS; // +0xc
    BOOL _didReportPauseExposeToAMS; // +0xd
    int _commentScene; // +0x10
    WCPlayerView * playerView; // +0x18
    id <WCFinderPremovieAdHelperDelegate> _delegate; // +0x20
    FinderAdPreMovieAdInfo * _premovieInfo; // +0x28
    unsigned long long _cachedCloseReason; // +0x30
    double _firstShowTime; // +0x38
    double _playBeginPosForAdVideo; // +0x40
    double _currentPlayPosForAdVideo; // +0x48
    NSString * _contentTid; // +0x50
    UIView * _rootContainerView; // +0x58
    UIView * _cardContainerView; // +0x60
    UIView * _bottomContainerView; // +0x68
    MMUIButton * _jumpToAdButton; // +0x70
    UILabel * _descLabel; // +0x78
    UIImageView * _accountAvatarView; // +0x80
    UILabel * _accountNameLabel; // +0x88
    UILabel * _bottomLeftLabel; // +0x90
    WCFinderPremovieAdPassButton * _passButton; // +0x98
    unsigned long long _closeButtonAppearTime; // +0xa0
    UIImageView * _playOrPauseImageView; // +0xa8
    WCFinderPlayerLoadingView * _playerLoadingView; // +0xb0
    WCFinderNormalProgressBar * _playerProgressBar; // +0xb8
    UIView * _retryView; // +0xc0
    unsigned long long _downloadStartTime; // +0xc8
    unsigned long long _downloadFinishTime; // +0xd0
    unsigned long long _startPlayTime; // +0xd8
    unsigned long long _startExposeTimestamp; // +0xe0
    CGSize _playerSize; // +0xe8
    CGRect _containerFrame; // +0xf8
}
- (id)initWithPremovieInfo:(id)arg1 firstShowTime:(double)arg2 playBeginPos:(double)arg3;
- (void)setupNotifications;
- (void)onApplicationBecomeActive:(id)arg1;
- (void)updateWithMultiMediaCell:(id)arg1 scene:(int)arg2;
- (id)genPremovieView:(id)arg1;
- (void)showPremovieAd;
- (void)resumePremovieAd;
- (void)pausePremovieAd;
- (void)closePremovieAd:(unsigned long long)arg1;
- (void)clearCache;
- (void)setupContentView;
- (void)setupPlayerView:(id)arg1 mediaWrap:(id)arg2 cardWidth:(double)arg3 realBottomAreaHeight:(double)arg4;
- (unsigned long long)getRealCountDownSeconds;
- (void)resetPassButtonStateIfNeed;
- (void)showRetryView;
- (void)hideRetryView;
- (void)reloadAdPlayerAction:(id)arg1;
- (void)tapInCardAction:(id)arg1;
- (void)tapInBottomViewAction:(id)arg1;
- (void)jumpToAdAction:(id)arg1;
- (void)doJumpToAdFromButton:(BOOL)arg1;
- (id)commonCGIReportParams;
- (void)reportClickFeedbackComplaintButton;
- (id)reportDictWithReportScene:(long long)arg1;
- (void)reportStartExposeToAMS;
- (void)reportEndExposeToAMS:(unsigned long long)arg1;
- (void)reportPauseExposeToAMSIfNeed;
- (void)reportResumeExposeToAMSIfNeed;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerDownloadMoovReady:(id)arg1 progressInfo:(id)arg2;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoDidPlayToEndTime;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (id)finderProgressBarGetContentVM;
- (void)premovieAdPassButtonStateUpdated;
- (void)premovieAdPassButtonDidClickFeedback:(CGRect)arg1;
- (CGRect)fittingAdLabelFrameForFeedbackAnchor:(CGRect)arg1;
- (void)premovieAdPassButtonDidClickClose;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)premovieInfo;
- (void)setPremovieInfo:(id)arg1;
- (BOOL)isReadyToShow;
- (void)setIsReadyToShow:(BOOL)arg1;
- (unsigned long long)cachedCloseReason;
- (void)setCachedCloseReason:(unsigned long long)arg1;
- (BOOL)shouldCloseAfterFeedback;
- (void)setShouldCloseAfterFeedback:(BOOL)arg1;
- (double)firstShowTime;
- (void)setFirstShowTime:(double)arg1;
- (double)playBeginPosForAdVideo;
- (void)setPlayBeginPosForAdVideo:(double)arg1;
- (double)currentPlayPosForAdVideo;
- (void)setCurrentPlayPosForAdVideo:(double)arg1;
- (id)contentTid;
- (void)setContentTid:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (BOOL)isManualPaused;
- (void)setIsManualPaused:(BOOL)arg1;
- (BOOL)pauseAdVideoIfBecomeActive;
- (void)setPauseAdVideoIfBecomeActive:(BOOL)arg1;
- (id)rootContainerView;
- (void)setRootContainerView:(id)arg1;
- (id)cardContainerView;
- (void)setCardContainerView:(id)arg1;
- (CGSize)playerSize;
- (void)setPlayerSize:(CGSize)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)jumpToAdButton;
- (void)setJumpToAdButton:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)accountAvatarView;
- (void)setAccountAvatarView:(id)arg1;
- (id)accountNameLabel;
- (void)setAccountNameLabel:(id)arg1;
- (id)bottomLeftLabel;
- (void)setBottomLeftLabel:(id)arg1;
- (id)passButton;
- (void)setPassButton:(id)arg1;
- (unsigned long long)closeButtonAppearTime;
- (void)setCloseButtonAppearTime:(unsigned long long)arg1;
- (id)playOrPauseImageView;
- (void)setPlayOrPauseImageView:(id)arg1;
- (id)playerLoadingView;
- (void)setPlayerLoadingView:(id)arg1;
- (id)playerProgressBar;
- (void)setPlayerProgressBar:(id)arg1;
- (id)retryView;
- (void)setRetryView:(id)arg1;
- (unsigned long long)downloadStartTime;
- (void)setDownloadStartTime:(unsigned long long)arg1;
- (unsigned long long)downloadFinishTime;
- (void)setDownloadFinishTime:(unsigned long long)arg1;
- (unsigned long long)startPlayTime;
- (void)setStartPlayTime:(unsigned long long)arg1;
- (BOOL)hasReportCloseToAMS;
- (void)setHasReportCloseToAMS:(BOOL)arg1;
- (BOOL)didReportPauseExposeToAMS;
- (void)setDidReportPauseExposeToAMS:(BOOL)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)startExposeTimestamp;
- (void)setStartExposeTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
