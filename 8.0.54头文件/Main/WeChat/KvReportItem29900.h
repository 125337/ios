@interface KvReportItem29900 : WAReportBaseItem
{
    unsigned int _appState; // +0x8
    unsigned int _isJitMode; // +0xc
    unsigned int _duration; // +0x10
    unsigned int _actionScene; // +0x14
    unsigned int _actionResult; // +0x18
    NSString * _appId; // +0x20
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appState;
- (void)setAppState:(unsigned int)arg1;
- (unsigned int)isJitMode;
- (void)setIsJitMode:(unsigned int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)actionScene;
- (void)setActionScene:(unsigned int)arg1;
- (unsigned int)actionResult;
- (void)setActionResult:(unsigned int)arg1;
- (void).cxx_destruct;
@end

