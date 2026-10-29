@interface WCBizSchemeUrlBaseHandler : NSObject
{
    id <WCBizSchemeUrlBaseHandlerDelegate> _delegate; // +0x8
}
- (void)startHandleWithActionBuffer:(id)arg1 transBuffer:(id)arg2 andTransBufferSign:(id)arg3;
- (BOOL)needCustomizeWhenToDismissBlocingViewController;
- (BOOL)targetLoginStatusIsLogin;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
