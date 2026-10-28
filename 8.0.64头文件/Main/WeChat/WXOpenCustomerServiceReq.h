@interface WXOpenCustomerServiceReq : BaseReq
{
    NSString * _url; // +0x18
    NSData * _corpid; // +0x20
}
+ (id)object;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)corpid;
- (void)setCorpid:(id)arg1;
- (void).cxx_destruct;
@end
