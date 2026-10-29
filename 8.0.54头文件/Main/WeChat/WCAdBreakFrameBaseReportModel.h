@interface WCAdBreakFrameBaseReportModel : WCAdChannelReportExtendInfoModel
{
    int _videoCompositeType; // +0x8
    double _videoDuration; // +0x10
    double _clickAreaStartTime; // +0x18
    double _videoPlayTotalTime; // +0x20
}
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (double)clickAreaStartTime;
- (void)setClickAreaStartTime:(double)arg1;
- (double)videoPlayTotalTime;
- (void)setVideoPlayTotalTime:(double)arg1;
- (int)videoCompositeType;
- (void)setVideoCompositeType:(int)arg1;
@end

