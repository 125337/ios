@interface MSEMessageMetaDataFailTaskItem : NSObject <PBCoding>
{
    NSString * _sessionID; // +0x8
    NSString * _taskID; // +0x10
}
+ (void)PBArrayAdd_sessionID;
+ (void)PBArrayAdd_taskID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end
