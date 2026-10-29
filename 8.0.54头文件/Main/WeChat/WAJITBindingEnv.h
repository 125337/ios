@interface WAJITBindingEnv : NSObject <JITRuntimeBindingDelegate>
{
    WAJITBindingMediaModule * _mediaModule; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)onCreateJITBindingContext:(id)arg1;
- (void)onDestroyJITBindingContext;
- (id)mediaModule;
- (void)setMediaModule:(id)arg1;
- (void).cxx_destruct;
@end

