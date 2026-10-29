@interface WSWebViewPlugin_webSearchMgrContainer : WSWebViewPluginBase <WebSearchMgrDelegate>
{
    FTSWebSearchMgr * _webSearchMgr; // +0x8
}
- (id)webSearchMgr;
- (void)onUpdateLocalImage:(id)arg1;
- (void)setWebSearchMgr:(id)arg1;
- (void).cxx_destruct;
@end

