@interface SettingSearchMgr : MMUserService <IMMLanguageMgrExt, MMServiceProtocol>
{
    SettingIndexNode * _settingIndexRoot; // +0x8
}
- (void)onServiceInit;
- (id)searchWithKeyword:(id)arg1;
- (id)searchByIdentifier:(id)arg1;
- (id)allItemIdentifiers;
- (void)onClickWithSearchResult:(id)arg1 fromViewController:(id)arg2;
- (void)buildIndexIfNeeded;
- (id)resultWithIndexNode:(id)arg1;
- (void)onLanguageChange;
- (id)settingIndexRoot;
- (void)setSettingIndexRoot:(id)arg1;
- (void).cxx_destruct;
@end
