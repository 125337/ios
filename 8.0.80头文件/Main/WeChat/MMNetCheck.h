@interface MMNetCheck : NSObject
{
    NSURLSession * _session; // +0x8
}
+ (id)shareInstance;
- (id)init;
- (void)startHttpCheckWithParam:(id)arg1 url:(id)arg2;
- (void)startHttpCheck:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void).cxx_destruct;
@end
