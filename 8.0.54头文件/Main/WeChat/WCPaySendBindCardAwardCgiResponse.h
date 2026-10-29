@interface WCPaySendBindCardAwardCgiResponse : NSObject
{
    long long _retcode; // +0x8
    NSString * _retmsg; // +0x10
    long long _result_code; // +0x18
    NSString * _result_msg; // +0x20
    NSString * _alert_wording; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (long long)retcode;
- (void)setRetcode:(long long)arg1;
- (id)retmsg;
- (void)setRetmsg:(id)arg1;
- (long long)result_code;
- (void)setResult_code:(long long)arg1;
- (id)result_msg;
- (void)setResult_msg:(id)arg1;
- (id)alert_wording;
- (void)setAlert_wording:(id)arg1;
- (void).cxx_destruct;
@end

