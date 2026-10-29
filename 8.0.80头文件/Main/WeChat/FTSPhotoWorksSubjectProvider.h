@interface FTSPhotoWorksSubjectProvider : NSObject <FTSFeatureSubjectProvider>
{
    FTSFeatureItem * _item; // +0x8
    NSLock * _lock; // +0x10
}
- (id)init;
- (unsigned long long)subjectKind;
- (BOOL)isEnabled;
- (id)searchSubjectsForQuery:(id)arg1 dicMatchTip:(id)arg2;
- (void)onSubjectLanguageChange;
- (id)featureItemForFeatureID:(unsigned int)arg1;
- (void)rebuildItem;
- (void).cxx_destruct;
@end
