@interface ForwardScheduleGroup : NSObject
{
    BOOL _scheduleEnabled; // +0x8
    BOOL _orderBroken; // +0x9
    BOOL _hasReported; // +0xa
    BOOL _hasReportedInsert; // +0xb
    NSMutableArray * _items; // +0x10
    NSString * _chatName; // +0x18
    unsigned long long _expectCount; // +0x20
    unsigned long long _enqueuedCount; // +0x28
    double _lastActiveTime; // +0x30
    unsigned long long _beginTimeMs; // +0x38
    unsigned long long _finishedCount; // +0x40
    unsigned long long _disorderCount; // +0x48
    long long _maxFinishedSeq; // +0x50
    unsigned long long _maxSeqGap; // +0x58
    NSMutableString * _expectTypes; // +0x60
    NSMutableString * _actualTypes; // +0x68
}
- (id)init;
- (id)items;
- (void)setItems:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned long long)expectCount;
- (void)setExpectCount:(unsigned long long)arg1;
- (unsigned long long)enqueuedCount;
- (void)setEnqueuedCount:(unsigned long long)arg1;
- (double)lastActiveTime;
- (void)setLastActiveTime:(double)arg1;
- (BOOL)scheduleEnabled;
- (void)setScheduleEnabled:(BOOL)arg1;
- (BOOL)orderBroken;
- (void)setOrderBroken:(BOOL)arg1;
- (unsigned long long)beginTimeMs;
- (void)setBeginTimeMs:(unsigned long long)arg1;
- (unsigned long long)finishedCount;
- (void)setFinishedCount:(unsigned long long)arg1;
- (unsigned long long)disorderCount;
- (void)setDisorderCount:(unsigned long long)arg1;
- (long long)maxFinishedSeq;
- (void)setMaxFinishedSeq:(long long)arg1;
- (unsigned long long)maxSeqGap;
- (void)setMaxSeqGap:(unsigned long long)arg1;
- (id)expectTypes;
- (void)setExpectTypes:(id)arg1;
- (id)actualTypes;
- (void)setActualTypes:(id)arg1;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg1;
- (BOOL)hasReportedInsert;
- (void)setHasReportedInsert:(BOOL)arg1;
- (void).cxx_destruct;
@end
