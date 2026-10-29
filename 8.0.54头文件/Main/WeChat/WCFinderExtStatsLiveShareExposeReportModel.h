@interface WCFinderExtStatsLiveShareExposeReportModel : WCFinderExtStatsReportBaseModel
{
    NSDate * _start; // +0x20
    NSDate * _end; // +0x28
    unsigned long long _autoPlayDurationMS; // +0x30
    NSString * _gMsgID; // +0x38
    unsigned long long _exposeScene; // +0x40
}
- (id)generateOtherKVsDictionary;
- (id)start;
- (void)setStart:(id)arg1;
- (id)end;
- (void)setEnd:(id)arg1;
- (unsigned long long)autoPlayDurationMS;
- (void)setAutoPlayDurationMS:(unsigned long long)arg1;
- (id)gMsgID;
- (void)setGMsgID:(id)arg1;
- (unsigned long long)exposeScene;
- (void)setExposeScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

