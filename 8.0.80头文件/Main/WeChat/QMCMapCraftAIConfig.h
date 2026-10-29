@interface QMCMapCraftAIConfig : NSObject
{
    BOOL _debug; // +0x8
    BOOL _enableKLog; // +0x9
    BOOL _enablePrintln; // +0xa
    BOOL _enableConsoleLog; // +0xb
    id _customLogger; // +0x10
}
+ (id)defaultConfig;
- (BOOL)debug;
- (void)setDebug:(BOOL)arg1;
- (BOOL)enableKLog;
- (void)setEnableKLog:(BOOL)arg1;
- (BOOL)enablePrintln;
- (void)setEnablePrintln:(BOOL)arg1;
- (BOOL)enableConsoleLog;
- (void)setEnableConsoleLog:(BOOL)arg1;
- (id)customLogger;
- (void)setCustomLogger:(id)arg1;
- (void).cxx_destruct;
@end
