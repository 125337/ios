@interface _TtC7WeMagic12MBGlobalInfo : NSObject
{
    void * system; // +0x8
    void * model; // +0x18
    void * brand; // +0x28
    void * platform; // +0x38
    void * host; // +0x48
    unsigned long long clientVersion; // +0x58
    void * clientVersionString; // +0x60
    int maxFps; // +0x70
    int screenWidth; // +0x74
    int screenHeight; // +0x78
    float pixelRatio; // +0x7c
    void * deviceOrientation; // +0x80
    float fontScale; // +0x90
    void * language; // +0x98
    BOOL isDark; // +0xa8
    BOOL isTeenMode; // +0xa9
}
- (id)system;
- (id)model;
- (id)brand;
- (id)platform;
- (id)host;
- (unsigned long long)clientVersion;
- (id)clientVersionString;
- (int)maxFps;
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
- (id)initWithSystem:(id)arg1 model:(id)arg2 brand:(id)arg3 platform:(id)arg4 host:(id)arg5 clientVersion:(unsigned long long)arg6 clientVersionString:(id)arg7 maxFps:(int)arg8 screenWidth:(int)arg9 screenHeight:(int)arg10 pixelRatio:(float)arg11 deviceOrientation:(id)arg12 fontScale:(float)arg13 language:(id)arg14 isDark:(BOOL)arg15 isTeenMode:(BOOL)arg16;
- (id)init;
- (void).cxx_destruct;
@end
