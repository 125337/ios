@interface FingertipSearchMgr : MMUserService <MMResourceMgrExt, IFunctionMsgExt, DSMMatcherDelegate, MMServiceProtocol>
{
    ExpressMatcher * _expressMatcher; // +0x8
    RegexMatcher * _regexMatcher; // +0x10
    NSHashTable * _weakVCHashTable; // +0x18
    DSMMatcher * _dsm; // +0x20
    FSDSMModelPreparer * _dsmPreparer; // +0x28
}
- (void)onServiceInit;
- (void)changeResourceloadPath;
- (id)extractKeywordsWithContent:(id)arg1 version:(id *)arg2;
- (id)processContent:(id)arg1 pattern:(id)arg2;
- (BOOL)hitBlacklist:(id)arg1 blackPatternList:(id)arg2;
- (id)getRegexConfigResult:(id)arg1 config:(id)arg2;
- (id)getExpressResult:(id)arg1;
- (id)getRegexSearchResult:(id)arg1;
- (id)getKeywordsResult:(id)arg1;
- (unsigned long long)preGetDSMCacheSize;
- (long long)cleanDSMCache;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onFunctionMsgResponse:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (void)onMatchModelErrorHappend;
- (id)expressMatcher;
- (void)setExpressMatcher:(id)arg1;
- (id)regexMatcher;
- (void)setRegexMatcher:(id)arg1;
- (id)weakVCHashTable;
- (void)setWeakVCHashTable:(id)arg1;
- (id)dsm;
- (void)setDsm:(id)arg1;
- (id)dsmPreparer;
- (void)setDsmPreparer:(id)arg1;
- (void).cxx_destruct;
@end
