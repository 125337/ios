@interface MultiTalkJumpAppInfo : NSObject
{
    int _type; // +0x8
    MultiTalkJumpAppWordingInfo * _wordingInfo; // +0x10
    NSString * _iconUrlString; // +0x18
    NSString * _defaultIconName; // +0x20
    NSString * _schemeUrlStringInDialog; // +0x28
    NSString * _schemeUrlStringInBanner; // +0x30
    NSString * _htmlUrlStringInDialog; // +0x38
    NSString * _htmlUrlStringInBanner; // +0x40
}
- (int)type;
- (void)setType:(int)arg1;
- (id)wordingInfo;
- (void)setWordingInfo:(id)arg1;
- (id)iconUrlString;
- (void)setIconUrlString:(id)arg1;
- (id)defaultIconName;
- (void)setDefaultIconName:(id)arg1;
- (id)schemeUrlStringInDialog;
- (void)setSchemeUrlStringInDialog:(id)arg1;
- (id)schemeUrlStringInBanner;
- (void)setSchemeUrlStringInBanner:(id)arg1;
- (id)htmlUrlStringInDialog;
- (void)setHtmlUrlStringInDialog:(id)arg1;
- (id)htmlUrlStringInBanner;
- (void)setHtmlUrlStringInBanner:(id)arg1;
- (void).cxx_destruct;
@end

