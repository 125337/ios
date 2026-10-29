@interface GetTransferWordingResponse : NSObject
{
    BOOL _delayConfirmDescUrlflag; // +0x8
    BOOL _delayConfirmSwitchFlag; // +0x9
    NSString * _delayConfirmWording; // +0x10
    NSString * _delayConfirmSwitchWording; // +0x18
    NSString * _delayHalfPageRemindWording; // +0x20
    NSString * _delayConfirmSwitchRemindWording; // +0x28
    NSString * _delayConfirmDescUrl; // +0x30
}
- (id)delayConfirmWording;
- (void)setDelayConfirmWording:(id)arg1;
- (id)delayConfirmSwitchWording;
- (void)setDelayConfirmSwitchWording:(id)arg1;
- (id)delayHalfPageRemindWording;
- (void)setDelayHalfPageRemindWording:(id)arg1;
- (id)delayConfirmSwitchRemindWording;
- (void)setDelayConfirmSwitchRemindWording:(id)arg1;
- (BOOL)delayConfirmDescUrlflag;
- (void)setDelayConfirmDescUrlflag:(BOOL)arg1;
- (id)delayConfirmDescUrl;
- (void)setDelayConfirmDescUrl:(id)arg1;
- (BOOL)delayConfirmSwitchFlag;
- (void)setDelayConfirmSwitchFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

