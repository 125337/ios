@interface WCFinderAntiAddictionTableViewCell : WCFinderTableViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderFocusCellProtocol>
{
    BOOL _isPlaying; // +0x8
    BOOL _isTimerRunning; // +0x9
    BOOL _hasTimerActivated; // +0xa
    BOOL _isDisplaying; // +0xb
    BOOL _hasReportedUnExpt; // +0xc
    id <WCFinderAntiAddictionTableViewCellDelegate> _delegate; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    WCFinderSimplePlayerView * _playerView; // +0x20
    WCFinderAntiAddictionPanelView * _panelView; // +0x28
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x30
    WCFinderFeedMediaWrap * _mediaWrap; // +0x38
    NSTimer * _antiAddictionTimer; // +0x40
    unsigned long long _breakTimeSeconds; // +0x48
    unsigned long long _remainingSeconds; // +0x50
    double _beginDisplayTimestamp; // +0x58
}
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)cellViewEnterBackground;
- (void)cellViewEnterForeground;
- (void)prepareForReuse;
- (void)didBeginDisplay;
- (void)didEndDisplay:(long long)arg1;
- (void)setupUI;
- (void)updateWithContentVM:(id)arg1 index:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)updateAntiAddictionUI;
- (BOOL)shouldCaluculateAsFocusCell;
- (CGRect)convertFocusRectToView:(id)arg1;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (void)pause;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)arg1;
- (void)setThumbImageHidden:(BOOL)arg1;
- (void)createSimplePlayerView;
- (void)setupVideoData;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (void)onVideoStopPlay;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)stopVideoPlay;
- (BOOL)isHaveContinueWatch;
- (unsigned long long)currentStayTimeMs;
- (id)commonRestCardReportParams;
- (void)reportAntiAddictionExpt;
- (void)reportAntiAddictionUnExpt;
- (void)reportContinueWatchClick;
- (void)startAntiAddictionTimer;
- (void)stopAntiAddictionTimer;
- (void)onAntiAddictionTimerTick;
- (void)updateCountdownDisplay;
- (void)setDecorationViewsTranslucent:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)placeHolderInfo;
- (void)setPlaceHolderInfo:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)antiAddictionTimer;
- (void)setAntiAddictionTimer:(id)arg1;
- (unsigned long long)breakTimeSeconds;
- (void)setBreakTimeSeconds:(unsigned long long)arg1;
- (unsigned long long)remainingSeconds;
- (void)setRemainingSeconds:(unsigned long long)arg1;
- (BOOL)isTimerRunning;
- (void)setIsTimerRunning:(BOOL)arg1;
- (BOOL)hasTimerActivated;
- (void)setHasTimerActivated:(BOOL)arg1;
- (double)beginDisplayTimestamp;
- (void)setBeginDisplayTimestamp:(double)arg1;
- (BOOL)isDisplaying;
- (void)setIsDisplaying:(BOOL)arg1;
- (BOOL)hasReportedUnExpt;
- (void)setHasReportedUnExpt:(BOOL)arg1;
- (void).cxx_destruct;
@end
