@interface MMMusicPlayerErrInfo : NSObject
{
    long long _errCode; // +0x8
    NSString * _errMsg; // +0x10
    long long _ksAudioPlayerErrorType; // +0x18
    NSError * _innerError; // +0x20
}
- (id)description;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (long long)ksAudioPlayerErrorType;
- (void)setKsAudioPlayerErrorType:(long long)arg1;
- (id)innerError;
- (void)setInnerError:(id)arg1;
- (void).cxx_destruct;
@end
