@interface WCAdFullCardBreakFrameSightView : WCTimeLineAdFullCardSightView
{
    BOOL _intentToPlay; // +0x9
    WCAdBreakFrameView * _adBreakFrameView; // +0x10
    double _fullCardVideoDownloadProgress; // +0x18
    double _breakFrameVideoDownloadProgress; // +0x20
}
- (void)customPlayerInfo:(id)arg1;
- (unsigned long long)fetchPlayModeIfVideoNotExist;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onPlayerPausePlay:(id)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onCanvasViewDidBePushed;
- (BOOL)isBreakFrameAd;
- (BOOL)isAllVideoDataAvailable;
- (BOOL)matchFullCardVideoWithMediaId:(id)arg1;
- (BOOL)matchBreakFrameVideoWithMediaId:(id)arg1;
- (void)updateControlViewDownloadProgress;
- (id)adBreakFrameView;
- (void)setAdBreakFrameView:(id)arg1;
- (BOOL)intentToPlay;
- (void)setIntentToPlay:(BOOL)arg1;
- (double)fullCardVideoDownloadProgress;
- (void)setFullCardVideoDownloadProgress:(double)arg1;
- (double)breakFrameVideoDownloadProgress;
- (void)setBreakFrameVideoDownloadProgress:(double)arg1;
- (void).cxx_destruct;
@end
