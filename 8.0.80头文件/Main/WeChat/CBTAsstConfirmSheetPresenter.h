@interface CBTAsstConfirmSheetPresenter : NSObject
{
    BOOL _openingLink; // +0x8
    MMFlutterInstance * _flutterInstance; // +0x10
    MMFlutterViewController * _flutterVC; // +0x18
    CBTAsstConfirmSheetPlugin * _plugin; // +0x20
    id /* block */ _resultBlock; // +0x28
}
- (BOOL)isPresenting;
- (BOOL)presentWithHostViewController:(id)arg1 title:(id)arg2 content:(id)arg3 confirmText:(id)arg4 cancelText:(id)arg5 cancelable:(BOOL)arg6 resultBlock:(id /* block */)arg7;
- (void)handleSheetResult:(unsigned long long)arg1;
- (void)dismiss;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (BOOL)openingLink;
- (void)setOpeningLink:(BOOL)arg1;
- (void).cxx_destruct;
@end
