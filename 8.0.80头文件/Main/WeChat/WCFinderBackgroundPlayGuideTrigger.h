@interface WCFinderBackgroundPlayGuideTrigger : NSObject
{
    BOOL _waitingForUnlockAndActive; // +0x8
    BOOL _didReceiveUnlock; // +0x9
    BOOL _unlockAndActiveQualified; // +0xa
    id _owner; // +0x10
    NSString * _pendingFeedID; // +0x18
    NSNotification * _lastLockNotification; // +0x20
    double _lockTime; // +0x28
    double _displayExpireTime; // +0x30
}
+ (id)sharedInstance;
- (void)beginLockEventIfNeeded:(id)arg1;
- (void)recordCandidateWithOwner:(id)arg1 feedID:(id)arg2;
- (void)handleProtectedDataDidBecomeAvailable;
- (void)handleApplicationDidBecomeActive;
- (id)pendingFeedIDForOwner:(id)arg1;
- (BOOL)shouldRetryDisplayForOwner:(id)arg1;
- (void)clearPending;
- (void)clearPendingForOwner:(id)arg1;
- (void)updateQualificationIfNeeded;
- (BOOL)isReadyForOwner:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)pendingFeedID;
- (void)setPendingFeedID:(id)arg1;
- (id)lastLockNotification;
- (void)setLastLockNotification:(id)arg1;
- (double)lockTime;
- (void)setLockTime:(double)arg1;
- (double)displayExpireTime;
- (void)setDisplayExpireTime:(double)arg1;
- (BOOL)waitingForUnlockAndActive;
- (void)setWaitingForUnlockAndActive:(BOOL)arg1;
- (BOOL)didReceiveUnlock;
- (void)setDidReceiveUnlock:(BOOL)arg1;
- (BOOL)unlockAndActiveQualified;
- (void)setUnlockAndActiveQualified:(BOOL)arg1;
- (void).cxx_destruct;
@end
