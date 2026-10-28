@interface JSAPIVerifyOverhead : NSObject
{
    timeval _startTime; // +0x8
    NSString * _url; // +0x18
    long long _cgi; // +0x20
}
- (id)initWithUrl:(id)arg1 cgi:(long long)arg2;
- (void)computeTimeConsumption:(BOOL)arg1 appId:(id)arg2 errCode:(long long)arg3;
- (void).cxx_destruct;
@end
