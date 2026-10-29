@interface MiniRecTransitionContext : NSObject
{
    unsigned long long _transitionType; // +0x8
    NSString * _taskName; // +0x10
    NSString * _taskKey; // +0x18
}
- (id)initWithTaskName:(id)arg1 taskKey:(id)arg2 type:(unsigned long long)arg3;
- (BOOL)shouldMinimizeAsContent;
- (BOOL)shouldMinimizeAsDefault;
- (id)fooTaskData;
- (unsigned long long)transitionType;
- (void)setTransitionType:(unsigned long long)arg1;
- (id)taskName;
- (void)setTaskName:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (void).cxx_destruct;
@end
