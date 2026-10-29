@interface MMCreateLiteAppStoreCallbackInfo : NSObject
{
    unsigned int _time; // +0x8
    unsigned int _aliveSeconds; // +0xc
    id /* block */ _callback; // +0x10
}
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (unsigned int)time;
- (void)setTime:(unsigned int)arg1;
- (unsigned int)aliveSeconds;
- (void)setAliveSeconds:(unsigned int)arg1;
- (void).cxx_destruct;
@end
