@interface GHCodeHighlightRule : NSObject
{
    NSRegularExpression * _regex; // +0x8
    long long _tokenType; // +0x10
    long long _captureGroup; // +0x18
    NSRegularExpression * _interpRegex; // +0x20
    long long _interpType; // +0x28
}
+ (id)ruleWithPattern:(id)arg1 tokenType:(long long)arg2;
+ (id)ruleWithPattern:(id)arg1 tokenType:(long long)arg2 captureGroup:(long long)arg3;
+ (id)ruleWithPattern:(id)arg1 tokenType:(long long)arg2 interpPattern:(id)arg3 interpType:(long long)arg4;
+ (id)rulesForCanonicalName:(id)arg1;
- (id)regex;
- (void)setRegex:(id)arg1;
- (long long)tokenType;
- (void)setTokenType:(long long)arg1;
- (long long)captureGroup;
- (void)setCaptureGroup:(long long)arg1;
- (id)interpRegex;
- (void)setInterpRegex:(id)arg1;
- (long long)interpType;
- (void)setInterpType:(long long)arg1;
- (void).cxx_destruct;
@end
