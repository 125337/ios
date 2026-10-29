@interface WxpayLFSScanCodeSession : NSObject <BaseScanLogicDelegate>
{
    id /* block */ _pendingReply; // +0x8
    unsigned long long _sequence; // +0x10
    NSArray * _codes; // +0x18
    ScanQRCodeLogicController * _logic; // +0x20
}
+ (id)sessionForHost:(id)arg1 create:(BOOL)arg2;
- (id)initWithHost:(id)arg1;
- (void)dealloc;
- (void)recognizeImage:(id)arg1 reply:(id /* block */)arg2;
- (id)codeWithString:(id)arg1 version:(unsigned long long)arg2;
- (void)settle:(id)arg1;
- (void)onScanEnds;
- (id)logic;
- (void).cxx_destruct;
@end
