@interface CgiReportFlowGuarder : NSObject <IOnCgiReportFlowControl>
{
    NSMutableDictionary * _configMap; // +0x8
    NSMutableDictionary * _controlData; // +0x10
    NSMutableSet * _timerKey; // +0x18
}
- (id)init;
- (void)reset;
- (void)readExptConfig;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onCgiFlowControl:(unsigned int)arg1 andModel:(id)arg2;
- (BOOL)checkToFlowControl:(unsigned int)arg1 andReportData:(id)arg2;
- (void)flowControl:(id)arg1 andReportData:(id)arg2 andConfigModel:(id)arg3;
- (void)startTimer:(id)arg1 andTimeSecond:(double)arg2;
- (void)sizeOut:(id)arg1;
- (void)startReq:(id)arg1;
- (id)configMap;
- (void)setConfigMap:(id)arg1;
- (id)controlData;
- (void)setControlData:(id)arg1;
- (id)timerKey;
- (void)setTimerKey:(id)arg1;
- (void).cxx_destruct;
@end
