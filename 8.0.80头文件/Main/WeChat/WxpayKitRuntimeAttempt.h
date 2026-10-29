@interface WxpayKitRuntimeAttempt : NSObject
{
    long long _beganMs; // +0x8
    BOOL _ended; // +0x10
    NSString * _failedStage; // +0x18
    long long _failedSpan; // +0x20
    long long _failedDurMs; // +0x28
    NSString * _failedMessage; // +0x30
    long long _number; // +0x38
    long long _spanId; // +0x40
}
+ (id)begin;
+ (void)resetForTest;
- (id)detail;
- (long long)beginStage:(id)arg1;
- (void)failStage:(id)arg1 span:(long long)arg2 code:(id)arg3 message:(id)arg4 durMs:(long long)arg5;
- (void)finishWithCode:(id)arg1 message:(id)arg2;
- (long long)number;
- (long long)spanId;
- (void).cxx_destruct;
@end
