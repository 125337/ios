@interface WCAdFinderFollowResultModel : WCAdChannelReportExtendInfoModel
{
    int _source; // +0x8
    NSString * _finderUsername; // +0x10
    long long _result; // +0x18
}
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (long long)result;
- (void)setResult:(long long)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (void).cxx_destruct;
@end

