@interface WXPLiteAppNetworkResponse : NSObject <LiteAppDynamicModuleObject>
{
    long long _errCode; // +0x8
    NSString * _errMsg; // +0x10
    NSData * _data; // +0x18
    NSDictionary * _extraInfo; // +0x20
}
- (id)initWithErrCode:(long long)arg1 errMsg:(id)arg2 data:(id)arg3;
- (id)toDictionary;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
