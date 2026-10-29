@interface MMWebViewWuidToken : NSObject
{
    NSString * _token; // +0x8
    double _expireTime; // +0x10
}
- (id)token;
- (void)setToken:(id)arg1;
- (double)expireTime;
- (void)setExpireTime:(double)arg1;
- (void).cxx_destruct;
@end

