@interface FTSSettingSubjectProvider : NSObject <FTSFeatureSubjectProvider>
{
    NSMutableDictionary * _featureIDToItemKey; // +0x8
    BOOL _hasScannedAllIdentifiers; // +0x10
    NSLock * _cacheLock; // +0x18
}
- (id)init;
- (unsigned long long)subjectKind;
- (BOOL)isEnabled;
- (id)searchSubjectsForQuery:(id)arg1 dicMatchTip:(id)arg2;
- (id)featureItemForFeatureID:(unsigned int)arg1;
- (id)scanAndBackfillCacheForFeatureID:(unsigned int)arg1;
- (id)buildFeatureItemFromSettingItem:(id)arg1 featureID:(unsigned int)arg2;
- (void).cxx_destruct;
@end
