@interface WxpayLiteAppConfigEnvelopeQueue : NSObject
{
    NSMutableArray * _pending; // +0x8
}
- (id)init;
- (BOOL)append:(id)arg1;
- (id)takeForUin:(id)arg1;
- (void)clear;
- (id)pending;
- (void)setPending:(id)arg1;
- (void).cxx_destruct;
@end
