@interface EcsShareToContactEventCallback : NSObject
{
    id /* block */ _onSuc; // +0x8
    id /* block */ _onCancel; // +0x10
    id /* block */ _onFail; // +0x18
}
- (id /* block */)onSuc;
- (void)setOnSuc:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onFail;
- (void)setOnFail:(id /* block */)arg1;
- (void).cxx_destruct;
@end
