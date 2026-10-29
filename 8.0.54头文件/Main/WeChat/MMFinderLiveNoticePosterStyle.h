@interface MMFinderLiveNoticePosterStyle : NSObject
{
    BOOL _isFallback; // +0x8
    NSString * _styleId; // +0x10
    unsigned long long _backgroundType; // +0x18
    NSString * _backgroundColorHexCode; // +0x20
    NSString * _backgroundImageUri; // +0x28
    NSString * _foregroundColorHexCode; // +0x30
    NSString * _brandLogoColorHexCode; // +0x38
    NSString * _verificationIconUri; // +0x40
}
+ (id)styleWithBackendModel:(id)arg1;
+ (id)fallbackStyle;
- (id)styleId;
- (void)setStyleId:(id)arg1;
- (unsigned long long)backgroundType;
- (void)setBackgroundType:(unsigned long long)arg1;
- (id)backgroundColorHexCode;
- (void)setBackgroundColorHexCode:(id)arg1;
- (id)backgroundImageUri;
- (void)setBackgroundImageUri:(id)arg1;
- (id)foregroundColorHexCode;
- (void)setForegroundColorHexCode:(id)arg1;
- (id)brandLogoColorHexCode;
- (void)setBrandLogoColorHexCode:(id)arg1;
- (id)verificationIconUri;
- (void)setVerificationIconUri:(id)arg1;
- (BOOL)isFallback;
- (void)setIsFallback:(BOOL)arg1;
- (void).cxx_destruct;
@end

