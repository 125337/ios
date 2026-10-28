@interface WCPaySetPayUserDutyCgiResp : NSObject
{
    unsigned int _retcode; // +0x8
    NSString * _retmsg; // +0x10
}
+ (id)genFromDictionary:(id)arg1;
- (unsigned int)retcode;
- (void)setRetcode:(unsigned int)arg1;
- (id)retmsg;
- (void)setRetmsg:(id)arg1;
- (void).cxx_destruct;
@end
