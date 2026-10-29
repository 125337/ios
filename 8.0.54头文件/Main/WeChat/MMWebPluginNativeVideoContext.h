@interface MMWebPluginNativeVideoContext : NSObject
{
    BOOL _bShouldResumeWhenAppear; // +0x8
    BOOL _needEvent; // +0x9
    unsigned int _viewId; // +0xc
    MMWebPluginNativeVideoJSContext * _jsContext; // +0x10
    MMWebFinderPlayArgs * _finderPlayInfo; // +0x18
}
- (id)initWithViewId:(unsigned int)arg1;
- (BOOL)hasWebCompt;
- (unsigned int)viewId;
- (void)setViewId:(unsigned int)arg1;
- (BOOL)bShouldResumeWhenAppear;
- (void)setBShouldResumeWhenAppear:(BOOL)arg1;
- (BOOL)needEvent;
- (void)setNeedEvent:(BOOL)arg1;
- (id)jsContext;
- (void)setJsContext:(id)arg1;
- (id)finderPlayInfo;
- (void)setFinderPlayInfo:(id)arg1;
- (void).cxx_destruct;
@end

