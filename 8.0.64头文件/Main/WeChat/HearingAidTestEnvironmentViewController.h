@interface HearingAidTestEnvironmentViewController : MMUIViewController <HearingAidInitLogicDelegate>
{
    UIView * _headerView; // +0x70
    UIView * _footerView; // +0x78
    WCRecordFeedbackView * _soundWave; // +0x80
    MMUILabel * _descTV; // +0x88
    HearingAidInitLogic * _logic; // +0x90
    UIButton * _startBtn; // +0x98
    double _startTime; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setUpUI;
- (void)setUpHeaderView;
- (id)genTitle;
- (id)genSoundWave;
- (id)genDesTV;
- (void)setUpFooterView;
- (void)viewDidLayoutSubviews;
- (void)updateLayout;
- (void)onStartBtnClick;
- (void)jumpTestUI;
- (void)initLogic;
- (void)onRespondSoundDB:(double)arg1;
- (void)onChangeTestEnvironment:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)soundWave;
- (void)setSoundWave:(id)arg1;
- (id)descTV;
- (void)setDescTV:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)startBtn;
- (void)setStartBtn:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void).cxx_destruct;
@end
