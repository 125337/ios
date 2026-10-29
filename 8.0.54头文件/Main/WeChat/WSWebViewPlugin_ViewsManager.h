@interface WSWebViewPlugin_ViewsManager : WebSearchPluginBase
{
     pageType; // +0x8
     screenShot; // +0x10
     hasTeachPage; // +0x18
}
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)changePageType:(unsigned long long)arg1;
- (BOOL)enableRestoreEducatePage;
- (id)init;
- (void).cxx_destruct;
@end

