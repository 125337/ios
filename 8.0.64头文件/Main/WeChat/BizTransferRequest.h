@interface BizTransferRequest : NSObject
{
    NSString * _h5Url; // +0x8
    NSString * _scope; // +0x10
    NSString * _cgiUrl; // +0x18
    long long _method; // +0x20
    NSDictionary * _reqHeaders; // +0x28
    NSString * _reqBody; // +0x30
}
+ (id)makeWithH5Url:(id)arg1 scope:(id)arg2 cgiUrl:(id)arg3 method:(long long)arg4 reqHeaders:(id)arg5 reqBody:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)cgiUrl;
- (void)setCgiUrl:(id)arg1;
- (long long)method;
- (void)setMethod:(long long)arg1;
- (id)reqHeaders;
- (void)setReqHeaders:(id)arg1;
- (id)reqBody;
- (void)setReqBody:(id)arg1;
- (void).cxx_destruct;
@end
