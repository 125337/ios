@interface VoIPInComingReportManager : NSObject
{
    BOOL _isCaller; // +0x8
    BOOL _isHiddenWithin1h; // +0x9
    BOOL _isVideo; // +0xa
    BOOL _isSubCall; // +0xb
    BOOL _launchFromBackground; // +0xc
    BOOL _hasReportPageExposure; // +0xd
    BOOL _pendingIsTurnOffScreen; // +0xe
    BOOL _hasReportFloatWindowExp; // +0xf
    BOOL _hasPendingFloatWindowExp; // +0x10
    BOOL _hasObservedDidBecomeActive; // +0x11
    NSString * _fromUsername; // +0x18
    long long _hiddenType; // +0x20
    long long _callType; // +0x28
    unsigned long long _roomID; // +0x30
    unsigned long long _launchTime; // +0x38
    long long _currentFloatWindowHiddenType; // +0x40
    long long _currentFloatWindowOperScene; // +0x48
}
+ (BOOL)isBackgroundHiddenType:(long long)arg1;
- (id)initWithCallType:(long long)arg1 roomID:(unsigned long long)arg2 isCaller:(BOOL)arg3 isVideo:(BOOL)arg4 isSubCall:(BOOL)arg5 fromUsername:(id)arg6;
- (void)launch;
- (void)reportVoipInComingAction:(long long)arg1 isFromCard:(BOOL)arg2;
- (void)markTurnOffScreen;
- (void)reportVoipInComingBackgroundWithIsFromCard:(BOOL)arg1;
- (long long)hiddenTypeFromAction:(long long)arg1;
- (void)reportVoipInComingPageExposure;
- (void)reportVoipHiddenWithin1hCall;
- (id)baseReportParams;
- (id)voipWaitingFloatWindowReportParams;
- (void)scheduleVoipWaitingFloatWindowExposureWithHiddenType:(long long)arg1 voipOperScene:(long long)arg2;
- (void)onApplicationDidBecomeActiveForFloatWindowExp;
- (void)performReportVoipWaitingFloatWindowExp;
- (void)reportVoipWaitingFloatWindowClick;
- (void)resetVoipWaitingFloatWindowExposureState;
- (void)resetVoipWaitingFloatWindowExposureLock;
- (void)dealloc;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (BOOL)isHiddenWithin1h;
- (void)setIsHiddenWithin1h:(BOOL)arg1;
- (long long)hiddenType;
- (void)setHiddenType:(long long)arg1;
- (long long)callType;
- (void)setCallType:(long long)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (BOOL)isSubCall;
- (void)setIsSubCall:(BOOL)arg1;
- (unsigned long long)launchTime;
- (void)setLaunchTime:(unsigned long long)arg1;
- (BOOL)launchFromBackground;
- (void)setLaunchFromBackground:(BOOL)arg1;
- (BOOL)hasReportPageExposure;
- (void)setHasReportPageExposure:(BOOL)arg1;
- (BOOL)pendingIsTurnOffScreen;
- (void)setPendingIsTurnOffScreen:(BOOL)arg1;
- (BOOL)hasReportFloatWindowExp;
- (void)setHasReportFloatWindowExp:(BOOL)arg1;
- (BOOL)hasPendingFloatWindowExp;
- (void)setHasPendingFloatWindowExp:(BOOL)arg1;
- (long long)currentFloatWindowHiddenType;
- (void)setCurrentFloatWindowHiddenType:(long long)arg1;
- (long long)currentFloatWindowOperScene;
- (void)setCurrentFloatWindowOperScene:(long long)arg1;
- (BOOL)hasObservedDidBecomeActive;
- (void)setHasObservedDidBecomeActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
