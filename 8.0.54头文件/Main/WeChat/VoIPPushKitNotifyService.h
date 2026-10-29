@interface VoIPPushKitNotifyService : MMUserService <MMKernelExt, MMServiceProtocol>
{
    BOOL _useVoIPLCK; // +0x8
    BOOL _isInBackground; // +0x9
}
+ (BOOL)isVoIPLCKAvailable;
+ (BOOL)getIfCanUseCX:(BOOL)arg1;
+ (BOOL)getIfHaveAProcess;
+ (BOOL)isDeviceCallkitAvailable;
+ (BOOL)isAppStateActive;
+ (BOOL)isCallkitAvailable;
+ (BOOL)getIfCallWithID:(id)arg1 isVideoMode:(BOOL)arg2;
+ (BOOL)haveAnsweredCall;
+ (id)getRingToneSoundForCaller:(id)arg1;
+ (BOOL)handleVoIPPushInfo:(id)arg1 type:(id)arg2;
+ (BOOL)handleVoIPPushInfoContent:(id)arg1 VoIPPushInfo:(id)arg2 type:(id)arg3;
- (BOOL)useVoIPLCK;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)reportCallEnded:(unsigned long long)arg1;
- (void)requestAcceptCall;
- (void)reportIncomingCallFromUser:(id)arg1 ofType:(int)arg2 withMsg:(id)arg3 isPushKit:(BOOL)arg4;
- (void)resetStatus;
- (void)setUseVoIPLCK:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
@end

