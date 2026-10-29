@interface TingPlayerAdvertisement : NSObject
{
    BOOL _preloadDone; // +0x8
    int _uiScene; // +0xc
    id /* block */ _completeHandler; // +0x10
    id /* block */ _preloadFinishHandler; // +0x18
    MMUIViewController * _displayViewController; // +0x20
    WAAppTaskHandlerWrapper * _handlerWrapper; // +0x28
    MMListenMembershipJoinInfo_AdSchemeInfo * _adInfo; // +0x30
    NSString * _sessionId; // +0x38
    MMTimer * _timer; // +0x40
}
- (id)initWithADInfo:(id)arg1;
- (id)appid;
- (void)startSession;
- (void)closeSession;
- (void)startTimer;
- (void)stopTimer;
- (void)onTimerCheck:(id)arg1;
- (BOOL)isAdActive;
- (id)openInfo;
- (void)preload;
- (void)commReport:(unsigned int)arg1;
- (void)commReport:(unsigned int)arg1 extraData:(id)arg2;
- (void)show;
- (void)show:(id /* block */)arg1;
- (void)handleAdvertisementClosed:(id)arg1;
- (void)handleBizDataPipeHandler:(id)arg1;
- (void)handlePreloadAdLoadDone:(unsigned long long)arg1 preloadSuccess:(BOOL)arg2;
- (id)handlerWrapper;
- (id /* block */)completeHandler;
- (void)setCompleteHandler:(id /* block */)arg1;
- (id /* block */)preloadFinishHandler;
- (void)setPreloadFinishHandler:(id /* block */)arg1;
- (int)uiScene;
- (void)setUiScene:(int)arg1;
- (id)displayViewController;
- (void)setDisplayViewController:(id)arg1;
- (void)setHandlerWrapper:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)preloadDone;
- (void)setPreloadDone:(BOOL)arg1;
- (void).cxx_destruct;
@end
