@interface BTVideoItemCellAutoPlayReportData : MMObject
{
    NSString * _mpUrl; // +0x8
    NSString * _vid; // +0x10
    unsigned long long _absolutePosition; // +0x18
    unsigned long long _playDuration; // +0x20
    unsigned long long _videoDuration; // +0x28
}
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (unsigned long long)absolutePosition;
- (void)setAbsolutePosition:(unsigned long long)arg1;
- (unsigned long long)playDuration;
- (void)setPlayDuration:(unsigned long long)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

