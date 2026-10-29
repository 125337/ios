@interface WCAdBreakFrameNormalReportModel : WCAdBreakFrameBaseReportModel
{
    unsigned int _videoPlayCount; // +0x28
    double _loopStartTime; // +0x30
    double _loopEndTime; // +0x38
}
- (double)loopStartTime;
- (void)setLoopStartTime:(double)arg1;
- (double)loopEndTime;
- (void)setLoopEndTime:(double)arg1;
- (unsigned int)videoPlayCount;
- (void)setVideoPlayCount:(unsigned int)arg1;
@end

