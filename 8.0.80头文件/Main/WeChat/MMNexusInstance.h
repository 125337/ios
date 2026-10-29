@interface MMNexusInstance : NSObject
{
    NSString * _pageId; // +0x8
    NSString * _pageVariant; // +0x10
    NSString * _instanceId; // +0x18
    unsigned long long _mode; // +0x20
    MMNexusStore * _store; // +0x28
    MMWebViewController * _webVC; // +0x30
    MMNexusInstanceHost * _host; // +0x38
}
+ (id)_makeWithPageId:(id)arg1 mode:(unsigned long long)arg2 store:(id)arg3;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)pageVariant;
- (void)setPageVariant:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (void).cxx_destruct;
@end
