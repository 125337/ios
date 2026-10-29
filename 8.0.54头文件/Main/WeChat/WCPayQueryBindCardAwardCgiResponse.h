@interface WCPayQueryBindCardAwardCgiResponse : NSObject
{
    NSString * _retmsg; // +0x8
    long long _retcode; // +0x10
    WCPayBindCardActivityChangeInfo * _activity_change_info; // +0x18
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)retmsg;
- (void)setRetmsg:(id)arg1;
- (long long)retcode;
- (void)setRetcode:(long long)arg1;
- (id)activity_change_info;
- (void)setActivity_change_info:(id)arg1;
- (void).cxx_destruct;
@end

