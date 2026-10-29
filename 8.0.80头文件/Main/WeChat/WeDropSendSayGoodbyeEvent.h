@interface WeDropSendSayGoodbyeEvent : WeDropSendEvent
{
    WeDropBaseLocalCgi * _localCgi; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (id)localCgi;
- (void)setLocalCgi:(id)arg1;
- (void).cxx_destruct;
@end
