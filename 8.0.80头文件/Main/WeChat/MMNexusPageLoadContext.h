@interface MMNexusPageLoadContext : NSObject
{
    NSString * _pageId; // +0x8
    NSURL * _fileURL; // +0x10
    NSURL * _readAccessURL; // +0x18
    NSDictionary * _extra; // +0x20
    MMWebViewPresetUI * _presetUI; // +0x28
    MMNexusPageMetadata * _metadata; // +0x30
    MMNexusConfig * _cfg; // +0x38
    MMNexusStore * _store; // +0x40
    MMNexusInstance * _instance; // +0x48
}
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)fileURL;
- (void)setFileURL:(id)arg1;
- (id)readAccessURL;
- (void)setReadAccessURL:(id)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (id)presetUI;
- (void)setPresetUI:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)cfg;
- (void)setCfg:(id)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (void).cxx_destruct;
@end
