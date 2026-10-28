@interface WCFinderPriorityTask : NSObject
{
    BOOL _isFinished; // +0x8
    unsigned long long _priority; // +0x10
    unsigned long long _taskIndex; // +0x18
    NSString * _identifier; // +0x20
    id /* block */ _mediaWrapCreateBlock; // +0x28
    NSString * _token; // +0x30
    unsigned long long _commentScene; // +0x38
    WCFinderFeedMediaWrap * _associateMediaWrap; // +0x40
    unsigned long long _timestamp; // +0x48
}
- (id)initWithIdentifier:(id)arg1 priority:(unsigned long long)arg2;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (unsigned long long)taskIndex;
- (void)setTaskIndex:(unsigned long long)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id /* block */)mediaWrapCreateBlock;
- (void)setMediaWrapCreateBlock:(id /* block */)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (unsigned long long)commentScene;
- (void)setCommentScene:(unsigned long long)arg1;
- (id)associateMediaWrap;
- (void)setAssociateMediaWrap:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
