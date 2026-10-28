@interface MMColor : NSObject <MCssParserDelegate>
{
    NSMutableDictionary * m_colorDictionary; // +0x8
    NSRecursiveLock * m_lock; // +0x10
    BOOL m_isAlreadyParsed; // +0x18
    BOOL m_isParseOK; // +0x19
    NSString * m_colorCssPath; // +0x20
}
- (id)init;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (id)onNextCssFile;
- (void)onCssParseStart;
- (void)onCssParseEnd;
- (BOOL)startParse;
- (id)getColorByName:(id)arg1;
- (id)getColorByName:(id)arg1 withAlpha:(double)arg2;
- (BOOL)loadColorFromPath:(id)arg1;
- (void).cxx_destruct;
@end
