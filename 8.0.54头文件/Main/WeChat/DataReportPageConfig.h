@interface DataReportPageConfig : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * m_pageConfigModels; // +0x8
    NSMutableArray * m_filterPages; // +0x10
    NSMutableDictionary * m_needReplenishPages; // +0x18
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getPageConfigModel:(id)arg1;
- (void)parseReplenishConfig;
- (void)parseFilterConfig;
- (void)parsePageConfig;
- (void)pullCloudConfig;
- (BOOL)isFilterPage:(id)arg1;
- (BOOL)isNeedReplenishPage:(id)arg1 withCurPage:(id)arg2;
- (BOOL)isFinderOrNearbyTabSubPages:(id)arg1;
- (void).cxx_destruct;
@end

