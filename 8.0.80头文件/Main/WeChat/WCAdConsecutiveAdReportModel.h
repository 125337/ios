@interface WCAdConsecutiveAdReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned long long _totalCount; // +0x8
    NSArray * _reportItemList; // +0x10
}
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (id)reportItemList;
- (void)setReportItemList:(id)arg1;
- (void).cxx_destruct;
@end
