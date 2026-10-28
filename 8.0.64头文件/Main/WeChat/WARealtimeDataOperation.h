@interface WARealtimeDataOperation : MMObject
{
    int _operationId; // +0x8
    int _type; // +0xc
    unsigned int _retryCount; // +0x10
    unsigned int _lastOperateTimeStamp; // +0x14
    NSString * _appid; // +0x18
    unsigned long long _priorityLevel; // +0x20
    NSData * _contentsBytes; // +0x28
}
- (unsigned long long)dataSize;
- (BOOL)time:(unsigned int)arg1 inRetryInterval:(unsigned int)arg2;
- (id)description;
- (int)operationId;
- (void)setOperationId:(int)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned long long)priorityLevel;
- (void)setPriorityLevel:(unsigned long long)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)contentsBytes;
- (void)setContentsBytes:(id)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned int)lastOperateTimeStamp;
- (void)setLastOperateTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
