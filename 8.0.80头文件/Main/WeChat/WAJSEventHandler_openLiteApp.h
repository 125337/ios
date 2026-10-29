@interface WAJSEventHandler_openLiteApp : WAJSEventHandler_BaseEvent <MMLiteAppExt>
{
    BOOL _isRedirect; // +0x8
    BOOL _openDataChannel; // +0x9
    NSString * _page; // +0x10
    NSString * _query; // +0x18
    NSString * _appId; // +0x20
    NSString * _enterType; // +0x28
}
- (void)handleJSEvent:(id)arg1;
- (void)openLiteAppViaLegacy:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)enterType;
- (void)setEnterType:(id)arg1;
- (BOOL)isRedirect;
- (void)setIsRedirect:(BOOL)arg1;
- (BOOL)openDataChannel;
- (void)setOpenDataChannel:(BOOL)arg1;
- (void).cxx_destruct;
@end
