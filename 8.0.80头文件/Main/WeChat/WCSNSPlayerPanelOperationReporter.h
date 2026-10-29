@interface WCSNSPlayerPanelOperationReporter : NSObject
{
    long long _speedupClickPV; // +0x8
    long long _progressBarDragPV; // +0x10
    long long _playClickPV; // +0x18
    long long _pauseClickPV; // +0x20
    long long _collapseClickPV; // +0x28
    long long _expandClickPV; // +0x30
    long long _clkShowPanlePV; // +0x38
    long long _clkHidePanlePV; // +0x40
    long long _snsPlayerProgressType; // +0x48
    long long _snsScene; // +0x50
    NSString * _snsFeedId; // +0x58
    NSString * _snsSessionId; // +0x60
    NSString * _snsVideoURL; // +0x68
}
- (void)doReport;
- (long long)speedupClickPV;
- (void)setSpeedupClickPV:(long long)arg1;
- (long long)progressBarDragPV;
- (void)setProgressBarDragPV:(long long)arg1;
- (long long)playClickPV;
- (void)setPlayClickPV:(long long)arg1;
- (long long)pauseClickPV;
- (void)setPauseClickPV:(long long)arg1;
- (long long)collapseClickPV;
- (void)setCollapseClickPV:(long long)arg1;
- (long long)expandClickPV;
- (void)setExpandClickPV:(long long)arg1;
- (long long)clkShowPanlePV;
- (void)setClkShowPanlePV:(long long)arg1;
- (long long)clkHidePanlePV;
- (void)setClkHidePanlePV:(long long)arg1;
- (long long)snsPlayerProgressType;
- (void)setSnsPlayerProgressType:(long long)arg1;
- (long long)snsScene;
- (void)setSnsScene:(long long)arg1;
- (id)snsFeedId;
- (void)setSnsFeedId:(id)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (id)snsVideoURL;
- (void)setSnsVideoURL:(id)arg1;
- (void).cxx_destruct;
@end
