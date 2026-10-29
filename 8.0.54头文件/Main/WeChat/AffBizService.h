@interface AffBizService : MMUserService <MMServiceProtocol>
{
    AffBizCgiProxy * _cgiProxy; // +0x8
}
+ (id)shared;
- (void)setProxyIlink:(BOOL)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)cgiProxy;
- (void)setCgiProxy:(id)arg1;
- (void).cxx_destruct;
@end

