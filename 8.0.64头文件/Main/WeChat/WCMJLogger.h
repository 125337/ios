@interface WCMJLogger : NSObject <OMJLoggingProvider>
- (void)logInfoWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logDebugWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logWarnWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logErrorWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logFatalWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
@end
