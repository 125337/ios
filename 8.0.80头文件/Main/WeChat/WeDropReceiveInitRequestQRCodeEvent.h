@interface WeDropReceiveInitRequestQRCodeEvent : WeDropReceiveEvent <WeDropReceiveQRCodeCallback>
{
    BOOL _requesting; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)requestQRCode;
- (void)retryRequestQRCode;
- (void)retryInitQRCode;
- (BOOL)requesting;
- (void)setRequesting:(BOOL)arg1;
@end
