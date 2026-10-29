@interface SolitaireRegexUtils : NSObject
{
    NSRecursiveLock * _lock; // +0x8
    NSRecursiveLock * _regexLock; // +0x10
    NSMutableDictionary * _dicRegex; // +0x18
}
+ (id)shareInstance;
- (id)init;
- (id)getRegexLock;
- (id)getRegularExpressionWithRegex:(id)arg1;
- (BOOL)isMatchContent:(id)arg1 Regex:(id)arg2;
- (id)firstMatchContent:(id)arg1 Regex:(id)arg2;
- (_NSRange)rangeMatchContent:(id)arg1 Regex:(id)arg2;
- (id)replaceContent:(id)arg1 OccurrencesOfRegex:(id)arg2 withString:(id)arg3;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)regexLock;
- (void)setRegexLock:(id)arg1;
- (id)dicRegex;
- (void)setDicRegex:(id)arg1;
- (void).cxx_destruct;
@end
