@interface FTSWeShopSubjectProvider : NSObject <IFTSWeShopExt, IEcsWeShopExt, FTSFeatureSubjectProvider>
{
    NSString * _homeQuery; // +0x8
    NSArray * _homeItems; // +0x10
    NSString * _detailQuery; // +0x18
    NSArray * _detailItems; // +0x20
    NSLock * _snapshotLock; // +0x28
    NSMutableDictionary * _featureIDToShopAppId; // +0x30
    BOOL _hasScannedAllItems; // +0x38
    NSLock * _cacheLock; // +0x40
    NSString * _lastTriggeredDetailQuery; // +0x48
}
- (id)init;
- (void)dealloc;
- (unsigned long long)subjectKind;
- (BOOL)isEnabled;
- (id)searchSubjectsForQuery:(id)arg1 dicMatchTip:(id)arg2;
- (id)featureItemForFeatureID:(unsigned int)arg1;
- (void)onFTSWeShopSearchResultChanged:(id)arg1;
- (void)onFTSWeShopDetailSearchResultChanged:(id)arg1;
- (void)onWeShopLocalDataUpdate;
- (void)triggerFeatureRefreshIfNeeded:(id)arg1;
- (void)triggerDetailSearchForQuery:(id)arg1;
- (id)buildFeatureItemFromWeShopItem:(id)arg1 featureID:(unsigned int)arg2;
- (id)scanAndBackfillCacheForFeatureID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
