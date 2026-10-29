@interface TPPlayerPictureInPictureHandler : NSObject <ITPPlayerAdapterHandler>
{
    TPPlayerAdapter * _adapter; // +0x8
    long long _state; // +0x10
    long long _prePlayerType; // +0x18
}
+ (id)handlerForAdapter:(id)arg1;
- (BOOL)handleOnPrepared;
- (BOOL)handleStop;
- (long long)handleStartPictureInPicture;
- (long long)handleStopPictureInPicture;
- (BOOL)handlePictureInPictureStateDidChange:(long long)arg1;
- (BOOL)handlePictureInPictureErrorDidOccur:(long long)arg1;
- (void)restoreFromPipWithError:(long long)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)prePlayerType;
- (void)setPrePlayerType:(long long)arg1;
- (void).cxx_destruct;
@end

