@interface GCReportBaseVc : GameCenterNativeVc
{
    BOOL _gcReportIsVisible; // +0x68
    BOOL _gcReportIsViewDidAppear; // +0x69
    unsigned long long _sceneId; // +0x70
    unsigned long long _uiareaIdForStayDuration; // +0x78
    double _durationInterval; // +0x80
    double _lastVisibleTime; // +0x88
}
- (id)init;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)reportApplicationWillEnterForeground;
- (void)reportApplicationDidEnterBackground;
- (void)markVisibleBegin;
- (void)markVisibleEnd;
- (void)reportOnVisibleChange:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)commonConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (void)reportStayDuration;
- (void)reportWithUiArea:(unsigned long long)arg1 positionId:(unsigned long long)arg2 op:(unsigned long long)arg3;
- (void)dealloc;
- (unsigned long long)sceneId;
- (void)setSceneId:(unsigned long long)arg1;
- (unsigned long long)uiareaIdForStayDuration;
- (void)setUiareaIdForStayDuration:(unsigned long long)arg1;
- (double)durationInterval;
- (void)setDurationInterval:(double)arg1;
- (double)lastVisibleTime;
- (void)setLastVisibleTime:(double)arg1;
- (BOOL)gcReportIsVisible;
- (void)setGcReportIsVisible:(BOOL)arg1;
- (BOOL)gcReportIsViewDidAppear;
- (void)setGcReportIsViewDidAppear:(BOOL)arg1;
@end

