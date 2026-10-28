@interface OMJILinkAppClientParams : NSObject
{
    NSString * _appID; // +0x8
    OMJILinkLoginParams * _loginParams; // +0x10
    id /* block */ _loginParamsGetterBlock; // +0x18
}
- (id)initWithAppID:(id)arg1 loginParams:(id)arg2;
- (id)initWithAppID:(id)arg1 loginParamsGetterBlock:(id /* block */)arg2;
- (id)appID;
- (id)loginParams;
- (id /* block */)loginParamsGetterBlock;
- (void).cxx_destruct;
@end
