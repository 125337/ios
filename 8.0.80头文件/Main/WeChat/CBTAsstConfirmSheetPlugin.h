@interface CBTAsstConfirmSheetPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    id /* block */ _resultBlock; // +0x10
    id /* block */ _willOpenLinkBlock; // +0x18
    id /* block */ _didReturnLinkBlock; // +0x20
}
- (void)setResultBlock:(id /* block */)arg1;
- (void)setWillOpenLinkBlock:(id /* block */)arg1;
- (void)setDidReturnLinkBlock:(id /* block */)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)openWebPageWithURL:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id /* block */)resultBlock;
- (id /* block */)willOpenLinkBlock;
- (id /* block */)didReturnLinkBlock;
- (void).cxx_destruct;
@end
