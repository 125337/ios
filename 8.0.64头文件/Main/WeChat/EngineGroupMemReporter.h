@interface EngineGroupMemReporter : NSObject
{
    unsigned long long _beforeEngineGroupCreate_All; // +0x8
    unsigned long long _afterEngineGroupCreate_All; // +0x10
    unsigned long long _beforeEngineGroupDestroy_All; // +0x18
    unsigned long long _afterEngineGroupDestroy_All; // +0x20
    unsigned long long _beforeFreeMem_All; // +0x28
    unsigned long long _afterFreeMem_All; // +0x30
    unsigned long long _avgMem_All; // +0x38
    int _avgRecordCount; // +0x40
    unsigned long long _beforeFreeMem_Vm; // +0x48
    unsigned long long _afterFreeMem_Vm; // +0x50
    unsigned long long _beforeFreeMem_Image; // +0x58
    unsigned long long _afterFreeMem_Image; // +0x60
    unsigned long long _beforeFreeMem_Picture; // +0x68
    unsigned long long _afterFreeMem_Picture; // +0x70
    long long _releaseType; // +0x78
}
+ (id)createReporter;
- (void)beforeEngineGroupCreate;
- (void)afterEngineGroupCreate;
- (void)beforeEngineGroupDestroy;
- (void)afterEngineGroupDestroy;
- (void)beforeEngineGroupFreeMem:(id)arg1;
- (void)afterEngineGroupFreeMem:(id)arg1 recreateContext:(BOOL)arg2;
- (void)recordAvgMem;
- (void)allBizExit;
- (void)recordBizEngine;
- (void)report:(int)arg1;
- (long long)releaseType;
- (void)setReleaseType:(long long)arg1;
@end
