@interface FindFriendRedDotEventSender : NSObject <WCFinderRedDotExt>
{
    BOOL _active; // +0x8
    NSMutableSet * _observingPaths; // +0x10
}
- (id)init;
- (void)addObservingRedDotPaths:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (BOOL)isActive;
- (id)observingPaths;
- (void)setObservingPaths:(id)arg1;
- (void).cxx_destruct;
@end
