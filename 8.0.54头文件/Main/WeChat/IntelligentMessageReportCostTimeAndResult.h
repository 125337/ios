@interface IntelligentMessageReportCostTimeAndResult : MMObject
{
    BOOL _m_isSearchStartHadPriorityBuildIndex; // +0x8
    BOOL _m_isHadReportSearchResult; // +0x9
    NSString * _m_searchSessionId; // +0x10
    NSString * _m_searchText; // +0x18
    unsigned long long _m_searchStartTime; // +0x20
    unsigned long long _m_searchEndTime; // +0x28
}
- (id)m_searchSessionId;
- (void)setM_searchSessionId:(id)arg1;
- (id)m_searchText;
- (void)setM_searchText:(id)arg1;
- (unsigned long long)m_searchStartTime;
- (void)setM_searchStartTime:(unsigned long long)arg1;
- (unsigned long long)m_searchEndTime;
- (void)setM_searchEndTime:(unsigned long long)arg1;
- (BOOL)m_isSearchStartHadPriorityBuildIndex;
- (void)setM_isSearchStartHadPriorityBuildIndex:(BOOL)arg1;
- (BOOL)m_isHadReportSearchResult;
- (void)setM_isHadReportSearchResult:(BOOL)arg1;
- (void).cxx_destruct;
@end

