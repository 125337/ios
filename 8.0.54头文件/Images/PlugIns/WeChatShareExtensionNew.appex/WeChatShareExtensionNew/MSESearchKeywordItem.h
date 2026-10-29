@interface MSESearchKeywordItem : NSObject
{
    NSString * _keyword; // +0x8
    NSString * _regexword; // +0x10
    BOOL _regextMode; // +0x18
    BOOL _isEnglishWord; // +0x19
    BOOL _regexMode; // +0x1a
}
- (id)init;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)regexword;
- (void)setRegexword:(id)arg1;
- (BOOL)regexMode;
- (void)setRegexMode:(BOOL)arg1;
- (BOOL)isEnglishWord;
- (void)setIsEnglishWord:(BOOL)arg1;
- (void).cxx_destruct;
@end

