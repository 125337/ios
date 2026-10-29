@interface CBTHeadlessRoundKitResult : NSObject
{
    int _decision; // +0x8
    int _errCode; // +0xc
    long long _kind; // +0x10
    NSString * _errMsg; // +0x18
    NSString * _voipSessionID; // +0x20
}
- (long long)kind;
- (void)setKind:(long long)arg1;
- (int)decision;
- (void)setDecision:(int)arg1;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (void).cxx_destruct;
@end
