@interface FBSDKLoginURLCompleter : NSObject <FBSDKLoginCompleting>
{
    FBSDKLoginCompletionParameters * _parameters; // +0x8
    id <NSObject> _observer; // +0x10
    BOOL _performExplicitFallback; // +0x18
}
- (id)initWithURLParameters:(id)arg1 appID:(id)arg2;
- (void)completeLogIn:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setParametersWithDictionary:(id)arg1 appID:(id)arg2;
- (void)setErrorWithDictionary:(id)arg1;
- (void)attemptBrowserLogIn:(id)arg1;
- (void).cxx_destruct;
@end
