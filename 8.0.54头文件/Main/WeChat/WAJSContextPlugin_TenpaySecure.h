@interface WAJSContextPlugin_TenpaySecure : WAJSContextPluginBase
{
    BOOL _pathCreated; // +0x8
}
- (void)tryInit;
- (void)runInTenpayThread:(id /* block */)arg1;
- (id)tenpaySecureRootDir;
- (BOOL)pathCreated;
- (void)setPathCreated:(BOOL)arg1;
@end

