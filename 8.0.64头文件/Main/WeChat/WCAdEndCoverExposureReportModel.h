@interface WCAdEndCoverExposureReportModel : WCAdChannelReportExtendInfoModel
{
    int _type; // +0x8
    unsigned long long _startTimestamp; // +0x10
    unsigned long long _exposureDuration; // +0x18
}
- (int)type;
- (void)setType:(int)arg1;
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (unsigned long long)exposureDuration;
- (void)setExposureDuration:(unsigned long long)arg1;
@end
