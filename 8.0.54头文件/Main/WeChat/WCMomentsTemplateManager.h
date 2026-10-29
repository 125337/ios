@interface WCMomentsTemplateManager : MMUserService <MMServiceProtocol>
{
    BOOL _isCheckingUpdatesForDefaulteTemplates; // +0x8
    NSMutableSet * _preloadingTemplateIDs; // +0x10
    MJVideoTemplate * _defaultTemplate; // +0x18
    double _lastTimeThatUpdatesDefaulteTemplates; // +0x20
}
- (id)init;
- (void)checkUpdatesForDefaultTemplates;
- (void)loadDefaultTemplate;
- (void)updateDefaultTemplate:(id)arg1;
- (id)preloadingTemplateIDs;
- (void)preloadTemplateInfoIfNeededWithID:(id)arg1 scene:(unsigned long long)arg2;
- (id)recommendedExportSettings;
- (BOOL)canMakeSameMiaoJianTemplateForMomentsTemplateInfo:(id)arg1;
- (id)MMKVKeyForRegularGuide:(long long)arg1;
- (BOOL)shouldShowRegularGuide:(long long)arg1;
- (void)didAcceptRegularGuide:(long long)arg1;
- (void)removeRegularGuidRecord:(long long)arg1;
- (void)removeRegularGuidRecords;
- (void)_clearDeprecatedData;
- (id)defaultTemplate;
- (void)setDefaultTemplate:(id)arg1;
- (BOOL)isCheckingUpdatesForDefaulteTemplates;
- (void)setIsCheckingUpdatesForDefaulteTemplates:(BOOL)arg1;
- (double)lastTimeThatUpdatesDefaulteTemplates;
- (void)setLastTimeThatUpdatesDefaulteTemplates:(double)arg1;
- (void).cxx_destruct;
@end

