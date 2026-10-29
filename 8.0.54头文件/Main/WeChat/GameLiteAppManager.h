@interface GameLiteAppManager : MMUserService <MMServiceProtocol>
{
    BOOL _ignoreGameLiteCheck; // +0x8
    NSMutableDictionary * _dbDataDict; // +0x10
    WCTTable * _dbTable; // +0x18
    GCCommonServer * _server; // +0x20
}
- (id)init;
- (id)liteAppConfigModel:(id)arg1;
- (id)dbModelFromUrlLiteConf:(id)arg1;
- (void)handleLiteConfResponse:(id)arg1;
- (id)getDbModelsForUrl:(id)arg1;
- (id)innerGetLiteAppConfigDbModel:(id)arg1;
- (id)getLiteInfoAndCheckUpateIfNeedWithConfigModel:(id)arg1;
- (id)getLiteInfoAndCheckUpateIfNeedWithAppid:(id)arg1 pkgId:(id)arg2;
- (id)doubleCheckGetLiteAppInfoItemWithPkgId:(id)arg1 liteAppId:(id)arg2;
- (id)queryDictWithEntryScene:(id)arg1 urlStr:(id)arg2;
- (id)getViewControllerWithUrl:(id)arg1;
- (id)gameChatEntryScene;
- (id)getViewControllerWithUrl:(id)arg1 onlyReturnLite:(BOOL)arg2 transParentLiteApp:(BOOL)arg3;
- (id)getLiteAppViewControllerWithAppInfo:(id)arg1 pagePath:(id)arg2 queryJsonStr:(id)arg3 transParentLiteApp:(BOOL)arg4;
- (BOOL)checkPageExists:(id)arg1 inLiteAppInfo:(id)arg2;
- (id)showHalfScreenWebViewWithConfig:(id)arg1 liteAppParam:(id)arg2;
- (void)asyncGetLiteAppControllerCheckTopVc:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)ignoreGameLiteCheck;
- (void)setIgnoreGameLiteCheck:(BOOL)arg1;
- (id)dbDataDict;
- (void)setDbDataDict:(id)arg1;
- (id)dbTable;
- (void)setDbTable:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (void).cxx_destruct;
@end

