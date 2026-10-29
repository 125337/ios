@interface MMWebViewPlugin_PageSheetLifecycle : MMWebViewPluginBase
{
    BOOL _isShowingPageSheet; // +0x8
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (BOOL)isShowingPageSheet;
- (void)setIsShowingPageSheet:(BOOL)arg1;
@end
