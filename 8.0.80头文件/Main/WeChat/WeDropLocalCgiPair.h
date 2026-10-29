@interface WeDropLocalCgiPair : MMObject
{
    Class _request; // +0x8
    Class _response; // +0x10
}
+ (id)pairWithRequest:(Class)arg1 response:(Class)arg2;
- (Class)request;
- (void)setRequest:(Class)arg1;
- (Class)response;
- (void)setResponse:(Class)arg1;
- (void).cxx_destruct;
@end
