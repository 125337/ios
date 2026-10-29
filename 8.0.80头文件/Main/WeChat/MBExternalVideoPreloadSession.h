@interface MBExternalVideoPreloadSession : NSObject
{
    unsigned long long _startTime; // +0x8
    NSString * _src; // +0x10
    NSString * _urlHost; // +0x18
    long long _expectRatio; // +0x20
    long long _cancelPhase; // +0x28
}
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)src;
- (void)setSrc:(id)arg1;
- (id)urlHost;
- (void)setUrlHost:(id)arg1;
- (long long)expectRatio;
- (void)setExpectRatio:(long long)arg1;
- (long long)cancelPhase;
- (void)setCancelPhase:(long long)arg1;
- (void).cxx_destruct;
@end
