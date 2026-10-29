@interface WCBaseControlMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * m_arrLogicStack; // +0x8
}
- (id)init;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (unsigned int)startLogic:(id)arg1;
- (id)getLogic:(unsigned int)arg1;
- (BOOL)isCurrentLogic:(id)arg1;
- (id)getCurrentLogic;
- (void)stopCurrentLogic;
- (void)stopLogic:(unsigned int)arg1;
- (id)getAllLogic;
- (void)cancelAllLogic;
- (void)cancelAllLogicExcept:(id)arg1;
- (void).cxx_destruct;
@end

