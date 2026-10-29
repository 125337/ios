@interface MBEventHandlerBaseAsync : MBEventHandlerBase
{
    MBJSFunction * _callbackFunc; // +0x8
}
- (void)invoke:(id)arg1;
- (void)callback:(id)arg1;
- (id)callbackFunc;
- (void)setCallbackFunc:(id)arg1;
- (void).cxx_destruct;
@end

