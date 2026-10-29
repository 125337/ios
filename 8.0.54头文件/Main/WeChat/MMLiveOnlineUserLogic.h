@interface MMLiveOnlineUserLogic : NSObject
{
    MMLiveTaskId * _taskId; // +0x8
    id <MMLiveOnlineUserLogicDelegate> _logicDelegate; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)fetchOnlineUserList;
- (BOOL)kickAudience:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (void).cxx_destruct;
@end

