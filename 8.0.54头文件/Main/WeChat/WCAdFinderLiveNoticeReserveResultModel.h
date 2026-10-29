@interface WCAdFinderLiveNoticeReserveResultModel : WCAdChannelReportExtendInfoModel
{
    int _source; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _finderLiveNoticeId; // +0x18
    long long _result; // +0x20
}
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderLiveNoticeId;
- (void)setFinderLiveNoticeId:(id)arg1;
- (long long)result;
- (void)setResult:(long long)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (void).cxx_destruct;
@end

