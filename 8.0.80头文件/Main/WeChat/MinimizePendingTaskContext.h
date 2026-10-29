@interface MinimizePendingTaskContext : NSObject
{
    NSObject<IMinimizeTaskDelegateInterface> * _notifyDelegate; // +0x8
    NSString * _taskBizName; // +0x10
    NSString * _taskBizKey; // +0x18
    unsigned long long _generateType; // +0x20
    UIViewController * _weakVC; // +0x28
}
- (id)initWithTaskBizName:(id)arg1 taskBizKey:(id)arg2 notifyDelegate:(id)arg3 generateType:(unsigned long long)arg4 weakVC:(id)arg5;
- (BOOL)checkData;
- (id)description;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (unsigned long long)generateType;
- (void)setGenerateType:(unsigned long long)arg1;
- (id)weakVC;
- (void)setWeakVC:(id)arg1;
- (void).cxx_destruct;
@end
