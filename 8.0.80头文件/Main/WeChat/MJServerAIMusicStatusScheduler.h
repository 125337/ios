@interface MJServerAIMusicStatusScheduler : NSObject
{
    struct _desiredStatus; // +0x8
    WCFinderVideoProducerViewModel * _viewModel; // +0x10
    id /* block */ _appliedHandler; // +0x18
    id /* block */ _settledHandler; // +0x20
    long long _state; // +0x28
    unsigned long long _successfulApplyCount; // +0x30
}
- (id)initWithViewModel:(id)arg1 appliedHandler:(id /* block */)arg2 settledHandler:(id /* block */)arg3;
- (BOOL)desiredBGMEnabledWithCommittedValue:(BOOL)arg1;
- (BOOL)desiredOSTEnabledWithCommittedValue:(BOOL)arg1;
- (void)updateBGMEnabled:(BOOL)arg1 OSTEnabled:(BOOL)arg2 lyricsEnabled:(BOOL)arg3;
- (void)processDesiredStatus;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id /* block */)appliedHandler;
- (void)setAppliedHandler:(id /* block */)arg1;
- (id /* block */)settledHandler;
- (void)setSettledHandler:(id /* block */)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (struct)desiredStatus;
- (void)setDesiredStatus:(struct)arg1;
- (unsigned long long)successfulApplyCount;
- (void)setSuccessfulApplyCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
