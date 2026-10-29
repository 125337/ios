@interface MPNegativeFeedbackFlutterPlugin : NSObject <MMFlutterPlugin, BizNegativeFeedbackHostApi>
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    id /* block */ _selectHandler; // +0x10
    id /* block */ _cancelHandler; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)completeConfirmed:(BOOL)arg1 cgiSuccess:(BOOL)arg2 reasons:(id)arg3 completion:(id /* block */)arg4;
- (void)onDetachedFromEngine:(id)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id /* block */)selectHandler;
- (void)setSelectHandler:(id /* block */)arg1;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
