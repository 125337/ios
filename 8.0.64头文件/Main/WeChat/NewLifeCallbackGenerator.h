@interface NewLifeCallbackGenerator : NSObject
{
    id /* block */ _callbackGenerateHandler; // +0x8
}
- (void)registerListenerForCommand:(id)arg1 userInfo:(id)arg2;
- (void)registerListenerForCommand:(id)arg1 keyList:(id)arg2 userInfo:(id)arg3;
- (void)onGenerateCallback:(id)arg1 forCommand:(id)arg2;
- (id /* block */)callbackGenerateHandler;
- (void)setCallbackGenerateHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
