@interface WCFinderRealNameVerifyFailModel : NSObject
{
    int _ret; // +0x8
    NSString * _msg; // +0x10
    FinderLiveErrorPage * _errorPage; // +0x18
}
- (int)ret;
- (void)setRet:(int)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (id)errorPage;
- (void)setErrorPage:(id)arg1;
- (void).cxx_destruct;
@end

