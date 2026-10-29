@interface WAJSEventHandler_showPickerView : WAJSEventHandler_BaseEvent <WAWebViewPluginPickerDelegate>
{
    WACommonPickerView * _picker; // +0x8
    MMPickerMaskView * _mask; // +0x10
    long long _current; // +0x18
    double _pickerTime; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)onCancel;
- (void)onConfirm:(id)arg1 values:(id)arg2;
- (void).cxx_destruct;
@end
