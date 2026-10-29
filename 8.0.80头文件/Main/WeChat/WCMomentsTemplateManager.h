@interface WCMomentsTemplateManager : MMUserService <MMServiceProtocol>
{
    BOOL _isCheckingUpdatesForDefaulteFinderTemplates; // +0x8
    BOOL _isCheckingUpdatesForDefaulteMomentsTemplates; // +0x9
    NSMutableSet * _preloadingTemplateIDs; // +0x10
    MJVideoTemplate * _defaultFinderTemplate; // +0x18
    MJVideoTemplate * _defaultMomentsTemplate; // +0x20
    double _lastTimeThatUpdatesDefaulteFinderTemplates; // +0x28
    double _lastTimeThatUpdatesDefaulteMomentsTemplates; // +0x30
}
- (id)init;
- (void)checkUpdatesForDefaultTemplatesForMoments;
- (void)checkUpdatesForDefaultTemplatesForFinder;
- (void)loadMomentsDefaultTemplate;
- (void)loadFinderDefaultTemplate;
- (void)updateMomentsTemplate:(id)arg1 MMKVKey:(id)arg2;
- (void)updateFinderTemplate:(id)arg1;
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
- (id)defaultFinderTemplate;
- (void)setDefaultFinderTemplate:(id)arg1;
- (id)defaultMomentsTemplate;
- (void)setDefaultMomentsTemplate:(id)arg1;
- (BOOL)isCheckingUpdatesForDefaulteFinderTemplates;
- (void)setIsCheckingUpdatesForDefaulteFinderTemplates:(BOOL)arg1;
- (double)lastTimeThatUpdatesDefaulteFinderTemplates;
- (void)setLastTimeThatUpdatesDefaulteFinderTemplates:(double)arg1;
- (BOOL)isCheckingUpdatesForDefaulteMomentsTemplates;
- (void)setIsCheckingUpdatesForDefaulteMomentsTemplates:(BOOL)arg1;
- (double)lastTimeThatUpdatesDefaulteMomentsTemplates;
- (void)setLastTimeThatUpdatesDefaulteMomentsTemplates:(double)arg1;
- (void).cxx_destruct;
@end
