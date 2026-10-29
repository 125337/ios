@interface ContactSelectImpl : NSObject <WCPaySelectSingleContactControlLogicDelegate>
{
    LiteAppDynamicModuleCallback * _callBack; // +0x8
    UIViewController * _vc; // +0x10
    NSDictionary * _option; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)startContactSelect:(id)arg1 currentVc:(id)arg2 resultCallback:(id)arg3;
- (void)stopSelectSingleContact;
- (void)selectSingleContactLogic:(id)arg1 didSelectContact:(id)arg2;
- (void)onCancel:(id)arg1;
- (BOOL)filter:(id)arg1 contact:(id)arg2;
- (id)callBack;
- (void)setCallBack:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (void).cxx_destruct;
@end

