@interface MBJITJSFunction : MBJSFunction
{
    unsigned long long _callbackId; // +0x8
}
- (void)invoke:(id)arg1;
- (unsigned long long)callbackId;
- (void)setCallbackId:(unsigned long long)arg1;
@end
