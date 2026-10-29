@interface FTSContactSubjectProvider : NSObject <IContactMgrExt, IFTSContactDataProviderExt, FTSFeatureSubjectProvider>
{
    NSMutableArray * _botSearchItems; // +0x8
    NSLock * _lock; // +0x10
}
- (id)init;
- (void)dealloc;
- (unsigned long long)subjectKind;
- (BOOL)isEnabled;
- (id)searchSubjectsForQuery:(id)arg1 dicMatchTip:(id)arg2;
- (void)onSubjectLanguageChange;
- (id)featureItemForFeatureID:(unsigned int)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onContactReload;
- (void)rebuildBotSearchItems;
- (void)upsertContact:(id)arg1;
- (id)featureItemFromContact:(id)arg1;
- (void)refreshFeatureItem:(id)arg1 withContact:(id)arg2;
- (void).cxx_destruct;
@end
