@interface HearingAidTestEnvironmentViewController : MMUIViewController <HearingAidInitLogicDelegate>
{
    BOOL _isAudioInterruption; // +0x70
    BOOL _isInit; // +0x71
    BOOL _isJumpTestUI; // +0x72
    BOOL _isDownLoading; // +0x73
    BOOL _isShowDialog; // +0x74
    UIView * _headerView; // +0x78
    UIView * _footerView; // +0x80
    WCRecordFeedbackView * _soundWave; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUILabel * _descTV; // +0x98
    HearingAidTestEnvironmentLogic * _logic; // +0xa0
    SightIconView * _sightIconView; // +0xa8
    UIButton * _startBtn; // +0xb0
    double _startTime; // +0xb8
    double _quietKeepTime; // +0xc0
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setUpUI;
- (void)setUpHeaderView;
- (id)genTitle;
- (id)genSoundWave;
- (id)genSightIconView;
- (id)genDesTV;
- (void)setUpFooterView;
- (void)viewDidLayoutSubviews;
- (void)updateLayout;
- (void)onStartBtnClick;
- (void)showErrorInfo:(id)arg1 isSingleBtn:(BOOL)arg2;
- (void)jumpTestUI;
- (void)initLogic;
- (void)onRespondSoundDB:(double)arg1;
- (void)onChangeTestEnvironment:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidBeInteractivePoped;
- (void)onBackClick;
- (void)dataReport:(id)arg1 processReult:(int)arg2;
- (void)onResponseAudioInterruptionBegin;
- (void)onResponseAudioInterruptionEnd;
- (BOOL)judgeSelfIsPopVC;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)soundWave;
- (void)setSoundWave:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descTV;
- (void)setDescTV:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)sightIconView;
- (void)setSightIconView:(id)arg1;
- (id)startBtn;
- (void)setStartBtn:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)quietKeepTime;
- (void)setQuietKeepTime:(double)arg1;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (BOOL)isInit;
- (void)setIsInit:(BOOL)arg1;
- (BOOL)isJumpTestUI;
- (void)setIsJumpTestUI:(BOOL)arg1;
- (BOOL)isDownLoading;
- (void)setIsDownLoading:(BOOL)arg1;
- (BOOL)isShowDialog;
- (void)setIsShowDialog:(BOOL)arg1;
- (void).cxx_destruct;
@end
