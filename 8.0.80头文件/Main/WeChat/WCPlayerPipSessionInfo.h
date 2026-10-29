@interface WCPlayerPipSessionInfo : NSObject
{
    BOOL _isPipStoppedByEnterForeground; // +0x8
    int _startTime; // +0xc
    int _stopTime; // +0x10
    NSString * _pipId; // +0x18
    NSMutableArray * _arrTaskId; // +0x20
    long long _stopReason; // +0x28
}
- (id)init;
- (long long)getDisplayPipWindowReason;
- (id)pipId;
- (void)setPipId:(id)arg1;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)stopTime;
- (void)setStopTime:(int)arg1;
- (id)arrTaskId;
- (void)setArrTaskId:(id)arg1;
- (long long)stopReason;
- (void)setStopReason:(long long)arg1;
- (BOOL)isPipStoppedByEnterForeground;
- (void)setIsPipStoppedByEnterForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
