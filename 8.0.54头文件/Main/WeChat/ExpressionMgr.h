@interface ExpressionMgr : MMUserService <MMEmoticonResExt, DSMMatcherDelegate, MMServiceProtocol, IMMLanguageMgrExt>
{
    NSString * m_nsTotalEmoticonRegex; // +0x8
    NSArray * m_qqEmojiKeyList; // +0x10
    NSArray * m_emojiCodes; // +0x18
    NSArray * m_emojiDescription; // +0x20
    NSDictionary * m_emojiDescDic; // +0x28
    NSDictionary * m_expressionWrapDic; // +0x30
    NSDictionary * m_descToExpressionWrapDic; // +0x38
    NSString * m_newEmojiConfigDirPath; // +0x40
    NSString * m_emojiPanelConfiDirPath; // +0x48
    NSArray * m_recentUseKeyArray; // +0x50
    NSString * m_recentUseDataPath; // +0x58
    NSArray * m_systemEmojiCategoriesNames; // +0x60
    NSMutableDictionary * m_systemEmojiCategoriesDict; // +0x68
    AnimateEmojiConfig * _animateEmojiConfig; // +0x70
    NSString * _animateEmojiResDir; // +0x78
    DSMMatcher * _expressionMatcher; // +0x80
}
- (id)init;
- (void)loadExpression;
- (void)configEmoticonRegexWithNewExpressionRegexString:(id)arg1;
- (id)emoticonRegexForNewExpressionCongifWithWrapDic:(id)arg1 descToWrapDic:(id)arg2;
- (void)loadQQEmojiKeyListConfig;
- (id)valueForKey:(const char *)arg1 inNode:(XmlReaderNode_t *)arg2;
- (void)loadQQEmojiKeyList;
- (void)loadSystemEmojiKeyList;
- (void)onServiceMemoryWarning;
- (id)getImageByExpression:(id)arg1;
- (BOOL)isExpression:(id)arg1;
- (BOOL)loadQQEmotionImageByExpression:(id)arg1 isSync:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)getEmojiBoardKeyList;
- (id)getAllSystemEmojiBoardPageList;
- (id)getSystemEmojiBoardKeyList:(id)arg1;
- (id)getDescStrByExpression:(id)arg1;
- (_NSRange)rangeOfEmoticon:(id)arg1 inRange:(_NSRange)arg2;
- (unsigned int)countOfEmoji:(id)arg1;
- (id)getDescStrByEmoji:(id)arg1;
- (void)onLanguageChange;
- (id)getEmojiDescriptionAtIndex:(unsigned long long)arg1;
- (id)getRecentUseKeyArray;
- (id)rejectInvalidRecentUseKey:(id)arg1;
- (void)sendEmojiWithKey:(id)arg1 addAsRecentUse:(BOOL *)arg2;
- (id)getExpressionMatcherModelPath;
- (void)enumerateItemUsingBlock:(id /* block */)arg1;
- (void)onMatchModelErrorHappend;
- (void)buildExpressionSearchModel;
- (id)fastExtractExpressions:(id)arg1;
- (id)fastExtractFirstExpressions:(id)arg1;
- (BOOL)isContainExpressions:(id)arg1;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (id)getExpressionSymbolArray;
- (void)reloadAnimateEmojiConfig;
- (BOOL)isAnimateEmoji:(id)arg1;
- (id)getAnimateEmojiByExpression:(id)arg1;
- (unsigned long long)getEmojiAnimVersion;
- (id)getExpressionWrap:(id)arg1 loadImageIfNeeded:(BOOL)arg2;
- (id)getEmoticonRegex;
- (id)animateEmojiConfig;
- (void)setAnimateEmojiConfig:(id)arg1;
- (id)animateEmojiResDir;
- (void)setAnimateEmojiResDir:(id)arg1;
- (id)expressionMatcher;
- (void)setExpressionMatcher:(id)arg1;
- (void).cxx_destruct;
@end

