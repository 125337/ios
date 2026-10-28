@interface TaskInfo : MMObject
{
    BOOL _bIsPresented; // +0x8
    double taskAddTime; // +0x10
    NSString * taskBizKey; // +0x18
}
- (double)taskAddTime;
- (void)setTaskAddTime:(double)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (BOOL)bIsPresented;
- (void)setBIsPresented:(BOOL)arg1;
- (void).cxx_destruct;
@end
