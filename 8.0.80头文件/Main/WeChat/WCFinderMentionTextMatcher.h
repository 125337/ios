@interface WCFinderMentionTextMatcher : NSObject
{
    BOOL _firstMatch; // +0x8
    NSString * _text; // +0x10
    NSArray * _results; // +0x18
    long long _idx; // +0x20
    _NSRange _range; // +0x28
}
- (id)initWithText:(id)arg1 range:(_NSRange)arg2 firstMatch:(BOOL)arg3;
- (void)doTest;
- (_NSRange)nextMatch;
- (BOOL)textTextIsEmailTail:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (BOOL)firstMatch;
- (void)setFirstMatch:(BOOL)arg1;
- (id)results;
- (void)setResults:(id)arg1;
- (long long)idx;
- (void)setIdx:(long long)arg1;
- (void).cxx_destruct;
@end
