@interface WCFinderExtStatsLiveNotifyExposeReportModel : WCFinderExtStatsReportBaseModel
{
    unsigned long long _autoPlayDurationMS; // +0x8
    NSString * _noticeID; // +0x10
}
- (id)generateOtherKVsDictionary;
- (unsigned long long)autoPlayDurationMS;
- (void)setAutoPlayDurationMS:(unsigned long long)arg1;
- (id)noticeID;
- (void)setNoticeID:(id)arg1;
- (void).cxx_destruct;
@end

