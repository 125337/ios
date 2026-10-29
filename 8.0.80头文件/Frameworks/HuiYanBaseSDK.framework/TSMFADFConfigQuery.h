@interface TSMFADFConfigQuery : TSMFAQuery
{
    BOOL _usesDebugServer; // +0x8
}
+ (id)task;
- (void)executeWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (BOOL)usesDebugServer;
- (void)setUsesDebugServer:(BOOL)arg1;
@end
