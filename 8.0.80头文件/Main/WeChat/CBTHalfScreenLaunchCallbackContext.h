@interface CBTHalfScreenLaunchCallbackContext : NSObject
{
    BOOL _audioStarted; // +0x8
    BOOL _finished; // +0x9
    NSString * _businessId; // +0x10
    NSString * _reuseKey; // +0x18
    NSString * _instanceKey; // +0x20
    unsigned long long _launchRevision; // +0x28
    long long _enterScene; // +0x30
    NSString * _reportParamsJson; // +0x38
    UIViewController * _fromVC; // +0x40
    id /* block */ _presentCallback; // +0x48
    id /* block */ _dismissCallback; // +0x50
    id /* block */ _cleanupBlock; // +0x58
}
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)reuseKey;
- (void)setReuseKey:(id)arg1;
- (id)instanceKey;
- (void)setInstanceKey:(id)arg1;
- (unsigned long long)launchRevision;
- (void)setLaunchRevision:(unsigned long long)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)reportParamsJson;
- (void)setReportParamsJson:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id /* block */)presentCallback;
- (void)setPresentCallback:(id /* block */)arg1;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg1;
- (id /* block */)cleanupBlock;
- (void)setCleanupBlock:(id /* block */)arg1;
- (BOOL)audioStarted;
- (void)setAudioStarted:(BOOL)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
