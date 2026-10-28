@interface ChatLogRawMediaTaskInfo : NSObject <PBCoding>
{
    NSString * _userName; // +0x8
    unsigned long long _localID; // +0x10
    unsigned long long _taskSize; // +0x18
    unsigned long long _taskType; // +0x20
    NSMutableArray * _innerTaskArray; // +0x28
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_taskSize;
+ (void)PBArrayAdd_taskType;
+ (void)PBArrayAdd_innerTaskArray;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)localID;
- (void)setLocalID:(unsigned long long)arg1;
- (unsigned long long)taskSize;
- (void)setTaskSize:(unsigned long long)arg1;
- (unsigned long long)taskType;
- (void)setTaskType:(unsigned long long)arg1;
- (id)innerTaskArray;
- (void)setInnerTaskArray:(id)arg1;
- (void).cxx_destruct;
@end
