@interface RegexMatcher : NSObject
{
    BOOL _overLimited; // +0x8
    NSMutableArray * _regexNotGreedArray; // +0x10
    NSMutableArray * _regexGreedArray; // +0x18
    NSMutableCharacterSet * _identifierSet; // +0x20
}
- (id)init;
- (id)regexNotGreedArray;
- (id)regexGreedArray;
- (id)extractWord:(id)arg1;
- (id)extractWord:(id)arg1 level:(int)arg2;
- (BOOL)isLegalWord:(id)arg1;
- (void)setRegexNotGreedArray:(id)arg1;
- (void)setRegexGreedArray:(id)arg1;
- (id)identifierSet;
- (void)setIdentifierSet:(id)arg1;
- (BOOL)overLimited;
- (void)setOverLimited:(BOOL)arg1;
- (void).cxx_destruct;
@end

