@interface WxpayLFSInvocationSession : NSObject
{
    BOOL _boundToViewController; // +0x8
    LiteAppDynamicModuleMethodInvoker * _invoker; // +0x10
    NSString * _label; // +0x18
}
- (id)invoker;
- (void)setInvoker:(id)arg1;
- (BOOL)boundToViewController;
- (void)setBoundToViewController:(BOOL)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
