@interface EcsOpenRespCallback : NSObject
{
    NSString * _name; // +0x8
    NSString * _type; // +0x10
    EcsJumpInfo * _jumpInfo; // +0x18
    id /* block */ _action; // +0x20
}
+ (id)createWithName:(id)arg1 type:(id)arg2 jumpInfo:(id)arg3 action:(id /* block */)arg4;
- (void)onComplete:(id)arg1;
- (id)createCallbackResp:(int)arg1;
- (void)onSuccess:(id)arg1;
- (void)onSuccessWithBytes:(id)arg1;
- (void)onFailed:(id)arg1;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
