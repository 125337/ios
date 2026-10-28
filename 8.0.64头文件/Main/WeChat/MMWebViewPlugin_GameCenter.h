@interface MMWebViewPlugin_GameCenter : MMWebViewPluginBase
{
    BOOL _canStartRender; // +0x8
    BOOL _hasCallInitEnd; // +0x9
    BOOL _didIgnoreTerminateReload; // +0xa
    BOOL _isDidCommit; // +0xb
    BOOL _waitLastResponse; // +0xc
    BOOL _hasCallClosed; // +0xd
    BOOL _isGameCenterRelateWebVC; // +0xe
    NSNumber * _needResumeSatusBarNumber; // +0x10
    GameWebDurationReport * _webDurationReport; // +0x18
    GameSkStoreController * _skStoreController; // +0x20
    MMTimer * _deadCheckTimer; // +0x28
    double _lastLiveCheckTime; // +0x30
    NSMutableArray * _timeCheckDiffArray; // +0x38
    NSMutableDictionary * _clientReportDict; // +0x40
    GameWebViewClientReportRecord * _otherPageTimeRecorder; // +0x48
    double _otherPageStartTime; // +0x50
    double _otherPageRecordDuration; // +0x58
}
- (id)init;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleJsCoreEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleDurationReport:(unsigned long long)arg1;
- (void)checkResumeStatusBar;
- (void)handleCloseOrMinimise:(BOOL)arg1 dispatchEvent:(BOOL)arg2;
- (void)stopTimer;
- (void)beginCheckWebViewDead;
- (void)handleEvaluateComplete:(id)arg1 value:(id)arg2 webViewInfo:(id)arg3;
- (void)checkWebViewResponse;
- (BOOL)checkDeadAndReport:(BOOL)arg1;
- (void)notifyEventToGuardManager:(unsigned long long)arg1;
- (BOOL)canStartRender;
- (void)startGameCenterJsCore;
- (void)webviewDidReceiveScriptMessage:(id)arg1 name:(id)arg2;
- (void)gameSenceInjectJavaScript:(id)arg1;
- (id)getPreInjectScript;
- (BOOL)checkVcArray:(id)arg1 containsViewController:(id)arg2;
- (BOOL)checkViewController:(id)arg1 containsViewController:(id)arg2;
- (BOOL)ignoreReloadWhenWebviewTerminate;
- (void)onTabVcPopWebView;
- (void)onDeallocOrPoped;
- (void)onReportOtherPageTime;
- (void)updateWebviewClientReport:(id)arg1;
- (void)updateOtherPageTimeRecorder:(id)arg1;
- (void)checkReport:(BOOL)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)needResumeSatusBarNumber;
- (void)setNeedResumeSatusBarNumber:(id)arg1;
- (id)webDurationReport;
- (void)setWebDurationReport:(id)arg1;
- (id)skStoreController;
- (void)setSkStoreController:(id)arg1;
- (BOOL)didIgnoreTerminateReload;
- (void)setDidIgnoreTerminateReload:(BOOL)arg1;
- (BOOL)isDidCommit;
- (void)setIsDidCommit:(BOOL)arg1;
- (id)deadCheckTimer;
- (void)setDeadCheckTimer:(id)arg1;
- (double)lastLiveCheckTime;
- (void)setLastLiveCheckTime:(double)arg1;
- (BOOL)waitLastResponse;
- (void)setWaitLastResponse:(BOOL)arg1;
- (id)timeCheckDiffArray;
- (void)setTimeCheckDiffArray:(id)arg1;
- (BOOL)hasCallClosed;
- (void)setHasCallClosed:(BOOL)arg1;
- (BOOL)isGameCenterRelateWebVC;
- (void)setIsGameCenterRelateWebVC:(BOOL)arg1;
- (id)clientReportDict;
- (void)setClientReportDict:(id)arg1;
- (id)otherPageTimeRecorder;
- (void)setOtherPageTimeRecorder:(id)arg1;
- (double)otherPageStartTime;
- (void)setOtherPageStartTime:(double)arg1;
- (double)otherPageRecordDuration;
- (void)setOtherPageRecordDuration:(double)arg1;
- (void).cxx_destruct;
@end
