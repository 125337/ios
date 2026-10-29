@interface QGPOnLayerLoadFinishEvent : QGPEvent
{
    long long _errorCode; // +0x18
    NSString * _errorMsg; // +0x20
}
+ (id)createErrorCode:(long long)arg1 errorMsg:(id)arg2;
+ (id)successEvent;
+ (id)internalErrorEvent:(id)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (void).cxx_destruct;
@end
