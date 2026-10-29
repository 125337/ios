@interface MsgSearchHelperReportCostTimeAndResult : MsgSearchHelperReport
{
    BOOL _isSearchStartHadPriorityBuildIndex; // +0x58
    BOOL _isHadReportSearchResult; // +0x59
    unsigned long long _searchStartTime; // +0x60
    unsigned long long _searchEndTime; // +0x68
}
- (void)copyFromOtherObject:(id)arg1;
- (unsigned long long)searchStartTime;
- (void)setSearchStartTime:(unsigned long long)arg1;
- (unsigned long long)searchEndTime;
- (void)setSearchEndTime:(unsigned long long)arg1;
- (BOOL)isSearchStartHadPriorityBuildIndex;
- (void)setIsSearchStartHadPriorityBuildIndex:(BOOL)arg1;
- (BOOL)isHadReportSearchResult;
- (void)setIsHadReportSearchResult:(BOOL)arg1;
@end

