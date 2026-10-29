@interface TingReportManagerCpp : NSObject <TingReportServiceDelegate, _TtP6WeChat13ICarPlayUIExt_, ITingReportManager>
{
    int _audioSessionRoute; // +0x8
    unsigned int _netType; // +0xc
    TingDataReportService * _logic; // +0x10
}
+ (void)clearSession;
+ (id)extraReportDataFromScene:(int)arg1 ActionListenItem:(id)arg2 actionCategoryItem:(id)arg3 playingListenItem:(id)arg4 playingCategoryItem:(id)arg5;
- (id)imp;
- (id)logic;
- (id)init;
- (void)dealloc;
- (id)getTapeItem;
- (id)getPlayerReportContext;
- (id)getPlayerTingItem;
- (int)getAudioSessionRoute;
- (int)getNetType;
- (id)getAppSessionId;
- (int)getAppEnterScene;
- (BOOL)isPlaying;
- (id)getPlayingTask;
- (void)didReceiveWillEnterForegroundNotification;
- (void)didReceiveDidEnterBackgroundNotification;
- (void)updateAudioSessionRoute:(id)arg1;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)onCarPlayConnected;
- (void)onCarPlayDisconnected;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onAction:(id)arg1;
- (void)onAction:(int)arg1 context:(id)arg2;
- (void)onAction:(int)arg1 scene:(int)arg2 fill:(id /* block */)arg3;
- (void)onAction:(int)arg1 scene:(int)arg2 tingItem:(id)arg3 categoryItem:(id)arg4 fill:(id /* block */)arg5;
- (void)reportNow;
- (void)onPageAppear:(int)arg1 fill:(id /* block */)arg2;
- (void)onPageDisappear:(int)arg1 fill:(id /* block */)arg2;
- (void)onExposedWithItem:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 fill:(id /* block */)arg5;
- (void)onExposedWithCategory:(id)arg1 scene:(int)arg2 index:(int)arg3 fill:(id /* block */)arg4;
- (void)onExposedWithLine:(id)arg1 item:(id)arg2 scene:(int)arg3;
- (void)onClickWithItemPlayButton:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 play:(BOOL)arg5 fill:(id /* block */)arg6;
- (void)onClickWithItem:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 fill:(id /* block */)arg5;
- (void)onClickWithCategory:(id)arg1 scene:(int)arg2 index:(int)arg3 fill:(id /* block */)arg4;
- (void)onClickWithLine:(id)arg1 item:(id)arg2 scene:(int)arg3;
- (void)updateTingPlayerSessionId:(id)arg1;
- (void)tryUpdateCurrentSessionId;
- (void)keepCurrentPlayerSessionId;
- (void)markTimeTaskStop;
- (void)onPlayerAction:(int)arg1 context:(id)arg2;
- (void)markMinimizeCloseButtonClicked;
- (void)markPlayCenterClear;
- (void)markAudioModuleInterrupted;
- (void)markAudioModulePausePlay;
- (void)markAudioModuleResume;
- (void)markCurrentPlayerSessionIdWillTerminated;
- (void)markPlayFinishAction:(int)arg1;
- (void)markSessionReport:(id)arg1;
- (void)cancelClearSessionInvoker;
- (void)doClearSession;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (int)audioSessionRoute;
- (void)setAudioSessionRoute:(int)arg1;
- (unsigned int)netType;
- (void)setNetType:(unsigned int)arg1;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end

