@interface WeDropSendInitRequestInfoEvent : WeDropSendEvent
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onGotDecodedQR;
@end
