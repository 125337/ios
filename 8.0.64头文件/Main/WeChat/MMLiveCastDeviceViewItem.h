@interface MMLiveCastDeviceViewItem : MMLiveCastViewItem
{
    KSUPnPDevice * _device; // +0x8
    KSUPnPController_AVTransport * _AVTransportController; // +0x10
}
- (id)initWithDevice:(id)arg1;
- (id)AVTransportController;
- (void)reloadValuesFromDevice;
- (void)startCastingWithURL:(id)arg1 title:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stopCastingWithCompletionHandler:(id /* block */)arg1;
- (id)device;
- (void)setAVTransportController:(id)arg1;
- (void).cxx_destruct;
@end
