@interface AmoebaPageConfig : NSObject
{
    NSMutableArray * m_filterPages; // +0x8
    NSMutableArray * m_mainPages; // +0x10
    NSMutableArray * m_splashPages; // +0x18
    NSMutableDictionary * m_pageConfigModels; // +0x20
    NSMutableDictionary * m_needReplenishPages; // +0x28
}
+ (id)shareInstance;
- (id)init;
- (void)onAccountInit;
- (void)onAccountClearData;
- (void)parseReplenishConfig;
- (void)parseFilterConfig;
- (void)parseLocalConfig;
- (void)parseCloudConfig;
- (void)pullCloudConfig;
- (id)getFilterPages;
- (void)setFilterPages:(id)arg1;
- (BOOL)isFilterPage:(id)arg1;
- (void)setPageConfigs:(id)arg1;
- (id)getPageConfigModel:(id)arg1;
- (id)getMainPages;
- (void)setMainPages:(id)arg1;
- (BOOL)isMainPage:(id)arg1;
- (id)getSplashPages;
- (void)setSplashPages:(id)arg1;
- (BOOL)isSplashPage:(id)arg1;
- (BOOL)isNeedReplenishPage:(id)arg1 withCurPage:(id)arg2;
- (BOOL)isFinderOrNearbyTabSubPages:(id)arg1;
- (id)arrayForKey:(id)arg1 dic:(id)arg2;
- (id)dictionaryAtIndex:(unsigned long long)arg1 array:(id)arg2;
- (long long)int64ForKey:(id)arg1 dic:(id)arg2;
- (id)stringAtIndex:(unsigned long long)arg1 array:(id)arg2;
- (void).cxx_destruct;
@end
