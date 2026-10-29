@interface TPEventTrackingPublisher : NSObject
{
    TPPlayerEventPublisher * _publisher; // +0x8
    TPPlayerAdapter * _playerAdapter; // +0x10
    NSDictionary * _invocationHandlerTable; // +0x18
}
- (id)initWithAdapter:(id)arg1 publisher:(id)arg2;
- (void)setupInvocationHandlerTable;
- (void)handlePrepareAsync:(id)arg1;
- (void)handleStart:(id)arg1;
- (void)handlePause:(id)arg1;
- (void)handleStop:(id)arg1;
- (void)handleReset:(id)arg1;
- (void)handleReleasePlayer:(id)arg1;
- (void)handleSeekTo:(id)arg1;
- (void)handleSetPlaySpeedRatio:(id)arg1;
- (void)handleSelectTrack:(id)arg1;
- (id)handlerInvocationWithSEL:(SEL)arg1;
- (id)publisher;
- (void)setPublisher:(id)arg1;
- (id)playerAdapter;
- (void)setPlayerAdapter:(id)arg1;
- (id)invocationHandlerTable;
- (void)setInvocationHandlerTable:(id)arg1;
- (void).cxx_destruct;
@end

