@interface WACronetHttpBindingHandle : NSObject
{
    unique_ptr<weapp_core::CronetHttpBindingCore, std::default_delete<weapp_core::CronetHttpBindingCore>> _core; // +0x8
    shared_ptr<(anonymous namespace)::IOSBindingHost> _host; // +0x10
    shared_ptr<(anonymous namespace)::IOSThreadTaskRunner> _runner; // +0x20
    BOOL _released; // +0x30
}
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2 userAgent:(id)arg3 verifyUserCA:(BOOL)arg4 skipDomainCheck:(BOOL)arg5 allowAgentSource:(BOOL)arg6 referURL:(id)arg7 maxDownloadFileSizeBytes:(long long)arg8 userVisibleMaxDownloadFileSizeBytes:(long long)arg9 additionalTrustAnchors:(id)arg10 delegate:(id)arg11;
- (void)suspend;
- (void)releaseContext;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
