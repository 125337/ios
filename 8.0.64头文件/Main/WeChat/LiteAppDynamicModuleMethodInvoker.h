@interface LiteAppDynamicModuleMethodInvoker : NSObject
{
    BOOL _isFromView; // +0x8
    unsigned int _appUuid; // +0xc
    NSString * _appId; // +0x10
    id _target; // +0x18
    NSInvocation * _invocation; // +0x20
}
+ (id)invokerWithClass:(id)arg1 method:(id)arg2;
+ (id)invokerWithInstance:(id)arg1 method:(id)arg2;
- (void)setCallback:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)invoke;
- (id)getReturnValue;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (BOOL)isFromView;
- (void)setIsFromView:(BOOL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)invocation;
- (void)setInvocation:(id)arg1;
- (void).cxx_destruct;
@end
