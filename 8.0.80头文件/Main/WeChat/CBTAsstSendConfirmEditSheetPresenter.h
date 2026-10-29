@interface CBTAsstSendConfirmEditSheetPresenter : NSObject
{
    MMFlutterInstance * _flutterInstance; // +0x8
    MMFlutterViewController * _flutterVC; // +0x10
    CBTAsstSendConfirmEditSheetPlugin * _plugin; // +0x18
    id /* block */ _resultBlock; // +0x20
}
+ (id)sharedPresenter;
+ (BOOL)isSheetPresenting;
- (BOOL)isPresenting;
- (BOOL)presentWithHostViewController:(id)arg1 text:(id)arg2 username:(id)arg3 displayName:(id)arg4 reportParamsJson:(id)arg5 hostPageId:(unsigned long long)arg6 resultBlock:(id /* block */)arg7;
- (void)handleSheetResult:(BOOL)arg1 editedText:(id)arg2;
- (void)dismiss;
- (void)dismissImmediately;
- (void)tearDownAnimatedReleaseFlag:(BOOL)arg1;
- (void)dealloc;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
