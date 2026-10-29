@interface MMTheme : NSObject <MCssParserDelegate>
{
    NSString * m_tid; // +0x8
    NSString * m_name; // +0x10
    NSString * m_icon; // +0x18
    NSString * m_version; // +0x20
    NSString * m_author; // +0x28
    NSString * m_discription; // +0x30
    NSString * m_website; // +0x38
    NSString * m_basePath; // +0x40
    long long m_totalSize; // +0x48
    long long m_finishedSize; // +0x50
    long long m_themeType; // +0x58
    BOOL m_isAlreadyParsed; // +0x60
    BOOL m_isParseOK; // +0x61
}
+ (id)themeFromPath:(id)arg1;
+ (id)defaultTheme;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPaths;
- (id)description;
- (id)initWithBasePath:(id)arg1;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (id)onNextCssFile;
- (void)onCssParseStart;
- (void)onCssParseEnd;
- (BOOL)startParse;
- (BOOL)isDefaultTheme;
- (void)setAsDefaultTheme;
- (id)pathForResource:(id)arg1;
- (id)pathForLocalizedResource:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)discription;
- (void)setDiscription:(id)arg1;
- (id)website;
- (void)setWebsite:(id)arg1;
- (id)basePath;
- (void)setBasePath:(id)arg1;
- (long long)totalSize;
- (void)setTotalSize:(long long)arg1;
- (long long)finishedSize;
- (void)setFinishedSize:(long long)arg1;
- (long long)themeType;
- (void)setThemeType:(long long)arg1;
- (void).cxx_destruct;
@end

