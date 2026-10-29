@interface CBTAsstReportFlutterPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
