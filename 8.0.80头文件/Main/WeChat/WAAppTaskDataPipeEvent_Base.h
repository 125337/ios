@interface WAAppTaskDataPipeEvent_Base : NSObject
{
    WAAppTask * _weakTask; // +0x8
    NSDictionary * _dicData; // +0x10
}
- (unsigned long long)eventType;
- (id)description;
- (id)weakTask;
- (void)setWeakTask:(id)arg1;
- (id)dicData;
- (void)setDicData:(id)arg1;
- (void).cxx_destruct;
@end
