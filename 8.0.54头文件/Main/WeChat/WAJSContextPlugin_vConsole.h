@interface WAJSContextPlugin_vConsole : WAJSContextPluginBase
{
    UIViewController<IWAVConsoleWebVCHelper> * _vConsoleWebVC; // +0x8
}
- (void)genVConsoleWebVCWithExtInfo:(id)arg1;
- (void)web_view_setHtmlId:(unsigned int)arg1;
- (void)reloadConsoleView;
- (void)sendEvent:(id)arg1 parma:(id)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2;
- (id)getVConsoleWebview:(unsigned int)arg1;
- (BOOL)removeVConsoleWebview:(unsigned int)arg1;
- (void)releaseVConsoleVC;
- (id)web_view;
- (void)web_view_configViewFrame:(CGRect)arg1;
- (id)fetchPublicResLogic;
- (id)vConsoleWebVC;
- (void)setVConsoleWebVC:(id)arg1;
- (void).cxx_destruct;
@end

