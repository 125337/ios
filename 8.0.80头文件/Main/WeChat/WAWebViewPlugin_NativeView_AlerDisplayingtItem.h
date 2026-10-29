@interface WAWebViewPlugin_NativeView_AlerDisplayingtItem : MMObject
{
    WAAlertDialog * _alert; // +0x8
    id <IWAWebViewPluginDelegate> _delegate; // +0x10
}
- (id)alert;
- (void)setAlert:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
