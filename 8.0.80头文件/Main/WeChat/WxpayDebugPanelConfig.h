@interface WxpayDebugPanelConfig : NSObject
{
    BOOL _debugPanelEnabled; // +0x8
    BOOL _releaseDebugPanelEnabled; // +0x9
    BOOL _passThroughGuideShown; // +0xa
    NSString * _process; // +0x10
}
- (id)init;
- (BOOL)debugPanelEnabled;
- (void)setDebugPanelEnabled:(BOOL)arg1;
- (BOOL)releaseDebugPanelEnabled;
- (void)setReleaseDebugPanelEnabled:(BOOL)arg1;
- (BOOL)passThroughGuideShown;
- (void)setPassThroughGuideShown:(BOOL)arg1;
- (id)process;
- (void)setProcess:(id)arg1;
- (void).cxx_destruct;
@end
