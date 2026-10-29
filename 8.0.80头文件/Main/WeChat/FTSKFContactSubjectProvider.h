@interface FTSKFContactSubjectProvider : NSObject <IFTSKFContactLocalSearchExt, FTSFeatureSubjectProvider>
{
    NSString * _homeQuery; // +0x8
    NSArray * _homeContacts; // +0x10
    NSDictionary * _homeMatchTipDic; // +0x18
    NSString * _detailQuery; // +0x20
    NSArray * _detailContacts; // +0x28
    NSDictionary * _detailMatchTipDic; // +0x30
    NSLock * _snapshotLock; // +0x38
    NSMutableDictionary * _featureIDToUserName; // +0x40
    BOOL _hasScannedAllItems; // +0x48
    NSLock * _cacheLock; // +0x50
    NSString * _lastTriggeredDetailQuery; // +0x58
}
- (id)init;
- (void)dealloc;
- (unsigned long long)subjectKind;
- (BOOL)isEnabled;
- (id)searchSubjectsForQuery:(id)arg1 dicMatchTip:(id)arg2;
- (id)featureItemForFeatureID:(unsigned int)arg1;
- (void)onFTSKFContactSearchResultChanged;
- (void)onFTSKFContactSearchResultChangedForDetail;
- (void)triggerFeatureRefreshIfNeeded:(id)arg1;
- (void)triggerDetailSearchForQuery:(id)arg1;
- (id)buildFeatureItemFromContact:(id)arg1 featureID:(unsigned int)arg2;
- (id)cloneMatchTip:(id)arg1 queryText:(id)arg2 featureID:(unsigned int)arg3 fallbackTitle:(id)arg4;
- (id)scanAndBackfillCacheForFeatureID:(unsigned int)arg1;
- (BOOL)acceptsContact:(id)arg1;
- (void).cxx_destruct;
@end
