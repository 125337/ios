@interface NewLifePagePerformanceReporter : NSObject
{
    NSMutableDictionary * _contextMap; // +0x8
}
+ (void)addExtraInfo:(id)arg1 toParams:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)recordPageStart:(id)arg1 srcPage:(id)arg2;
- (id)recordPageStart:(id)arg1;
- (void)recordPageStep:(id)arg1 pageSessionId:(id)arg2;
- (void)recordPageStep:(id)arg1 pageSessionId:(id)arg2 extraInfo:(id)arg3;
- (void)recordPageStep:(id)arg1;
- (void)internalRecordPageStep:(id)arg1 extraInfo:(id)arg2;
- (BOOL)isEndStep:(id)arg1 context:(id)arg2;
- (BOOL)isStepDescNeedReport:(id)arg1;
- (void)internalReportEnterEnd:(id)arg1 timeFromFirstStep:(unsigned long long)arg2 context:(id)arg3 extraInfo:(id)arg4;
- (id)createStepDesc:(id)arg1;
- (void)onClear;
- (id)contextMap;
- (void)setContextMap:(id)arg1;
- (void).cxx_destruct;
@end

