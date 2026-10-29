@interface WCSessionPerformanceService : MMObject <WCAccountSwitchProtocol>
{
    NSMutableArray * performanceModels; // +0x8
    unsigned int pId; // +0x10
    NSString * pName; // +0x18
    unsigned int reportSeq; // +0x20
}
+ (id)sharedPerformanceService;
- (void)onInit;
- (void)onClearData;
- (void)onEnterBackground;
- (void)recordPerformanceData:(id)arg1;
- (void)reportPerformanceDataByIDKey:(id)arg1;
- (void)reportAndSavePerformanceData:(BOOL)arg1;
- (id)getSessionPerformanceStatStr:(id)arg1;
- (void)reportSessionPerformanceStat:(id)arg1 withLogId:(unsigned int)arg2;
- (id)getPerformanceStatItemAttr:(id)arg1 withSubSeq:(unsigned long long)arg2 withSubSeqSum:(unsigned long long)arg3;
- (id)getPerformanceJsonString:(id)arg1;
- (id)getDataMMKV;
- (id)getConfigMMKV;
- (void).cxx_destruct;
@end

