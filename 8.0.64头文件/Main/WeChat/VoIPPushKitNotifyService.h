@interface VoIPPushKitNotifyService : MMUserService <MMKernelExt, MMServiceProtocol>
{
    BOOL _useVoIPLCK; // +0x8
    BOOL _isInBackground; // +0x9
}
+ (BOOL)isVoIPLCKAvailable;
+ (BOOL)getIfCanUseCX:(BOOL)arg1 isMultiTalk:(BOOL)arg2;
+ (BOOL)getIfHaveAProcess;
+ (BOOL)isDeviceCallkitAvailable;
+ (BOOL)isAppStateActive;
+ (BOOL)getCallkitSwitchFromService;
+ (BOOL)isCallkitAvailable;
+ (BOOL)getIfCallWithID:(id)arg1 isVideoMode:(BOOL)arg2;
+ (BOOL)haveAnsweredCall;
+ (id)getRingToneSoundForCaller:(id)arg1;
+ (BOOL)isProcessWithRoom:(unsigned long long)arg1;
+ (BOOL)canHandleVoIPPushInfo:(id)arg1 type:(id)arg2;
+ (id)displayNameWithInviteTips:(id)arg1 isMultiply:(BOOL)arg2 isVideo:(BOOL)arg3;
+ (id)getDisplayName:(id)arg1 VoIPPushInfo:(id)arg2;
+ (BOOL)handleVoIPPushInfoContent:(id)arg1 VoIPPushInfo:(id)arg2 type:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)useVoIPLCK;
- (void)sendOpenLCKExpt;
- (void)__sendOpenLCKExpt;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)getUserName;
- (void)reportCallEnded:(unsigned long long)arg1;
- (BOOL)getIsVideo;
- (BOOL)getIsMultiTalk;
- (void)requestAcceptCallWithRoom:(unsigned long long)arg1;
- (void)reportIncomingCallFromUser:(id)arg1 ofType:(int)arg2 withMsg:(id)arg3 isPushKit:(BOOL)arg4 isMultitalk:(BOOL)arg5;
- (void)resetStatus;
- (void)resetStatusWithRoomID:(unsigned long long)arg1;
- (void)forceEnd;
- (void)forceClose;
- (void)setUseVoIPLCK:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
@end
