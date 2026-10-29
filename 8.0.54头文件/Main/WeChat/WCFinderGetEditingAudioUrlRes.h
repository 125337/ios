@interface WCFinderGetEditingAudioUrlRes : NSObject
{
    NSString * _audioUrl; // +0x8
    NSString * _errMsg; // +0x10
    long long _errCode; // +0x18
}
- (id)audioUrl;
- (void)setAudioUrl:(id)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (void).cxx_destruct;
@end

