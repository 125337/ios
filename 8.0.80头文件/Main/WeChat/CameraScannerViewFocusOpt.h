@interface CameraScannerViewFocusOpt : NSObject
{
    BOOL _enableCenterFocus; // +0x8
    BOOL _enableCenterFocusOnlyMacroMode; // +0x9
    BOOL _useCenterFocusSimpleMode; // +0xa
    unsigned int _focusOSType; // +0xc
    NSString * _iOS26SupportVersion; // +0x10
    unsigned long long _firstFocusTime; // +0x18
    unsigned long long _centerFocusCount; // +0x20
    unsigned long long _centerFocusMaxCount; // +0x28
    unsigned long long _centerFocusInterval; // +0x30
}
- (id)init;
- (BOOL)enableCenterFocus;
- (void)setEnableCenterFocus:(BOOL)arg1;
- (unsigned int)focusOSType;
- (void)setFocusOSType:(unsigned int)arg1;
- (id)iOS26SupportVersion;
- (void)setIOS26SupportVersion:(id)arg1;
- (BOOL)enableCenterFocusOnlyMacroMode;
- (void)setEnableCenterFocusOnlyMacroMode:(BOOL)arg1;
- (BOOL)useCenterFocusSimpleMode;
- (void)setUseCenterFocusSimpleMode:(BOOL)arg1;
- (unsigned long long)firstFocusTime;
- (void)setFirstFocusTime:(unsigned long long)arg1;
- (unsigned long long)centerFocusCount;
- (void)setCenterFocusCount:(unsigned long long)arg1;
- (unsigned long long)centerFocusMaxCount;
- (void)setCenterFocusMaxCount:(unsigned long long)arg1;
- (unsigned long long)centerFocusInterval;
- (void)setCenterFocusInterval:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
