@interface _TtC9WeAppCore12WACDPContext : NSObject
{
    void * sessionId; // +0x8
    NSMutableArray * appIdStack; // +0x18
    UIImage * lastScreenshotImage; // +0x20
    unsigned long long endState; // +0x28
    void * jumpOtherPageVCName; // +0x30
    void * jumpOtherPageTargetVCName; // +0x40
    _TtC9WeAppCore15WACallUserEvent * callUserEvent; // +0x50
    BOOL isPreempted; // +0x58
    void * currentRunningCommand; // +0x60
    void * authCardData; // +0x68
    void * autoAuthData; // +0x70
     waitWebViewDidAppear; // +0x78
     webViewDidAppearHandler; // +0x80
    long long uiStableTimeoutMs; // +0x90
    long long uiStableDebounceMs; // +0x98
    BOOL forbidNavigateToMiniProgram; // +0xa0
    BOOL waitWeAppLaunch; // +0xa1
     weAppLaunchHandler; // +0xa8
     lastNotSimilarityTouchPoint; // +0xb8
    double latitude; // +0xd0
    double longitude; // +0xd8
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)appIdStack;
- (void)setAppIdStack:(id)arg1;
- (id)lastScreenshotImage;
- (void)setLastScreenshotImage:(id)arg1;
- (unsigned long long)endState;
- (void)setEndState:(unsigned long long)arg1;
- (id)jumpOtherPageVCName;
- (void)setJumpOtherPageVCName:(id)arg1;
- (id)jumpOtherPageTargetVCName;
- (void)setJumpOtherPageTargetVCName:(id)arg1;
- (id)callUserEvent;
- (void)setCallUserEvent:(id)arg1;
- (BOOL)isPreempted;
- (void)setIsPreempted:(BOOL)arg1;
- (id)currentRunningCommand;
- (void)setCurrentRunningCommand:(id)arg1;
- (id)authCardData;
- (void)setAuthCardData:(id)arg1;
- (id)autoAuthData;
- (void)setAutoAuthData:(id)arg1;
- (long long)uiStableTimeoutMs;
- (void)setUiStableTimeoutMs:(long long)arg1;
- (long long)uiStableDebounceMs;
- (void)setUiStableDebounceMs:(long long)arg1;
- (BOOL)isUIStableEnabled;
- (BOOL)forbidNavigateToMiniProgram;
- (void)setForbidNavigateToMiniProgram:(BOOL)arg1;
- (BOOL)waitWeAppLaunch;
- (void)setWaitWeAppLaunch:(BOOL)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (void)onWeAppLaunch:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
