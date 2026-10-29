@interface MMStorageBGTaskItem : NSObject
{
    int _priority; // +0x8
    NSString * _name; // +0x10
    long long _earliestStart; // +0x18
    id /* block */ _launchBlock; // +0x20
    id /* block */ _cancelBlock; // +0x28
}
- (id)name;
- (void)setName:(id)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (long long)earliestStart;
- (void)setEarliestStart:(long long)arg1;
- (id /* block */)launchBlock;
- (void)setLaunchBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
