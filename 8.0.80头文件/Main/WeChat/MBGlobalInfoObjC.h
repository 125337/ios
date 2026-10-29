@interface MBGlobalInfoObjC : NSObject
{
    BOOL _isDark; // +0x8
    BOOL _isTeenMode; // +0x9
    int _maxFps; // +0xc
    int _screenWidth; // +0x10
    int _screenHeight; // +0x14
    float _pixelRatio; // +0x18
    float _fontScale; // +0x1c
    NSString * _system; // +0x20
    NSString * _model; // +0x28
    NSString * _brand; // +0x30
    NSString * _platform; // +0x38
    NSString * _host; // +0x40
    unsigned long long _clientVersion; // +0x48
    NSString * _clientVersionString; // +0x50
    NSString * _deviceOrientation; // +0x58
    NSString * _language; // +0x60
}
- (id)init;
- (id)system;
- (void)setSystem:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)brand;
- (void)setBrand:(id)arg1;
- (id)platform;
- (void)setPlatform:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (unsigned long long)clientVersion;
- (void)setClientVersion:(unsigned long long)arg1;
- (id)clientVersionString;
- (void)setClientVersionString:(id)arg1;
- (int)maxFps;
- (void)setMaxFps:(int)arg1;
- (int)screenWidth;
- (void)setScreenWidth:(int)arg1;
- (int)screenHeight;
- (void)setScreenHeight:(int)arg1;
- (float)pixelRatio;
- (void)setPixelRatio:(float)arg1;
- (id)deviceOrientation;
- (void)setDeviceOrientation:(id)arg1;
- (float)fontScale;
- (void)setFontScale:(float)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (BOOL)isDark;
- (void)setIsDark:(BOOL)arg1;
- (BOOL)isTeenMode;
- (void)setIsTeenMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
