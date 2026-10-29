@interface WCFinderLockScreenService : MMUserService <MMServiceProtocol, WCAudioModuleDelegate, WCPlayerPipMgrExt>
{
    BOOL _isEnabled; // +0x8
    BOOL _protectedDataBecameUnavailable; // +0x9
    BOOL _isInPictureInPicture; // +0xa
    BOOL _hasReportedLockAndGenPlayer; // +0xb
    id <WCFinderLockScreenServiceDelegate> _delegate; // +0x10
    UIImage * _cachedCoverImage; // +0x18
    NSString * _cachedMediaTid; // +0x20
    unsigned long long _protectedDataUnavailableTimestamp; // +0x28
    NSDictionary * _lastInfoDict; // +0x30
    unsigned long long _interruptionStartTime; // +0x38
}
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClear;
- (void)enableLockScreenControl;
- (void)clearLockScreenControl;
- (BOOL)isLockScreenServiceEnabled;
- (void)disableLockScreenControl;
- (void)asyncGetCoverURL;
- (void)updateLockScreenInfo;
- (void)updateLockScreenInfoWithCachedImage;
- (void)setupRemoteCommandCenter;
- (void)cleanupRemoteCommandCenter;
- (long long)handleRemoteCommand:(id)arg1;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)dealloc;
- (id)currentFeedTid;
- (BOOL)hasValidLockScreenContent;
- (void)setupBackgroundDetection;
- (void)stopBackgroundDetection;
- (void)onProtectedDataWillBecomeUnavailable:(id)arg1;
- (void)onProtectedDataDidBecomeAvailable:(id)arg1;
- (void)onPlayerDidStartPictureInPicture;
- (void)onPlayerDidStopPictureInPicture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (id)cachedCoverImage;
- (void)setCachedCoverImage:(id)arg1;
- (id)cachedMediaTid;
- (void)setCachedMediaTid:(id)arg1;
- (BOOL)protectedDataBecameUnavailable;
- (void)setProtectedDataBecameUnavailable:(BOOL)arg1;
- (unsigned long long)protectedDataUnavailableTimestamp;
- (void)setProtectedDataUnavailableTimestamp:(unsigned long long)arg1;
- (BOOL)isInPictureInPicture;
- (void)setIsInPictureInPicture:(BOOL)arg1;
- (BOOL)hasReportedLockAndGenPlayer;
- (void)setHasReportedLockAndGenPlayer:(BOOL)arg1;
- (id)lastInfoDict;
- (void)setLastInfoDict:(id)arg1;
- (unsigned long long)interruptionStartTime;
- (void)setInterruptionStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
