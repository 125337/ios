@interface MMRuleSetList : NSObject <MCssParserDelegate>
{
    NSMutableDictionary * m_ruleSets; // +0x8
    BOOL m_isAlreadyParsed; // +0x10
    BOOL m_isParseOK; // +0x11
    BOOL m_isParseError; // +0x12
    NSString * m_styleSheetFilePath; // +0x18
}
- (void)setRuleSet:(id)arg1 forKey:(id)arg2;
- (void)removeRuleSetForKey:(id)arg1;
- (id)getRuleSetForSeletor:(id)arg1;
- (id)getValueOfProperty:(id)arg1 forSeletor:(id)arg2;
- (void)addOrMergeRuleSet:(id)arg1 forSelector:(id)arg2;
- (id)init;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (id)onNextCssFile;
- (void)onCssParseStart;
- (void)onCssParseEnd;
- (BOOL)startParse;
- (BOOL)loadRuleSetsFromPath:(id)arg1;
- (void)clearAllRuleSets;
- (id)styleSheetFilePath;
- (void)setStyleSheetFilePath:(id)arg1;
- (id)ruleSets;
- (void)setRuleSets:(id)arg1;
- (void).cxx_destruct;
@end
