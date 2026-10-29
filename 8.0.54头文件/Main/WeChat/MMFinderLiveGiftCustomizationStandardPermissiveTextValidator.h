@interface MMFinderLiveGiftCustomizationStandardPermissiveTextValidator : NSObject <MMFinderLiveGiftCustomizationTextValidating>
{
    NSRegularExpression * _nonAlphanumericRegex; // +0x8
    NSCharacterSet * _nonWhitespaceCharset; // +0x10
}
- (id)init;
- (BOOL)isTextValid:(id)arg1 transient:(BOOL)arg2 forStyle:(id)arg3 reason:(id *)arg4;
- (BOOL)isCharacterValid:(id)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (BOOL)isWeChatEmoticonValid:(id)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (id)nonAlphanumericRegex;
- (void)setNonAlphanumericRegex:(id)arg1;
- (id)nonWhitespaceCharset;
- (void)setNonWhitespaceCharset:(id)arg1;
- (void).cxx_destruct;
@end

