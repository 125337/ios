@interface WeDropSendInitFirstInEvent : WeDropSendEvent <WeDropSendFirstInCallback>
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onConfirmFirstIn;
@end
