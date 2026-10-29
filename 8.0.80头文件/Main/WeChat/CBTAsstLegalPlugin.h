@interface CBTAsstLegalPlugin : NSObject <MMFlutterPlugin>
{
    id /* block */ _onCloseBlock; // +0x8
    id /* block */ _onAgreeBlock; // +0x10
    id /* block */ _onDeclineBlock; // +0x18
    FlutterMethodChannel * _channel; // +0x20
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id /* block */)onCloseBlock;
- (void)setOnCloseBlock:(id /* block */)arg1;
- (id /* block */)onAgreeBlock;
- (void)setOnAgreeBlock:(id /* block */)arg1;
- (id /* block */)onDeclineBlock;
- (void)setOnDeclineBlock:(id /* block */)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
