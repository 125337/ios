@interface MCssParser : NSObject
{
    id <MCssParserDelegate> m_delegate; // +0x8
    NSRecursiveLock * m_oLock; // +0x10
    NSString * m_currentFile; // +0x18
}
+ (void)initialize;
+ (id)sharedCssParser;
+ (id)allocWithZone:(_NSZone *)arg1;
- (id)init;
- (void)safeCloseCssFile;
- (BOOL)openNextCssFile;
- (void)cleanUpLexer;
- (void)startParseCssFiles;
- (BOOL)onParseNextFile;
- (void)onParseErrorOnLineNumber:(id)arg1 withText:(id)arg2 withErrorMessage:(id)arg3;
- (void)onCssRuleSetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (BOOL)isParsing;
- (void)startWithDelegate:(id)arg1;
- (void).cxx_destruct;
@end

