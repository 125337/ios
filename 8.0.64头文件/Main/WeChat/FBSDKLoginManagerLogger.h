@interface FBSDKLoginManagerLogger : NSObject
{
    NSString * _identifier; // +0x8
    NSMutableDictionary * _extras; // +0x10
    NSString * _lastResult; // +0x18
    NSError * _lastError; // +0x20
    NSString * _authMethod; // +0x28
    NSString * _loggingToken; // +0x30
}
+ (id)loggerFromParameters:(id)arg1;
- (id)initWithLoggingToken:(id)arg1;
- (void)startSessionForLoginManager:(id)arg1;
- (void)endSession;
- (void)startAuthMethod:(id)arg1;
- (void)endLoginWithResult:(id)arg1 error:(id)arg2;
- (id)parametersWithTimeStampAndClientState:(id)arg1 forAuthMethod:(id)arg2;
- (void)willAttemptAppSwitchingBehavior;
- (void)systemAuthDidShowDialog:(BOOL)arg1 isUnTOSedDevice:(BOOL)arg2;
- (void)logNativeAppDialogResult:(BOOL)arg1 dialogDuration:(double)arg2;
- (id)clientStateForAuthMethod:(id)arg1 andExistingState:(id)arg2;
- (id)_parametersForNewEvent;
- (void)logEvent:(id)arg1 params:(id)arg2;
- (void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void).cxx_destruct;
@end
