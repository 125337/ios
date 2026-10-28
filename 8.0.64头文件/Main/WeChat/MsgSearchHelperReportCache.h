@interface MsgSearchHelperReportCache : MMObject
{
    BOOL _isHadReportSearch; // +0x8
    NSString * _searchSessionId; // +0x10
    NSString * _query; // +0x18
    unsigned long long _buildIndexStartTime; // +0x20
    unsigned long long _buildIndexEndTime; // +0x28
    NSMutableDictionary * _dicReportCostTimeAndResult; // +0x30
}
- (id)getReportCostTimeAndResultWithMsgSearchType:(unsigned int)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned long long)buildIndexStartTime;
- (void)setBuildIndexStartTime:(unsigned long long)arg1;
- (unsigned long long)buildIndexEndTime;
- (void)setBuildIndexEndTime:(unsigned long long)arg1;
- (id)dicReportCostTimeAndResult;
- (void)setDicReportCostTimeAndResult:(id)arg1;
- (BOOL)isHadReportSearch;
- (void)setIsHadReportSearch:(BOOL)arg1;
- (void).cxx_destruct;
@end
