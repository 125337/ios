@interface MMFinderLiveGiftCustomizationStandardStrictTextValidator : NSObject <MMFinderLiveGiftCustomizationTextValidating>
{
    NSRegularExpression * _nonAlphanumericRegex; // +0x8
    NSCharacterSet * _nonWhitespaceCharset; // +0x10
}
- (id)init;
- (BOOL)isTextValid:(id)arg1 transient:(BOOL)arg2 forStyle:(id)arg3 reason:(id *)arg4;
- (BOOL)isCharacterValid:(id)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (BOOL)isWeChatEmoticonValid:(id)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (BOOL)isFirstCharacterValid:(id)arg1 reason:(id *)arg2;
- (BOOL)isTrailingCharacterValid:(id)arg1 reason:(id *)arg2;
- (id)nonAlphanumericRegex;
- (void)setNonAlphanumericRegex:(id)arg1;
- (id)nonWhitespaceCharset;
- (void)setNonWhitespaceCharset:(id)arg1;
- (void).cxx_destruct;
@end

