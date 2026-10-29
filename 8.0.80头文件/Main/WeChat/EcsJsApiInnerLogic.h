@interface EcsJsApiInnerLogic : NSObject
{
    EcsBaseAsyncJsApiHandler * _action; // +0x8
    EcsJsaContext * _context; // +0x10
    EcsJsaCallback * _callback; // +0x18
}
+ (id)createWithAction:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (id)action;
- (void)setAction:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
