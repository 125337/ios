@interface EcsJsaCallback : NSObject
{
    id /* block */ _respAction; // +0x8
    id /* block */ _innerLogicReleaseAction; // +0x10
}
+ (id)createWithRespAction:(id /* block */)arg1;
- (id)initWithRespAction:(id /* block */)arg1;
- (void)onComplete:(id)arg1;
- (void)onSuc;
- (void)onSucWithData:(id)arg1;
- (void)onCancel;
- (void)onCancelWithData:(id)arg1;
- (void)onFail;
- (void)onFailWithData:(id)arg1;
- (id /* block */)respAction;
- (id /* block */)innerLogicReleaseAction;
- (void)setInnerLogicReleaseAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
