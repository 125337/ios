@interface WCHotwordRegExpReplacer : NSObject
{
    NSDictionary * _replacements; // +0x8
    NSString * _regExpPattern; // +0x10
    unsigned long long _matchingMaxLength; // +0x18
}
- (id)initWithReplacements:(id)arg1 matchingMaxLength:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)regExpPatternWithReplacements:(id)arg1;
- (id)replacedContentForContent:(id)arg1;
- (id)replacements;
- (void)setReplacements:(id)arg1;
- (id)regExpPattern;
- (void)setRegExpPattern:(id)arg1;
- (unsigned long long)matchingMaxLength;
- (void)setMatchingMaxLength:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
