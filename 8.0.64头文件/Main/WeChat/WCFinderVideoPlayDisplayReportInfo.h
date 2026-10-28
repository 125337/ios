@interface WCFinderVideoPlayDisplayReportInfo : NSObject
{
    BOOL _showBulletAnimating; // +0x8
    NSString * _tid; // +0x10
    WCPlayerPlaybackInfo * _playbackInfo; // +0x18
}
- (id)tid;
- (void)setTid:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (BOOL)showBulletAnimating;
- (void)setShowBulletAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
