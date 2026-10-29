@interface MiniTaskUIRecentUseRecord : MMObject <PBCoding>
{
    unsigned int _lastUpdateTime; // +0x8
    NSString * _taskInnerKey; // +0x10
}
+ (void)PBArrayAdd_taskInnerKey;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)taskInnerKey;
- (void)setTaskInnerKey:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
