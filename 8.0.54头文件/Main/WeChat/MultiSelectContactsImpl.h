@interface MultiSelectContactsImpl : NSObject <MultiSelectContactsViewControllerDelegate>
{
    LiteAppDynamicModuleCallback * _callBack; // +0x8
    UIViewController * _vc; // +0x10
    NSDictionary * _option; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)startMultiContactsSelect:(id)arg1 currentVc:(id)arg2 resultCallback:(id)arg3;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)callBack;
- (void)setCallBack:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (void).cxx_destruct;
@end

