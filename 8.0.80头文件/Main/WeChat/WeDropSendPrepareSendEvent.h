@interface WeDropSendPrepareSendEvent : WeDropSendEvent <INearConnectionServiceExt>
{
    WeDropBaseLocalCgi * _localCgi; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
- (id)localCgi;
- (void)setLocalCgi:(id)arg1;
- (void).cxx_destruct;
@end
