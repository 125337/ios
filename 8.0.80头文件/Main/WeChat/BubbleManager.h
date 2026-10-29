@interface BubbleManager : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * m_lock; // +0x8
    NSMutableDictionary * m_bubbleInfoDict; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)bubbleInfoWithType:(unsigned long long)arg1 position:(unsigned long long)arg2 isSender:(BOOL)arg3;
- (id)bubbleInfoWithType:(unsigned long long)arg1 position:(unsigned long long)arg2 style:(long long)arg3 isSender:(BOOL)arg4;
- (void).cxx_destruct;
@end
