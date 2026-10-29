@interface WCSessionDSLExecuter : MMObject
{
    WCSessionDSLExplainer * _sessionDSLExplainer; // +0x8
}
- (id)init;
- (id)executeInstruction:(id)arg1 withDataPath:(id)arg2;
- (BOOL)checkJsonRightful:(id)arg1;
- (id)sessionDSLExplainer;
- (void)setSessionDSLExplainer:(id)arg1;
- (void).cxx_destruct;
@end
