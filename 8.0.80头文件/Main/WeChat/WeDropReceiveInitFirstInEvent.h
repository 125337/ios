@interface WeDropReceiveInitFirstInEvent : WeDropReceiveEvent <WeDropReceiveFirstInCallback>
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onConfirmFirstIn;
@end
