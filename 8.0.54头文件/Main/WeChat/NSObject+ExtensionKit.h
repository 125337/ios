@interface NSObject (ExtensionKit)
+ (void)mm_webContentProcessWithBundleID:(id)arg1 interruptionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)doExtensionKitHook;
- (void)setXPCAttachment:(id)arg1;
- (id)XPCAttachment;
- (void)mm_contentProcessWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)mm_makeLibXPCConnectionError:(id *)arg1;
- (id)mm_BE_makeLibXPCConnectionError:(id *)arg1;
@end

