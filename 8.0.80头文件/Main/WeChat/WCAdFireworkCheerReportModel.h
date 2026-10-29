@interface WCAdFireworkCheerReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _totalLikeCount; // +0x8
    NSString * _numberRequestId; // +0x10
}
- (id)numberRequestId;
- (void)setNumberRequestId:(id)arg1;
- (unsigned int)totalLikeCount;
- (void)setTotalLikeCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
