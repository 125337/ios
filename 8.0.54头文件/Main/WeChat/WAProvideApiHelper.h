@interface WAProvideApiHelper : NSObject
{
    BOOL _isTempAppId; // +0x8
    WAProvideApiConfig * _config; // +0x10
    WAContact * _waContact; // +0x18
    WAAppTask * _task; // +0x20
    WAPackageSweeperLogic * _sweepLogic; // +0x28
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (unsigned long long)getNameIndex;
- (void)fillDefaultConfig;
- (void)sweepData;
- (BOOL)startUseApi;
- (void)invokeApi:(id)arg1 Param:(id)arg2 CallbackId:(unsigned int)arg3;
- (void)stopUseApi;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)waContact;
- (void)setWaContact:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (BOOL)isTempAppId;
- (void)setIsTempAppId:(BOOL)arg1;
- (id)sweepLogic;
- (void)setSweepLogic:(id)arg1;
- (void).cxx_destruct;
@end

