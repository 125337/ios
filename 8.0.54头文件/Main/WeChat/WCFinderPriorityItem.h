@interface WCFinderPriorityItem : NSObject
{
    NSString * _identifierKey; // +0x8
    NSString * _groupId; // +0x10
    long long _priority; // +0x18
    unsigned long long _timestamp; // +0x20
    long long _batchIndex; // +0x28
    NSObject * _dataObj; // +0x30
}
- (long long)compareWith:(id)arg1;
- (id)description;
- (id)identifierKey;
- (void)setIdentifierKey:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)batchIndex;
- (void)setBatchIndex:(long long)arg1;
- (id)dataObj;
- (void)setDataObj:(id)arg1;
- (void).cxx_destruct;
@end

