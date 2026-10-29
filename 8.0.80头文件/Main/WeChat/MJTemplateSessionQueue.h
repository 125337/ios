@interface MJTemplateSessionQueue : NSObject
{
    MJTemplateSession * _workingSession; // +0x8
    NSMutableArray * _pendingSessions; // +0x10
}
- (id)init;
- (BOOL)isIdle;
- (BOOL)containsSession:(id)arg1;
- (BOOL)isSessionWorking:(id)arg1;
- (BOOL)isSessionPending:(id)arg1;
- (BOOL)addPendingSession:(id)arg1;
- (BOOL)removePendingSession:(id)arg1;
- (id)scheduleNextWorkingSession;
- (BOOL)releaseWorkingSession;
- (BOOL)releaseWorkingSession:(id)arg1;
- (id)workingSession;
- (id)pendingSessions;
- (void).cxx_destruct;
@end
